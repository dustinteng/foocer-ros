// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_interfaces:srv/ExService.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__STRUCT_H_
#define SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ExService in the package simple_interfaces.
typedef struct simple_interfaces__srv__ExService_Request
{
  double length;
  double width;
} simple_interfaces__srv__ExService_Request;

// Struct for a sequence of simple_interfaces__srv__ExService_Request.
typedef struct simple_interfaces__srv__ExService_Request__Sequence
{
  simple_interfaces__srv__ExService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces__srv__ExService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ExService in the package simple_interfaces.
typedef struct simple_interfaces__srv__ExService_Response
{
  double are_motors_ready;
} simple_interfaces__srv__ExService_Response;

// Struct for a sequence of simple_interfaces__srv__ExService_Response.
typedef struct simple_interfaces__srv__ExService_Response__Sequence
{
  simple_interfaces__srv__ExService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces__srv__ExService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__STRUCT_H_
