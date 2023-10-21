// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_interfaces:srv/ExService.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__TRAITS_HPP_
#define SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_interfaces/srv/detail/ex_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExService_Request & msg, bool use_flow_style = false)
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
  const simple_interfaces::srv::ExService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces::srv::ExService_Request & msg)
{
  return simple_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces::srv::ExService_Request>()
{
  return "simple_interfaces::srv::ExService_Request";
}

template<>
inline const char * name<simple_interfaces::srv::ExService_Request>()
{
  return "simple_interfaces/srv/ExService_Request";
}

template<>
struct has_fixed_size<simple_interfaces::srv::ExService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_interfaces::srv::ExService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_interfaces::srv::ExService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace simple_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: are_motors_ready
  {
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: are_motors_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExService_Response & msg, bool use_flow_style = false)
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
  const simple_interfaces::srv::ExService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces::srv::ExService_Response & msg)
{
  return simple_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces::srv::ExService_Response>()
{
  return "simple_interfaces::srv::ExService_Response";
}

template<>
inline const char * name<simple_interfaces::srv::ExService_Response>()
{
  return "simple_interfaces/srv/ExService_Response";
}

template<>
struct has_fixed_size<simple_interfaces::srv::ExService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_interfaces::srv::ExService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_interfaces::srv::ExService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simple_interfaces::srv::ExService>()
{
  return "simple_interfaces::srv::ExService";
}

template<>
inline const char * name<simple_interfaces::srv::ExService>()
{
  return "simple_interfaces/srv/ExService";
}

template<>
struct has_fixed_size<simple_interfaces::srv::ExService>
  : std::integral_constant<
    bool,
    has_fixed_size<simple_interfaces::srv::ExService_Request>::value &&
    has_fixed_size<simple_interfaces::srv::ExService_Response>::value
  >
{
};

template<>
struct has_bounded_size<simple_interfaces::srv::ExService>
  : std::integral_constant<
    bool,
    has_bounded_size<simple_interfaces::srv::ExService_Request>::value &&
    has_bounded_size<simple_interfaces::srv::ExService_Response>::value
  >
{
};

template<>
struct is_service<simple_interfaces::srv::ExService>
  : std::true_type
{
};

template<>
struct is_service_request<simple_interfaces::srv::ExService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simple_interfaces::srv::ExService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__TRAITS_HPP_
