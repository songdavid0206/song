// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from urp_cvt_interfaces:srv/GenerateCVTSamples.idl
// generated code does not contain a copyright notice

#ifndef URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__TRAITS_HPP_
#define URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "urp_cvt_interfaces/srv/detail/generate_cvt_samples__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace urp_cvt_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateCVTSamples_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_min
  {
    out << "x_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min, out);
    out << ", ";
  }

  // member: x_max
  {
    out << "x_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max, out);
    out << ", ";
  }

  // member: y_min
  {
    out << "y_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_min, out);
    out << ", ";
  }

  // member: y_max
  {
    out << "y_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_max, out);
    out << ", ";
  }

  // member: k
  {
    out << "k: ";
    rosidl_generator_traits::value_to_yaml(msg.k, out);
    out << ", ";
  }

  // member: tool_width
  {
    out << "tool_width: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_width, out);
    out << ", ";
  }

  // member: overlap
  {
    out << "overlap: ";
    rosidl_generator_traits::value_to_yaml(msg.overlap, out);
    out << ", ";
  }

  // member: max_iters
  {
    out << "max_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iters, out);
    out << ", ";
  }

  // member: eps
  {
    out << "eps: ";
    rosidl_generator_traits::value_to_yaml(msg.eps, out);
    out << ", ";
  }

  // member: seed
  {
    out << "seed: ";
    rosidl_generator_traits::value_to_yaml(msg.seed, out);
    out << ", ";
  }

  // member: grid_step
  {
    out << "grid_step: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_step, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateCVTSamples_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min, out);
    out << "\n";
  }

  // member: x_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max, out);
    out << "\n";
  }

  // member: y_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_min, out);
    out << "\n";
  }

  // member: y_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_max, out);
    out << "\n";
  }

  // member: k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k: ";
    rosidl_generator_traits::value_to_yaml(msg.k, out);
    out << "\n";
  }

  // member: tool_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_width: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_width, out);
    out << "\n";
  }

  // member: overlap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overlap: ";
    rosidl_generator_traits::value_to_yaml(msg.overlap, out);
    out << "\n";
  }

  // member: max_iters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iters, out);
    out << "\n";
  }

  // member: eps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps: ";
    rosidl_generator_traits::value_to_yaml(msg.eps, out);
    out << "\n";
  }

  // member: seed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed: ";
    rosidl_generator_traits::value_to_yaml(msg.seed, out);
    out << "\n";
  }

  // member: grid_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_step: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_step, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateCVTSamples_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace urp_cvt_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use urp_cvt_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  urp_cvt_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use urp_cvt_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
{
  return urp_cvt_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<urp_cvt_interfaces::srv::GenerateCVTSamples_Request>()
{
  return "urp_cvt_interfaces::srv::GenerateCVTSamples_Request";
}

template<>
inline const char * name<urp_cvt_interfaces::srv::GenerateCVTSamples_Request>()
{
  return "urp_cvt_interfaces/srv/GenerateCVTSamples_Request";
}

template<>
struct has_fixed_size<urp_cvt_interfaces::srv::GenerateCVTSamples_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<urp_cvt_interfaces::srv::GenerateCVTSamples_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<urp_cvt_interfaces::srv::GenerateCVTSamples_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"

namespace urp_cvt_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateCVTSamples_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    out << "waypoints: ";
    to_flow_style_yaml(msg.waypoints, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: mean_movement
  {
    out << "mean_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_movement, out);
    out << ", ";
  }

  // member: iters
  {
    out << "iters: ";
    rosidl_generator_traits::value_to_yaml(msg.iters, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateCVTSamples_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints:\n";
    to_block_style_yaml(msg.waypoints, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: mean_movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_movement, out);
    out << "\n";
  }

  // member: iters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iters: ";
    rosidl_generator_traits::value_to_yaml(msg.iters, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateCVTSamples_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace urp_cvt_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use urp_cvt_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const urp_cvt_interfaces::srv::GenerateCVTSamples_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  urp_cvt_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use urp_cvt_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const urp_cvt_interfaces::srv::GenerateCVTSamples_Response & msg)
{
  return urp_cvt_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<urp_cvt_interfaces::srv::GenerateCVTSamples_Response>()
{
  return "urp_cvt_interfaces::srv::GenerateCVTSamples_Response";
}

template<>
inline const char * name<urp_cvt_interfaces::srv::GenerateCVTSamples_Response>()
{
  return "urp_cvt_interfaces/srv/GenerateCVTSamples_Response";
}

template<>
struct has_fixed_size<urp_cvt_interfaces::srv::GenerateCVTSamples_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<urp_cvt_interfaces::srv::GenerateCVTSamples_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<urp_cvt_interfaces::srv::GenerateCVTSamples_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<urp_cvt_interfaces::srv::GenerateCVTSamples>()
{
  return "urp_cvt_interfaces::srv::GenerateCVTSamples";
}

template<>
inline const char * name<urp_cvt_interfaces::srv::GenerateCVTSamples>()
{
  return "urp_cvt_interfaces/srv/GenerateCVTSamples";
}

template<>
struct has_fixed_size<urp_cvt_interfaces::srv::GenerateCVTSamples>
  : std::integral_constant<
    bool,
    has_fixed_size<urp_cvt_interfaces::srv::GenerateCVTSamples_Request>::value &&
    has_fixed_size<urp_cvt_interfaces::srv::GenerateCVTSamples_Response>::value
  >
{
};

template<>
struct has_bounded_size<urp_cvt_interfaces::srv::GenerateCVTSamples>
  : std::integral_constant<
    bool,
    has_bounded_size<urp_cvt_interfaces::srv::GenerateCVTSamples_Request>::value &&
    has_bounded_size<urp_cvt_interfaces::srv::GenerateCVTSamples_Response>::value
  >
{
};

template<>
struct is_service<urp_cvt_interfaces::srv::GenerateCVTSamples>
  : std::true_type
{
};

template<>
struct is_service_request<urp_cvt_interfaces::srv::GenerateCVTSamples_Request>
  : std::true_type
{
};

template<>
struct is_service_response<urp_cvt_interfaces::srv::GenerateCVTSamples_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__TRAITS_HPP_
