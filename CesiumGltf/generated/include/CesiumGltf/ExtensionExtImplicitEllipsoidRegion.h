// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/Library.h>
#include <CesiumUtility/ExtensibleObject.h>

namespace CesiumGltf {
/**
 * @brief Extension of `KHR_implicit_shapes.shape` to represent an implicit
 * ellipsoid region in a glTF model.
 */
struct CESIUMGLTF_API ExtensionExtImplicitEllipsoidRegion final
    : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "ExtensionExtImplicitEllipsoidRegion";
  /** @brief The official name of the extension. This should be the same as its
   * key in the `extensions` object. */
  static constexpr const char* ExtensionName = "EXT_implicit_ellipsoid_region";

  /**
   * @brief The radius along the semi-major axis of the reference ellipsoid in
   * meters. Corresponds to the radii along the X and Z axes.
   */
  double semiMajorAxisRadius = double();

  /**
   * @brief The radius along the semi-minor axis of the reference ellipsoid in
   * meters. Corresponds to the radius along the Y-axis.
   */
  double semiMinorAxisRadius = double();

  /**
   * @brief The minimum height of the region relative to the ellipsoid's
   * surface, in meters. May be negative.
   */
  double minHeight = double();

  /**
   * @brief The maximum height of the region relative to the ellipsoid's
   * surface, in meters. May be negative.
   */
  double maxHeight = double();

  /**
   * @brief The minimum latitude (a.k.a. polar angle) of the region, in radians.
   * Must be in the range [-pi/2, pi/2].
   */
  double minLatitude = -1.57079632679;

  /**
   * @brief The maximum latitude (a.k.a. polar angle) of the region, in radians.
   * Must be in the range [-pi/2, pi/2].
   */
  double maxLatitude = 1.57079632679;

  /**
   * @brief The minimum longitude (a.k.a. azimuthal angle) of the region, in
   * radians. Must be in the range [-pi, pi].
   */
  double minLongitude = -3.14159265359;

  /**
   * @brief The maximum longitude (a.k.a. azimuthal angle) of the region, in
   * radians. Must be in the range [-pi, pi].
   */
  double maxLongitude = 3.14159265359;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(ExtensionExtImplicitEllipsoidRegion));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));

    return accum;
  }
};
} // namespace CesiumGltf
