// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simple_interfaces:msg/JoystickScalarValue.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__FUNCTIONS_H_
#define SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simple_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "simple_interfaces/msg/detail/joystick_scalar_value__struct.h"

/// Initialize msg/JoystickScalarValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_interfaces__msg__JoystickScalarValue
 * )) before or use
 * simple_interfaces__msg__JoystickScalarValue__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__JoystickScalarValue__init(simple_interfaces__msg__JoystickScalarValue * msg);

/// Finalize msg/JoystickScalarValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__msg__JoystickScalarValue__fini(simple_interfaces__msg__JoystickScalarValue * msg);

/// Create msg/JoystickScalarValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_interfaces__msg__JoystickScalarValue__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
simple_interfaces__msg__JoystickScalarValue *
simple_interfaces__msg__JoystickScalarValue__create();

/// Destroy msg/JoystickScalarValue message.
/**
 * It calls
 * simple_interfaces__msg__JoystickScalarValue__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__msg__JoystickScalarValue__destroy(simple_interfaces__msg__JoystickScalarValue * msg);

/// Check for msg/JoystickScalarValue message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__JoystickScalarValue__are_equal(const simple_interfaces__msg__JoystickScalarValue * lhs, const simple_interfaces__msg__JoystickScalarValue * rhs);

/// Copy a msg/JoystickScalarValue message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__JoystickScalarValue__copy(
  const simple_interfaces__msg__JoystickScalarValue * input,
  simple_interfaces__msg__JoystickScalarValue * output);

/// Initialize array of msg/JoystickScalarValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_interfaces__msg__JoystickScalarValue__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__JoystickScalarValue__Sequence__init(simple_interfaces__msg__JoystickScalarValue__Sequence * array, size_t size);

/// Finalize array of msg/JoystickScalarValue messages.
/**
 * It calls
 * simple_interfaces__msg__JoystickScalarValue__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__msg__JoystickScalarValue__Sequence__fini(simple_interfaces__msg__JoystickScalarValue__Sequence * array);

/// Create array of msg/JoystickScalarValue messages.
/**
 * It allocates the memory for the array and calls
 * simple_interfaces__msg__JoystickScalarValue__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
simple_interfaces__msg__JoystickScalarValue__Sequence *
simple_interfaces__msg__JoystickScalarValue__Sequence__create(size_t size);

/// Destroy array of msg/JoystickScalarValue messages.
/**
 * It calls
 * simple_interfaces__msg__JoystickScalarValue__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__msg__JoystickScalarValue__Sequence__destroy(simple_interfaces__msg__JoystickScalarValue__Sequence * array);

/// Check for msg/JoystickScalarValue message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__JoystickScalarValue__Sequence__are_equal(const simple_interfaces__msg__JoystickScalarValue__Sequence * lhs, const simple_interfaces__msg__JoystickScalarValue__Sequence * rhs);

/// Copy an array of msg/JoystickScalarValue messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__JoystickScalarValue__Sequence__copy(
  const simple_interfaces__msg__JoystickScalarValue__Sequence * input,
  simple_interfaces__msg__JoystickScalarValue__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__JOYSTICK_SCALAR_VALUE__FUNCTIONS_H_
