// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define SIMPLE_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_interfaces/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Request_state
{
public:
  explicit Init_SetLed_Request_state(::simple_interfaces::srv::SetLed_Request & msg)
  : msg_(msg)
  {}
  ::simple_interfaces::srv::SetLed_Request state(::simple_interfaces::srv::SetLed_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::srv::SetLed_Request msg_;
};

class Init_SetLed_Request_led_number
{
public:
  Init_SetLed_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Request_state led_number(::simple_interfaces::srv::SetLed_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLed_Request_state(msg_);
  }

private:
  ::simple_interfaces::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::srv::SetLed_Request>()
{
  return simple_interfaces::srv::builder::Init_SetLed_Request_led_number();
}

}  // namespace simple_interfaces


namespace simple_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_success
{
public:
  Init_SetLed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simple_interfaces::srv::SetLed_Response success(::simple_interfaces::srv::SetLed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::srv::SetLed_Response>()
{
  return simple_interfaces::srv::builder::Init_SetLed_Response_success();
}

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
