// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_interfaces:srv/SetJoystickScalar.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__BUILDER_HPP_
#define SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_interfaces/srv/detail/set_joystick_scalar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJoystickScalar_Request_magnitude
{
public:
  explicit Init_SetJoystickScalar_Request_magnitude(::simple_interfaces::srv::SetJoystickScalar_Request & msg)
  : msg_(msg)
  {}
  ::simple_interfaces::srv::SetJoystickScalar_Request magnitude(::simple_interfaces::srv::SetJoystickScalar_Request::_magnitude_type arg)
  {
    msg_.magnitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::srv::SetJoystickScalar_Request msg_;
};

class Init_SetJoystickScalar_Request_joystick_name
{
public:
  Init_SetJoystickScalar_Request_joystick_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJoystickScalar_Request_magnitude joystick_name(::simple_interfaces::srv::SetJoystickScalar_Request::_joystick_name_type arg)
  {
    msg_.joystick_name = std::move(arg);
    return Init_SetJoystickScalar_Request_magnitude(msg_);
  }

private:
  ::simple_interfaces::srv::SetJoystickScalar_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::srv::SetJoystickScalar_Request>()
{
  return simple_interfaces::srv::builder::Init_SetJoystickScalar_Request_joystick_name();
}

}  // namespace simple_interfaces


namespace simple_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJoystickScalar_Response_success
{
public:
  Init_SetJoystickScalar_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simple_interfaces::srv::SetJoystickScalar_Response success(::simple_interfaces::srv::SetJoystickScalar_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::srv::SetJoystickScalar_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::srv::SetJoystickScalar_Response>()
{
  return simple_interfaces::srv::builder::Init_SetJoystickScalar_Response_success();
}

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__BUILDER_HPP_
