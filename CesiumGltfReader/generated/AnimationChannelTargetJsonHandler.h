// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/AnimationChannelTarget.h"
#include "CesiumGltf/ReaderContext.h"
#include "CesiumJsonReader/IntegerJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"

namespace CesiumGltf {
struct ReaderContext;

class AnimationChannelTargetJsonHandler : public ExtensibleObjectJsonHandler {
public:
  using ValueType = AnimationChannelTarget;

  AnimationChannelTargetJsonHandler(const ReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, AnimationChannelTarget* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAnimationChannelTarget(
      const std::string& objectType,
      const std::string_view& str,
      AnimationChannelTarget& o);

private:
  class PathJsonHandler : public CesiumJsonReader::JsonHandler {
  public:
    PathJsonHandler() noexcept : CesiumJsonReader::JsonHandler() {}
    void reset(
        CesiumJsonReader::IJsonHandler* pParent,
        AnimationChannelTarget::Path* pEnum);
    virtual CesiumJsonReader::IJsonHandler*
    readString(const std::string_view& str) override;

  private:
    AnimationChannelTarget::Path* _pEnum = nullptr;
  };

  AnimationChannelTarget* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _node;
  PathJsonHandler _path;
};
} // namespace CesiumGltf
