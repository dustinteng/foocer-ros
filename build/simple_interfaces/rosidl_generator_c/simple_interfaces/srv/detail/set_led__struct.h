// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
#define SIMPLE_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLed in the package simple_interfaces.
typedef struct simple_interfaces__srv__SetLed_Request
{
  int64_t led_number;
  int64_t state;
} simple_interfaces__srv__SetLed_Request;

// Struct for a sequence of simple_interfaces__srv__SetLed_Request.
typedef struct simple_interfaces__srv__SetLed_Request__Sequence
{
  simple_interfaces__srv__SetLed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces__srv__SetLed_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetLed in the package simple_interfaces.
typedef struct simple_interfaces__srv__SetLed_Response
{
  bool success;
} simple_interfaces__srv__SetLed_Response;

// Struct for a sequence of simple_interfaces__srv__SetLed_Response.
typedef struct simple_interfaces__srv__SetLed_Response__Sequence
{
  simple_interfaces__srv__SetLed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces__srv__SetLed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
