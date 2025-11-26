// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from urp_cvt_interfaces:srv/GenerateCVTSamples.idl
// generated code does not contain a copyright notice

#ifndef URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__STRUCT_H_
#define URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GenerateCVTSamples in the package urp_cvt_interfaces.
typedef struct urp_cvt_interfaces__srv__GenerateCVTSamples_Request
{
  double x_min;
  double x_max;
  double y_min;
  double y_max;
  int32_t k;
  double tool_width;
  double overlap;
  int32_t max_iters;
  double eps;
  int32_t seed;
  double grid_step;
} urp_cvt_interfaces__srv__GenerateCVTSamples_Request;

// Struct for a sequence of urp_cvt_interfaces__srv__GenerateCVTSamples_Request.
typedef struct urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence
{
  urp_cvt_interfaces__srv__GenerateCVTSamples_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} urp_cvt_interfaces__srv__GenerateCVTSamples_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_array__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateCVTSamples in the package urp_cvt_interfaces.
typedef struct urp_cvt_interfaces__srv__GenerateCVTSamples_Response
{
  geometry_msgs__msg__PoseArray waypoints;
  bool success;
  double mean_movement;
  int32_t iters;
  rosidl_runtime_c__String message;
} urp_cvt_interfaces__srv__GenerateCVTSamples_Response;

// Struct for a sequence of urp_cvt_interfaces__srv__GenerateCVTSamples_Response.
typedef struct urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence
{
  urp_cvt_interfaces__srv__GenerateCVTSamples_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} urp_cvt_interfaces__srv__GenerateCVTSamples_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__STRUCT_H_
