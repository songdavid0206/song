// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from urp_cvt_interfaces:srv/GenerateCVTSamples.idl
// generated code does not contain a copyright notice

#ifndef URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__BUILDER_HPP_
#define URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "urp_cvt_interfaces/srv/detail/generate_cvt_samples__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace urp_cvt_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateCVTSamples_Request_grid_step
{
public:
  explicit Init_GenerateCVTSamples_Request_grid_step(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request grid_step(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_grid_step_type arg)
  {
    msg_.grid_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_seed
{
public:
  explicit Init_GenerateCVTSamples_Request_seed(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_grid_step seed(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_seed_type arg)
  {
    msg_.seed = std::move(arg);
    return Init_GenerateCVTSamples_Request_grid_step(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_eps
{
public:
  explicit Init_GenerateCVTSamples_Request_eps(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_seed eps(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_eps_type arg)
  {
    msg_.eps = std::move(arg);
    return Init_GenerateCVTSamples_Request_seed(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_max_iters
{
public:
  explicit Init_GenerateCVTSamples_Request_max_iters(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_eps max_iters(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_max_iters_type arg)
  {
    msg_.max_iters = std::move(arg);
    return Init_GenerateCVTSamples_Request_eps(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_overlap
{
public:
  explicit Init_GenerateCVTSamples_Request_overlap(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_max_iters overlap(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_overlap_type arg)
  {
    msg_.overlap = std::move(arg);
    return Init_GenerateCVTSamples_Request_max_iters(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_tool_width
{
public:
  explicit Init_GenerateCVTSamples_Request_tool_width(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_overlap tool_width(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_tool_width_type arg)
  {
    msg_.tool_width = std::move(arg);
    return Init_GenerateCVTSamples_Request_overlap(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_k
{
public:
  explicit Init_GenerateCVTSamples_Request_k(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_tool_width k(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_GenerateCVTSamples_Request_tool_width(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_y_max
{
public:
  explicit Init_GenerateCVTSamples_Request_y_max(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_k y_max(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_y_max_type arg)
  {
    msg_.y_max = std::move(arg);
    return Init_GenerateCVTSamples_Request_k(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_y_min
{
public:
  explicit Init_GenerateCVTSamples_Request_y_min(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_y_max y_min(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_y_min_type arg)
  {
    msg_.y_min = std::move(arg);
    return Init_GenerateCVTSamples_Request_y_max(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_x_max
{
public:
  explicit Init_GenerateCVTSamples_Request_x_max(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Request_y_min x_max(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_GenerateCVTSamples_Request_y_min(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

class Init_GenerateCVTSamples_Request_x_min
{
public:
  Init_GenerateCVTSamples_Request_x_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateCVTSamples_Request_x_max x_min(::urp_cvt_interfaces::srv::GenerateCVTSamples_Request::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_GenerateCVTSamples_Request_x_max(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::urp_cvt_interfaces::srv::GenerateCVTSamples_Request>()
{
  return urp_cvt_interfaces::srv::builder::Init_GenerateCVTSamples_Request_x_min();
}

}  // namespace urp_cvt_interfaces


namespace urp_cvt_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateCVTSamples_Response_message
{
public:
  explicit Init_GenerateCVTSamples_Response_message(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response & msg)
  : msg_(msg)
  {}
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Response message(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Response msg_;
};

class Init_GenerateCVTSamples_Response_iters
{
public:
  explicit Init_GenerateCVTSamples_Response_iters(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Response_message iters(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response::_iters_type arg)
  {
    msg_.iters = std::move(arg);
    return Init_GenerateCVTSamples_Response_message(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Response msg_;
};

class Init_GenerateCVTSamples_Response_mean_movement
{
public:
  explicit Init_GenerateCVTSamples_Response_mean_movement(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Response_iters mean_movement(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response::_mean_movement_type arg)
  {
    msg_.mean_movement = std::move(arg);
    return Init_GenerateCVTSamples_Response_iters(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Response msg_;
};

class Init_GenerateCVTSamples_Response_success
{
public:
  explicit Init_GenerateCVTSamples_Response_success(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response & msg)
  : msg_(msg)
  {}
  Init_GenerateCVTSamples_Response_mean_movement success(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GenerateCVTSamples_Response_mean_movement(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Response msg_;
};

class Init_GenerateCVTSamples_Response_waypoints
{
public:
  Init_GenerateCVTSamples_Response_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateCVTSamples_Response_success waypoints(::urp_cvt_interfaces::srv::GenerateCVTSamples_Response::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_GenerateCVTSamples_Response_success(msg_);
  }

private:
  ::urp_cvt_interfaces::srv::GenerateCVTSamples_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::urp_cvt_interfaces::srv::GenerateCVTSamples_Response>()
{
  return urp_cvt_interfaces::srv::builder::Init_GenerateCVTSamples_Response_waypoints();
}

}  // namespace urp_cvt_interfaces

#endif  // URP_CVT_INTERFACES__SRV__DETAIL__GENERATE_CVT_SAMPLES__BUILDER_HPP_
