// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "AnimationChannelTargetJsonHandler.h"
#include "CesiumGltf/ReaderContext.h"
#include "CesiumJsonReader/IntegerJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"

namespace CesiumGltf {
struct ReaderContext;
struct AnimationChannel;

class AnimationChannelJsonHandler : public ExtensibleObjectJsonHandler {
public:
  using ValueType = AnimationChannel;

  AnimationChannelJsonHandler(const ReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, AnimationChannel* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAnimationChannel(
      const std::string& objectType,
      const std::string_view& str,
      AnimationChannel& o);

private:
  AnimationChannel* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _sampler;
  AnimationChannelTargetJsonHandler _target;
};
} // namespace CesiumGltf
