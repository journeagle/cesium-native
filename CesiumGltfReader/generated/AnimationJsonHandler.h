// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "AnimationChannelJsonHandler.h"
#include "AnimationSamplerJsonHandler.h"
#include "NamedObjectJsonHandler.h"

#include <CesiumGltf/Animation.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltf {
class AnimationJsonHandler : public NamedObjectJsonHandler {
public:
  using ValueType = Animation;

  AnimationJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, Animation* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAnimation(
      const std::string& objectType,
      const std::string_view& str,
      Animation& o);

private:
  Animation* _pObject = nullptr;
  CesiumJsonReader::
      ArrayJsonHandler<AnimationChannel, AnimationChannelJsonHandler>
          _channels;
  CesiumJsonReader::
      ArrayJsonHandler<AnimationSampler, AnimationSamplerJsonHandler>
          _samplers;
};
} // namespace CesiumGltf
