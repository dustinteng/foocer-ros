// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_interfaces:srv/ExService.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__BUILDER_HPP_
#define SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_interfaces/srv/detail/ex_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExService_Request_width
{
public:
  explicit Init_ExService_Request_width(::simple_interfaces::srv::ExService_Request & msg)
  : msg_(msg)
  {}
  ::simple_interfaces::srv::ExService_Request width(::simple_interfaces::srv::ExService_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::srv::ExService_Request msg_;
};

class Init_ExService_Request_length
{
public:
  Init_ExService_Request_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExService_Request_width length(::simple_interfaces::srv::ExService_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_ExService_Request_width(msg_);
  }

private:
  ::simple_interfaces::srv::ExService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::srv::ExService_Request>()
{
  return simple_interfaces::srv::builder::Init_ExService_Request_length();
}

}  // namespace simple_interfaces


namespace simple_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExService_Response_are_motors_ready
{
public:
  Init_ExService_Response_are_motors_ready()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simple_interfaces::srv::ExService_Response are_motors_ready(::simple_interfaces::srv::ExService_Response::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::srv::ExService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::srv::ExService_Response>()
{
  return simple_interfaces::srv::builder::Init_ExService_Response_are_motors_ready();
}

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__BUILDER_HPP_
