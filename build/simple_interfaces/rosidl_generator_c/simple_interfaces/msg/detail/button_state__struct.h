// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_interfaces:msg/ButtonState.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__STRUCT_H_
#define SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ButtonState in the package simple_interfaces.
typedef struct simple_interfaces__msg__ButtonState
{
  rosidl_runtime_c__String name;
  int64_t level;
} simple_interfaces__msg__ButtonState;

// Struct for a sequence of simple_interfaces__msg__ButtonState.
typedef struct simple_interfaces__msg__ButtonState__Sequence
{
  simple_interfaces__msg__ButtonState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces__msg__ButtonState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__BUTTON_STATE__STRUCT_H_
