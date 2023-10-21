// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_interfaces:msg/JoystickScalarValue.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__STRUCT_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_interfaces__msg__JoystickScalarValue __attribute__((deprecated))
#else
# define DEPRECATED__simple_interfaces__msg__JoystickScalarValue __declspec(deprecated)
#endif

namespace simple_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoystickScalarValue_
{
  using Type = JoystickScalarValue_<ContainerAllocator>;

  explicit JoystickScalarValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joystick_name = "";
      this->magnitude = 0.0;
    }
  }

  explicit JoystickScalarValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joystick_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joystick_name = "";
      this->magnitude = 0.0;
    }
  }

  // field types and members
  using _joystick_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joystick_name_type joystick_name;
  using _magnitude_type =
    double;
  _magnitude_type magnitude;

  // setters for named parameter idiom
  Type & set__joystick_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joystick_name = _arg;
    return *this;
  }
  Type & set__magnitude(
    const double & _arg)
  {
    this->magnitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interfaces__msg__JoystickScalarValue
    std::shared_ptr<simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interfaces__msg__JoystickScalarValue
    std::shared_ptr<simple_interfaces::msg::JoystickScalarValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoystickScalarValue_ & other) const
  {
    if (this->joystick_name != other.joystick_name) {
      return false;
    }
    if (this->magnitude != other.magnitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoystickScalarValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoystickScalarValue_

// alias to use template instance with default allocator
using JoystickScalarValue =
  simple_interfaces::msg::JoystickScalarValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__STRUCT_HPP_
