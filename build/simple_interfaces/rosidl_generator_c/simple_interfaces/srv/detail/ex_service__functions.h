// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simple_interfaces:srv/ExService.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__FUNCTIONS_H_
#define SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simple_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "simple_interfaces/srv/detail/ex_service__struct.h"

/// Initialize srv/ExService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_interfaces__srv__ExService_Request
 * )) before or use
 * simple_interfaces__srv__ExService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__srv__ExService_Request__init(simple_interfaces__srv__ExService_Request * msg);

/// Finalize srv/ExService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__srv__ExService_Request__fini(simple_interfaces__srv__ExService_Request * msg);

/// Create srv/ExService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_interfaces__srv__ExService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
simple_interfaces__srv__ExService_Request *
simple_interfaces__srv__ExService_Request__create();

/// Destroy srv/ExService message.
/**
 * It calls
 * simple_interfaces__srv__ExService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__srv__ExService_Request__destroy(simple_interfaces__srv__ExService_Request * msg);

/// Check for srv/ExService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__srv__ExService_Request__are_equal(const simple_interfaces__srv__ExService_Request * lhs, const simple_interfaces__srv__ExService_Request * rhs);

/// Copy a srv/ExService message.
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
simple_interfaces__srv__ExService_Request__copy(
  const simple_interfaces__srv__ExService_Request * input,
  simple_interfaces__srv__ExService_Request * output);

/// Initialize array of srv/ExService messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_interfaces__srv__ExService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__srv__ExService_Request__Sequence__init(simple_interfaces__srv__ExService_Request__Sequence * array, size_t size);

/// Finalize array of srv/ExService messages.
/**
 * It calls
 * simple_interfaces__srv__ExService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__srv__ExService_Request__Sequence__fini(simple_interfaces__srv__ExService_Request__Sequence * array);

/// Create array of srv/ExService messages.
/**
 * It allocates the memory for the array and calls
 * simple_interfaces__srv__ExService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
simple_interfaces__srv__ExService_Request__Sequence *
simple_interfaces__srv__ExService_Request__Sequence__create(size_t size);

/// Destroy array of srv/ExService messages.
/**
 * It calls
 * simple_interfaces__srv__ExService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__srv__ExService_Request__Sequence__destroy(simple_interfaces__srv__ExService_Request__Sequence * array);

/// Check for srv/ExService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__srv__ExService_Request__Sequence__are_equal(const simple_interfaces__srv__ExService_Request__Sequence * lhs, const simple_interfaces__srv__ExService_Request__Sequence * rhs);

/// Copy an array of srv/ExService messages.
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
simple_interfaces__srv__ExService_Request__Sequence__copy(
  const simple_interfaces__srv__ExService_Request__Sequence * input,
  simple_interfaces__srv__ExService_Request__Sequence * output);

/// Initialize srv/ExService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_interfaces__srv__ExService_Response
 * )) before or use
 * simple_interfaces__srv__ExService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__srv__ExService_Response__init(simple_interfaces__srv__ExService_Response * msg);

/// Finalize srv/ExService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__srv__ExService_Response__fini(simple_interfaces__srv__ExService_Response * msg);

/// Create srv/ExService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_interfaces__srv__ExService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
simple_interfaces__srv__ExService_Response *
simple_interfaces__srv__ExService_Response__create();

/// Destroy srv/ExService message.
/**
 * It calls
 * simple_interfaces__srv__ExService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__srv__ExService_Response__destroy(simple_interfaces__srv__ExService_Response * msg);

/// Check for srv/ExService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__srv__ExService_Response__are_equal(const simple_interfaces__srv__ExService_Response * lhs, const simple_interfaces__srv__ExService_Response * rhs);

/// Copy a srv/ExService message.
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
simple_interfaces__srv__ExService_Response__copy(
  const simple_interfaces__srv__ExService_Response * input,
  simple_interfaces__srv__ExService_Response * output);

/// Initialize array of srv/ExService messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_interfaces__srv__ExService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__srv__ExService_Response__Sequence__init(simple_interfaces__srv__ExService_Response__Sequence * array, size_t size);

/// Finalize array of srv/ExService messages.
/**
 * It calls
 * simple_interfaces__srv__ExService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__srv__ExService_Response__Sequence__fini(simple_interfaces__srv__ExService_Response__Sequence * array);

/// Create array of srv/ExService messages.
/**
 * It allocates the memory for the array and calls
 * simple_interfaces__srv__ExService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
simple_interfaces__srv__ExService_Response__Sequence *
simple_interfaces__srv__ExService_Response__Sequence__create(size_t size);

/// Destroy array of srv/ExService messages.
/**
 * It calls
 * simple_interfaces__srv__ExService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__srv__ExService_Response__Sequence__destroy(simple_interfaces__srv__ExService_Response__Sequence * array);

/// Check for srv/ExService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__srv__ExService_Response__Sequence__are_equal(const simple_interfaces__srv__ExService_Response__Sequence * lhs, const simple_interfaces__srv__ExService_Response__Sequence * rhs);

/// Copy an array of srv/ExService messages.
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
simple_interfaces__srv__ExService_Response__Sequence__copy(
  const simple_interfaces__srv__ExService_Response__Sequence * input,
  simple_interfaces__srv__ExService_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__SRV__DETAIL__EX_SERVICE__FUNCTIONS_H_
