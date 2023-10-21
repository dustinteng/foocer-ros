// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_interfaces:msg/ButtonState.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__TRAITS_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_interfaces/msg/detail/button_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ButtonState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ButtonState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ButtonState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace simple_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simple_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_interfaces::msg::ButtonState & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces::msg::ButtonState & msg)
{
  return simple_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces::msg::ButtonState>()
{
  return "simple_interfaces::msg::ButtonState";
}

template<>
inline const char * name<simple_interfaces::msg::ButtonState>()
{
  return "simple_interfaces/msg/ButtonState";
}

template<>
struct has_fixed_size<simple_interfaces::msg::ButtonState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_interfaces::msg::ButtonState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_interfaces::msg::ButtonState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__TRAITS_HPP_
