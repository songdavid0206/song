// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from urp_cvt_interfaces:srv/GenerateCVTSamples.idl
// generated code does not contain a copyright notice

#ifndef URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__STRUCT_HPP_
#define URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__urp_cvt_interfaces__srv__GenerateCVTSamples_Request __attribute__((deprecated))
#else
# define DEPRECATED__urp_cvt_interfaces__srv__GenerateCVTSamples_Request __declspec(deprecated)
#endif

namespace urp_cvt_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateCVTSamples_Request_
{
  using Type = GenerateCVTSamples_Request_<ContainerAllocator>;

  explicit GenerateCVTSamples_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_min = 0.0;
      this->x_max = 0.0;
      this->y_min = 0.0;
      this->y_max = 0.0;
      this->k = 0l;
      this->tool_width = 0.0;
      this->overlap = 0.0;
      this->max_iters = 0l;
      this->eps = 0.0;
      this->seed = 0l;
      this->grid_step = 0.0;
    }
  }

  explicit GenerateCVTSamples_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_min = 0.0;
      this->x_max = 0.0;
      this->y_min = 0.0;
      this->y_max = 0.0;
      this->k = 0l;
      this->tool_width = 0.0;
      this->overlap = 0.0;
      this->max_iters = 0l;
      this->eps = 0.0;
      this->seed = 0l;
      this->grid_step = 0.0;
    }
  }

  // field types and members
  using _x_min_type =
    double;
  _x_min_type x_min;
  using _x_max_type =
    double;
  _x_max_type x_max;
  using _y_min_type =
    double;
  _y_min_type y_min;
  using _y_max_type =
    double;
  _y_max_type y_max;
  using _k_type =
    int32_t;
  _k_type k;
  using _tool_width_type =
    double;
  _tool_width_type tool_width;
  using _overlap_type =
    double;
  _overlap_type overlap;
  using _max_iters_type =
    int32_t;
  _max_iters_type max_iters;
  using _eps_type =
    double;
  _eps_type eps;
  using _seed_type =
    int32_t;
  _seed_type seed;
  using _grid_step_type =
    double;
  _grid_step_type grid_step;

  // setters for named parameter idiom
  Type & set__x_min(
    const double & _arg)
  {
    this->x_min = _arg;
    return *this;
  }
  Type & set__x_max(
    const double & _arg)
  {
    this->x_max = _arg;
    return *this;
  }
  Type & set__y_min(
    const double & _arg)
  {
    this->y_min = _arg;
    return *this;
  }
  Type & set__y_max(
    const double & _arg)
  {
    this->y_max = _arg;
    return *this;
  }
  Type & set__k(
    const int32_t & _arg)
  {
    this->k = _arg;
    return *this;
  }
  Type & set__tool_width(
    const double & _arg)
  {
    this->tool_width = _arg;
    return *this;
  }
  Type & set__overlap(
    const double & _arg)
  {
    this->overlap = _arg;
    return *this;
  }
  Type & set__max_iters(
    const int32_t & _arg)
  {
    this->max_iters = _arg;
    return *this;
  }
  Type & set__eps(
    const double & _arg)
  {
    this->eps = _arg;
    return *this;
  }
  Type & set__seed(
    const int32_t & _arg)
  {
    this->seed = _arg;
    return *this;
  }
  Type & set__grid_step(
    const double & _arg)
  {
    this->grid_step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__urp_cvt_interfaces__srv__GenerateCVTSamples_Request
    std::shared_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__urp_cvt_interfaces__srv__GenerateCVTSamples_Request
    std::shared_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateCVTSamples_Request_ & other) const
  {
    if (this->x_min != other.x_min) {
      return false;
    }
    if (this->x_max != other.x_max) {
      return false;
    }
    if (this->y_min != other.y_min) {
      return false;
    }
    if (this->y_max != other.y_max) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->tool_width != other.tool_width) {
      return false;
    }
    if (this->overlap != other.overlap) {
      return false;
    }
    if (this->max_iters != other.max_iters) {
      return false;
    }
    if (this->eps != other.eps) {
      return false;
    }
    if (this->seed != other.seed) {
      return false;
    }
    if (this->grid_step != other.grid_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateCVTSamples_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateCVTSamples_Request_

// alias to use template instance with default allocator
using GenerateCVTSamples_Request =
  urp_cvt_interfaces::srv::GenerateCVTSamples_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace urp_cvt_interfaces


// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__urp_cvt_interfaces__srv__GenerateCVTSamples_Response __attribute__((deprecated))
#else
# define DEPRECATED__urp_cvt_interfaces__srv__GenerateCVTSamples_Response __declspec(deprecated)
#endif

namespace urp_cvt_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateCVTSamples_Response_
{
  using Type = GenerateCVTSamples_Response_<ContainerAllocator>;

  explicit GenerateCVTSamples_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->mean_movement = 0.0;
      this->iters = 0l;
      this->message = "";
    }
  }

  explicit GenerateCVTSamples_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->mean_movement = 0.0;
      this->iters = 0l;
      this->message = "";
    }
  }

  // field types and members
  using _waypoints_type =
    geometry_msgs::msg::PoseArray_<ContainerAllocator>;
  _waypoints_type waypoints;
  using _success_type =
    bool;
  _success_type success;
  using _mean_movement_type =
    double;
  _mean_movement_type mean_movement;
  using _iters_type =
    int32_t;
  _iters_type iters;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__waypoints(
    const geometry_msgs::msg::PoseArray_<ContainerAllocator> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__mean_movement(
    const double & _arg)
  {
    this->mean_movement = _arg;
    return *this;
  }
  Type & set__iters(
    const int32_t & _arg)
  {
    this->iters = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__urp_cvt_interfaces__srv__GenerateCVTSamples_Response
    std::shared_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__urp_cvt_interfaces__srv__GenerateCVTSamples_Response
    std::shared_ptr<urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateCVTSamples_Response_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->mean_movement != other.mean_movement) {
      return false;
    }
    if (this->iters != other.iters) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateCVTSamples_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateCVTSamples_Response_

// alias to use template instance with default allocator
using GenerateCVTSamples_Response =
  urp_cvt_interfaces::srv::GenerateCVTSamples_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace urp_cvt_interfaces

namespace urp_cvt_interfaces
{

namespace srv
{

struct GenerateCVTSamples
{
  using Request = urp_cvt_interfaces::srv::GenerateCVTSamples_Request;
  using Response = urp_cvt_interfaces::srv::GenerateCVTSamples_Response;
};

}  // namespace srv

}  // namespace urp_cvt_interfaces

#endif  // URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__STRUCT_HPP_
