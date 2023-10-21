// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_interfaces:msg/JoystickScalarValue.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__BUILDER_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_interfaces/msg/detail/joystick_scalar_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_interfaces
{

namespace msg
{

namespace builder
{

class Init_JoystickScalarValue_magnitude
{
public:
  explicit Init_JoystickScalarValue_magnitude(::simple_interfaces::msg::JoystickScalarValue & msg)
  : msg_(msg)
  {}
  ::simple_interfaces::msg::JoystickScalarValue magnitude(::simple_interfaces::msg::JoystickScalarValue::_magnitude_type arg)
  {
    msg_.magnitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::msg::JoystickScalarValue msg_;
};

class Init_JoystickScalarValue_joystick_name
{
public:
  Init_JoystickScalarValue_joystick_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoystickScalarValue_magnitude joystick_name(::simple_interfaces::msg::JoystickScalarValue::_joystick_name_type arg)
  {
    msg_.joystick_name = std::move(arg);
    return Init_JoystickScalarValue_magnitude(msg_);
  }

private:
  ::simple_interfaces::msg::JoystickScalarValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::msg::JoystickScalarValue>()
{
  return simple_interfaces::msg::builder::Init_JoystickScalarValue_joystick_name();
}

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__BUILDER_HPP_
