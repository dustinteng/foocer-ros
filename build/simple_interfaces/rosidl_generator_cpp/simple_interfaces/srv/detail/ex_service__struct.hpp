// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_interfaces:srv/ExService.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__STRUCT_HPP_
#define SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_interfaces__srv__ExService_Request __attribute__((deprecated))
#else
# define DEPRECATED__simple_interfaces__srv__ExService_Request __declspec(deprecated)
#endif

namespace simple_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExService_Request_
{
  using Type = ExService_Request_<ContainerAllocator>;

  explicit ExService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->width = 0.0;
    }
  }

  explicit ExService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->width = 0.0;
    }
  }

  // field types and members
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;

  // setters for named parameter idiom
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_interfaces::srv::ExService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interfaces::srv::ExService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interfaces::srv::ExService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interfaces::srv::ExService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::srv::ExService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::srv::ExService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::srv::ExService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::srv::ExService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interfaces::srv::ExService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interfaces::srv::ExService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interfaces__srv__ExService_Request
    std::shared_ptr<simple_interfaces::srv::ExService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interfaces__srv__ExService_Request
    std::shared_ptr<simple_interfaces::srv::ExService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExService_Request_ & other) const
  {
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExService_Request_

// alias to use template instance with default allocator
using ExService_Request =
  simple_interfaces::srv::ExService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_interfaces


#ifndef _WIN32
# define DEPRECATED__simple_interfaces__srv__ExService_Response __attribute__((deprecated))
#else
# define DEPRECATED__simple_interfaces__srv__ExService_Response __declspec(deprecated)
#endif

namespace simple_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExService_Response_
{
  using Type = ExService_Response_<ContainerAllocator>;

  explicit ExService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->are_motors_ready = 0.0;
    }
  }

  explicit ExService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->are_motors_ready = 0.0;
    }
  }

  // field types and members
  using _are_motors_ready_type =
    double;
  _are_motors_ready_type are_motors_ready;

  // setters for named parameter idiom
  Type & set__are_motors_ready(
    const double & _arg)
  {
    this->are_motors_ready = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_interfaces::srv::ExService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interfaces::srv::ExService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interfaces::srv::ExService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interfaces::srv::ExService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::srv::ExService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::srv::ExService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::srv::ExService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::srv::ExService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interfaces::srv::ExService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interfaces::srv::ExService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interfaces__srv__ExService_Response
    std::shared_ptr<simple_interfaces::srv::ExService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interfaces__srv__ExService_Response
    std::shared_ptr<simple_interfaces::srv::ExService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExService_Response_ & other) const
  {
    if (this->are_motors_ready != other.are_motors_ready) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExService_Response_

// alias to use template instance with default allocator
using ExService_Response =
  simple_interfaces::srv::ExService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_interfaces

namespace simple_interfaces
{

namespace srv
{

struct ExService
{
  using Request = simple_interfaces::srv::ExService_Request;
  using Response = simple_interfaces::srv::ExService_Response;
};

}  // namespace srv

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__STRUCT_HPP_
