// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
#define SIMPLE_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debug_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HardwareStatus in the package simple_interfaces.
typedef struct simple_interfaces__msg__HardwareStatus
{
  int64_t temperature;
  bool are_motors_ready;
  rosidl_runtime_c__String debug_message;
} simple_interfaces__msg__HardwareStatus;

// Struct for a sequence of simple_interfaces__msg__HardwareStatus.
typedef struct simple_interfaces__msg__HardwareStatus__Sequence
{
  simple_interfaces__msg__HardwareStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces__msg__HardwareStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
