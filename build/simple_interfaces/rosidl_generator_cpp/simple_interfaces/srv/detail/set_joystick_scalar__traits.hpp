// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_interfaces:srv/SetJoystickScalar.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__TRAITS_HPP_
#define SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_interfaces/srv/detail/set_joystick_scalar__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJoystickScalar_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joystick_name
  {
    out << "joystick_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_name, out);
    out << ", ";
  }

  // member: magnitude
  {
    out << "magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.magnitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJoystickScalar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joystick_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joystick_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_name, out);
    out << "\n";
  }

  // member: magnitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.magnitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJoystickScalar_Request & msg, bool use_flow_style = false)
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

}  // namespace simple_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simple_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_interfaces::srv::SetJoystickScalar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces::srv::SetJoystickScalar_Request & msg)
{
  return simple_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces::srv::SetJoystickScalar_Request>()
{
  return "simple_interfaces::srv::SetJoystickScalar_Request";
}

template<>
inline const char * name<simple_interfaces::srv::SetJoystickScalar_Request>()
{
  return "simple_interfaces/srv/SetJoystickScalar_Request";
}

template<>
struct has_fixed_size<simple_interfaces::srv::SetJoystickScalar_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_interfaces::srv::SetJoystickScalar_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_interfaces::srv::SetJoystickScalar_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace simple_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJoystickScalar_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJoystickScalar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJoystickScalar_Response & msg, bool use_flow_style = false)
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

}  // namespace simple_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simple_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_interfaces::srv::SetJoystickScalar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces::srv::SetJoystickScalar_Response & msg)
{
  return simple_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces::srv::SetJoystickScalar_Response>()
{
  return "simple_interfaces::srv::SetJoystickScalar_Response";
}

template<>
inline const char * name<simple_interfaces::srv::SetJoystickScalar_Response>()
{
  return "simple_interfaces/srv/SetJoystickScalar_Response";
}

template<>
struct has_fixed_size<simple_interfaces::srv::SetJoystickScalar_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_interfaces::srv::SetJoystickScalar_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_interfaces::srv::SetJoystickScalar_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simple_interfaces::srv::SetJoystickScalar>()
{
  return "simple_interfaces::srv::SetJoystickScalar";
}

template<>
inline const char * name<simple_interfaces::srv::SetJoystickScalar>()
{
  return "simple_interfaces/srv/SetJoystickScalar";
}

template<>
struct has_fixed_size<simple_interfaces::srv::SetJoystickScalar>
  : std::integral_constant<
    bool,
    has_fixed_size<simple_interfaces::srv::SetJoystickScalar_Request>::value &&
    has_fixed_size<simple_interfaces::srv::SetJoystickScalar_Response>::value
  >
{
};

template<>
struct has_bounded_size<simple_interfaces::srv::SetJoystickScalar>
  : std::integral_constant<
    bool,
    has_bounded_size<simple_interfaces::srv::SetJoystickScalar_Request>::value &&
    has_bounded_size<simple_interfaces::srv::SetJoystickScalar_Response>::value
  >
{
};

template<>
struct is_service<simple_interfaces::srv::SetJoystickScalar>
  : std::true_type
{
};

template<>
struct is_service_request<simple_interfaces::srv::SetJoystickScalar_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simple_interfaces::srv::SetJoystickScalar_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__TRAITS_HPP_
