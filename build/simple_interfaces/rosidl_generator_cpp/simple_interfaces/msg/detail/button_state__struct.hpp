// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_interfaces:msg/ButtonState.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__STRUCT_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_interfaces__msg__ButtonState __attribute__((deprecated))
#else
# define DEPRECATED__simple_interfaces__msg__ButtonState __declspec(deprecated)
#endif

namespace simple_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ButtonState_
{
  using Type = ButtonState_<ContainerAllocator>;

  explicit ButtonState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->level = 0ll;
    }
  }

  explicit ButtonState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->level = 0ll;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _level_type =
    int64_t;
  _level_type level;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__level(
    const int64_t & _arg)
  {
    this->level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_interfaces::msg::ButtonState_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interfaces::msg::ButtonState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interfaces::msg::ButtonState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interfaces::msg::ButtonState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::msg::ButtonState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::msg::ButtonState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::msg::ButtonState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::msg::ButtonState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interfaces::msg::ButtonState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interfaces::msg::ButtonState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interfaces__msg__ButtonState
    std::shared_ptr<simple_interfaces::msg::ButtonState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interfaces__msg__ButtonState
    std::shared_ptr<simple_interfaces::msg::ButtonState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ButtonState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const ButtonState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ButtonState_

// alias to use template instance with default allocator
using ButtonState =
  simple_interfaces::msg::ButtonState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__STRUCT_HPP_
