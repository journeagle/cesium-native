#include "CesiumUtility/Uri.h"

#include <CesiumUtility/joinToString.h>

#include <uriparser/Uri.h>

#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <vector>

namespace CesiumUtility {
const char* HTTPS_PREFIX = "https:";
const char* HTTP_PREFIX = "http:";

std::string cesiumConformUrl(const std::string& url, bool useHttps) {
  // Prepend protocol to protocol-relative URIs.
  if (url.length() > 2 && url.at(0) == '/' && url.at(1) == '/') {
    return std::string(useHttps ? HTTPS_PREFIX : HTTP_PREFIX).append(url);
  }
  return url;
}

std::string Uri::resolve(
    const std::string& base,
    const std::string& relative,
    bool useBaseQuery,
    bool assumeHttpsDefault) {
  const std::string conformedBase = cesiumConformUrl(base, assumeHttpsDefault);
  const std::string conformedRelative =
      cesiumConformUrl(relative, assumeHttpsDefault);
  UriUriA baseUri;

  if (uriParseSingleUriA(&baseUri, conformedBase.c_str(), nullptr) !=
      URI_SUCCESS) {
    // Could not parse the base, so just use the relative directly and hope for
    // the best.
    return relative;
  }

  UriUriA relativeUri;
  if (uriParseSingleUriA(&relativeUri, conformedRelative.c_str(), nullptr) !=
      URI_SUCCESS) {
    // Could not parse one of the URLs, so just use the relative directly and
    // hope for the best.
    uriFreeUriMembersA(&baseUri);
    return relative;
  }

  UriUriA resolvedUri;
  if (uriAddBaseUriA(&resolvedUri, &relativeUri, &baseUri) != URI_SUCCESS) {
    uriFreeUriMembersA(&resolvedUri);
    uriFreeUriMembersA(&relativeUri);
    uriFreeUriMembersA(&baseUri);
    return relative;
  }

  if (uriNormalizeSyntaxA(&resolvedUri) != URI_SUCCESS) {
    uriFreeUriMembersA(&resolvedUri);
    uriFreeUriMembersA(&relativeUri);
    uriFreeUriMembersA(&baseUri);
    return relative;
  }

  int charsRequired;
  if (uriToStringCharsRequiredA(&resolvedUri, &charsRequired) != URI_SUCCESS) {
    uriFreeUriMembersA(&resolvedUri);
    uriFreeUriMembersA(&relativeUri);
    uriFreeUriMembersA(&baseUri);
    return relative;
  }

  std::string result(static_cast<size_t>(charsRequired), ' ');

  if (uriToStringA(
          const_cast<char*>(result.c_str()),
          &resolvedUri,
          charsRequired + 1,
          nullptr) != URI_SUCCESS) {
    uriFreeUriMembersA(&resolvedUri);
    uriFreeUriMembersA(&relativeUri);
    uriFreeUriMembersA(&baseUri);
    return relative;
  }

  if (useBaseQuery) {
    std::string query(baseUri.query.first, baseUri.query.afterLast);
    if (query.length() > 0) {
      if (resolvedUri.query.first) {
        result += "&" + query;
      } else {
        result += "?" + query;
      }
    }
  }

  uriFreeUriMembersA(&resolvedUri);
  uriFreeUriMembersA(&relativeUri);
  uriFreeUriMembersA(&baseUri);

  return result;
}

std::string Uri::addQuery(
    const std::string& uri,
    const std::string& key,
    const std::string& value) {
  // TODO
  if (uri.find('?') != std::string::npos) {
    return uri + "&" + key + "=" + value;
  }
  return uri + "?" + key + "=" + value;
  // UriUriA baseUri;

  // if (uriParseSingleUriA(&baseUri, uri.c_str(), nullptr) != URI_SUCCESS)
  //{
  //	// TODO: report error
  //	return uri;
  //}

  // uriFreeUriMembersA(&baseUri);
}

std::string Uri::getQueryValue(const std::string& url, const std::string& key) {
  // We need to conform the URL since it will fail parsing if it's
  // protocol-relative. However, it doesn't matter what protocol we use since
  // it's only extracting query parameters.
  const std::string conformedUrl = cesiumConformUrl(url, true);
  UriUriA uri;
  if (uriParseSingleUriA(&uri, conformedUrl.c_str(), nullptr) != URI_SUCCESS) {
    return "";
  }
  UriQueryListA* queryList;
  int itemCount;
  if (uriDissectQueryMallocA(
          &queryList,
          &itemCount,
          uri.query.first,
          uri.query.afterLast) != URI_SUCCESS) {
    uriFreeUriMembersA(&uri);
    return "";
  }
  UriQueryListA* p = queryList;
  while (p) {
    if (p->key && std::strcmp(p->key, key.c_str()) == 0) {
      std::string value = p->value ? p->value : "";
      uriUnescapeInPlaceA(value.data());
      uriFreeQueryListA(queryList);
      uriFreeUriMembersA(&uri);
      return value;
    }
    p = p->next;
  }
  uriFreeQueryListA(queryList);
  uriFreeUriMembersA(&uri);
  return "";
}

std::string Uri::substituteTemplateParameters(
    const std::string& templateUri,
    const std::function<SubstitutionCallbackSignature>& substitutionCallback) {
  std::string result;
  std::string placeholder;

  size_t startPos = 0;
  size_t nextPos;

  // Find the start of a parameter
  while ((nextPos = templateUri.find('{', startPos)) != std::string::npos) {
    result.append(templateUri, startPos, nextPos - startPos);

    // Find the end of this parameter
    ++nextPos;
    const size_t endPos = templateUri.find('}', nextPos);
    if (endPos == std::string::npos) {
      throw std::runtime_error("Unclosed template parameter");
    }

    placeholder = templateUri.substr(nextPos, endPos - nextPos);
    result.append(substitutionCallback(placeholder));

    startPos = endPos + 1;
  }

  result.append(templateUri, startPos, templateUri.length() - startPos);

  return result;
}

std::string Uri::escape(const std::string& s) {
  // In the worst case, escaping causes each character to turn into three.
  std::string result(s.size() * 3, '\0');
  char* pTerminator = uriEscapeExA(
      s.data(),
      s.data() + s.size(),
      result.data(),
      URI_FALSE,
      URI_FALSE);
  result.resize(size_t(pTerminator - result.data()));
  return result;
}

std::string Uri::getPath(const std::string& uri) {
  UriUriA parsedUri;
  if (uriParseSingleUriA(&parsedUri, uri.c_str(), nullptr) != URI_SUCCESS) {
    // Could not parse the URI, so return an empty string.
    return std::string();
  }

  // The initial string in this vector can be thought of as the "nothing" before
  // the first slash in the path.
  std::vector<std::string> parts{std::string()};

  UriPathSegmentA* pCurrent = parsedUri.pathHead;
  while (pCurrent != nullptr) {
    parts.emplace_back(std::string(
        pCurrent->text.first,
        size_t(pCurrent->text.afterLast - pCurrent->text.first)));
    pCurrent = pCurrent->next;
  }

  uriFreeUriMembersA(&parsedUri);

  return joinToString(parts, "/");
}

std::string Uri::setPath(const std::string& uri, const std::string& newPath) {
  UriUriA parsedUri;
  if (uriParseSingleUriA(&parsedUri, uri.c_str(), nullptr) != URI_SUCCESS) {
    // Could not parse the URI, so return an empty string.
    return std::string();
  }

  // Free the existing path. Strangely, uriparser doesn't provide any simple way
  // to do this.
  UriPathSegmentA* pCurrent = parsedUri.pathHead;
  while (pCurrent != nullptr) {
    UriPathSegmentA* pNext = pCurrent->next;
    free(pCurrent);
    pCurrent = pNext;
  }

  parsedUri.pathHead = nullptr;
  parsedUri.pathTail = nullptr;

  // Set the new path.
  if (!newPath.empty()) {
    std::string::size_type startPos = 0;
    do {
      std::string::size_type nextSlashIndex = newPath.find('/', startPos);

      // Skip the initial slash if there is one.
      if (nextSlashIndex == 0) {
        startPos = 1;
        continue;
      }

      UriPathSegmentA* pSegment =
          static_cast<UriPathSegmentA*>(malloc(sizeof(UriPathSegmentA)));
      memset(pSegment, 0, sizeof(UriPathSegmentA));

      if (parsedUri.pathHead == nullptr) {
        parsedUri.pathHead = pSegment;
        parsedUri.pathTail = pSegment;
      } else {
        parsedUri.pathTail->next = pSegment;
        parsedUri.pathTail = parsedUri.pathTail->next;
      }

      pSegment->text.first = newPath.data() + startPos;

      if (nextSlashIndex != std::string::npos) {
        pSegment->text.afterLast = newPath.data() + nextSlashIndex;
        startPos = nextSlashIndex + 1;
      } else {
        pSegment->text.afterLast = newPath.data() + newPath.size();
        startPos = nextSlashIndex;
      }
    } while (startPos != std::string::npos);
  }

  int charsRequired;
  if (uriToStringCharsRequiredA(&parsedUri, &charsRequired) != URI_SUCCESS) {
    uriFreeUriMembersA(&parsedUri);
    return uri;
  }

  std::string result(static_cast<size_t>(charsRequired), ' ');

  if (uriToStringA(
          const_cast<char*>(result.c_str()),
          &parsedUri,
          charsRequired + 1,
          nullptr) != URI_SUCCESS) {
    uriFreeUriMembersA(&parsedUri);
    return uri;
  }

  return result;
}

} // namespace CesiumUtility
