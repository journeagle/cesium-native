// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "IntegerJsonHandler.h"
#include "NamedObjectJsonHandler.h"
#include <CesiumGltf/Reader.h>

namespace CesiumGltf {
struct Texture;

class TextureJsonHandler : public NamedObjectJsonHandler {
public:
  TextureJsonHandler(const ReadModelOptions& options) noexcept;
  void reset(IJsonHandler* pHandler, Texture* pObject);
  Texture* getObject();
  virtual void reportWarning(
      const std::string& warning,
      std::vector<std::string>&& context = std::vector<std::string>()) override;

  virtual IJsonHandler*
  readObjectKey(const char* str, size_t length, bool copy) override;

protected:
  IJsonHandler*
  TextureKey(const std::string& objectType, const char* str, Texture& o);

private:
  Texture* _pObject = nullptr;
  IntegerJsonHandler<int32_t> _sampler;
  IntegerJsonHandler<int32_t> _source;
};
} // namespace CesiumGltf
