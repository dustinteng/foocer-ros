// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_interfaces:msg/ButtonState.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__BUILDER_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_interfaces/msg/detail/button_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_interfaces
{

namespace msg
{

namespace builder
{

class Init_ButtonState_level
{
public:
  explicit Init_ButtonState_level(::simple_interfaces::msg::ButtonState & msg)
  : msg_(msg)
  {}
  ::simple_interfaces::msg::ButtonState level(::simple_interfaces::msg::ButtonState::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::msg::ButtonState msg_;
};

class Init_ButtonState_name
{
public:
  Init_ButtonState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ButtonState_level name(::simple_interfaces::msg::ButtonState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ButtonState_level(msg_);
  }

private:
  ::simple_interfaces::msg::ButtonState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::msg::ButtonState>()
{
  return simple_interfaces::msg::builder::Init_ButtonState_name();
}

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__BUILDER_HPP_
