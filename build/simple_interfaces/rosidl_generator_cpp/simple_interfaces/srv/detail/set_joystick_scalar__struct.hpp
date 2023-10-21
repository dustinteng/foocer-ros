// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_interfaces:srv/SetJoystickScalar.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__STRUCT_HPP_
#define SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_interfaces__srv__SetJoystickScalar_Request __attribute__((deprecated))
#else
# define DEPRECATED__simple_interfaces__srv__SetJoystickScalar_Request __declspec(deprecated)
#endif

namespace simple_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJoystickScalar_Request_
{
  using Type = SetJoystickScalar_Request_<ContainerAllocator>;

  explicit SetJoystickScalar_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joystick_name = "";
      this->magnitude = 0.0;
    }
  }

  explicit SetJoystickScalar_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interfaces__srv__SetJoystickScalar_Request
    std::shared_ptr<simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interfaces__srv__SetJoystickScalar_Request
    std::shared_ptr<simple_interfaces::srv::SetJoystickScalar_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJoystickScalar_Request_ & other) const
  {
    if (this->joystick_name != other.joystick_name) {
      return false;
    }
    if (this->magnitude != other.magnitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJoystickScalar_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJoystickScalar_Request_

// alias to use template instance with default allocator
using SetJoystickScalar_Request =
  simple_interfaces::srv::SetJoystickScalar_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_interfaces


#ifndef _WIN32
# define DEPRECATED__simple_interfaces__srv__SetJoystickScalar_Response __attribute__((deprecated))
#else
# define DEPRECATED__simple_interfaces__srv__SetJoystickScalar_Response __declspec(deprecated)
#endif

namespace simple_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJoystickScalar_Response_
{
  using Type = SetJoystickScalar_Response_<ContainerAllocator>;

  explicit SetJoystickScalar_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetJoystickScalar_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interfaces__srv__SetJoystickScalar_Response
    std::shared_ptr<simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interfaces__srv__SetJoystickScalar_Response
    std::shared_ptr<simple_interfaces::srv::SetJoystickScalar_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJoystickScalar_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJoystickScalar_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJoystickScalar_Response_

// alias to use template instance with default allocator
using SetJoystickScalar_Response =
  simple_interfaces::srv::SetJoystickScalar_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_interfaces

namespace simple_interfaces
{

namespace srv
{

struct SetJoystickScalar
{
  using Request = simple_interfaces::srv::SetJoystickScalar_Request;
  using Response = simple_interfaces::srv::SetJoystickScalar_Response;
};

}  // namespace srv

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__SET_JOYSTICK_SCALAR__STRUCT_HPP_
