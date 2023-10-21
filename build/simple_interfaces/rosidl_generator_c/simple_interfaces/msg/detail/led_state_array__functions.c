// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice
#include "simple_interfaces/msg/detail/led_state_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `led_states`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
simple_interfaces__msg__LedStateArray__init(simple_interfaces__msg__LedStateArray * msg)
{
  if (!msg) {
    return false;
  }
  // led_states
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->led_states, 0)) {
    simple_interfaces__msg__LedStateArray__fini(msg);
    return false;
  }
  return true;
}

void
simple_interfaces__msg__LedStateArray__fini(simple_interfaces__msg__LedStateArray * msg)
{
  if (!msg) {
    return;
  }
  // led_states
  rosidl_runtime_c__int64__Sequence__fini(&msg->led_states);
}

bool
simple_interfaces__msg__LedStateArray__are_equal(const simple_interfaces__msg__LedStateArray * lhs, const simple_interfaces__msg__LedStateArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_states
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->led_states), &(rhs->led_states)))
  {
    return false;
  }
  return true;
}

bool
simple_interfaces__msg__LedStateArray__copy(
  const simple_interfaces__msg__LedStateArray * input,
  simple_interfaces__msg__LedStateArray * output)
{
  if (!input || !output) {
    return false;
  }
  // led_states
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->led_states), &(output->led_states)))
  {
    return false;
  }
  return true;
}

simple_interfaces__msg__LedStateArray *
simple_interfaces__msg__LedStateArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__LedStateArray * msg = (simple_interfaces__msg__LedStateArray *)allocator.allocate(sizeof(simple_interfaces__msg__LedStateArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_interfaces__msg__LedStateArray));
  bool success = simple_interfaces__msg__LedStateArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simple_interfaces__msg__LedStateArray__destroy(simple_interfaces__msg__LedStateArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simple_interfaces__msg__LedStateArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simple_interfaces__msg__LedStateArray__Sequence__init(simple_interfaces__msg__LedStateArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__LedStateArray * data = NULL;

  if (size) {
    data = (simple_interfaces__msg__LedStateArray *)allocator.zero_allocate(size, sizeof(simple_interfaces__msg__LedStateArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_interfaces__msg__LedStateArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_interfaces__msg__LedStateArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
simple_interfaces__msg__LedStateArray__Sequence__fini(simple_interfaces__msg__LedStateArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      simple_interfaces__msg__LedStateArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

simple_interfaces__msg__LedStateArray__Sequence *
simple_interfaces__msg__LedStateArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__LedStateArray__Sequence * array = (simple_interfaces__msg__LedStateArray__Sequence *)allocator.allocate(sizeof(simple_interfaces__msg__LedStateArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simple_interfaces__msg__LedStateArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simple_interfaces__msg__LedStateArray__Sequence__destroy(simple_interfaces__msg__LedStateArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simple_interfaces__msg__LedStateArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simple_interfaces__msg__LedStateArray__Sequence__are_equal(const simple_interfaces__msg__LedStateArray__Sequence * lhs, const simple_interfaces__msg__LedStateArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simple_interfaces__msg__LedStateArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simple_interfaces__msg__LedStateArray__Sequence__copy(
  const simple_interfaces__msg__LedStateArray__Sequence * input,
  simple_interfaces__msg__LedStateArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simple_interfaces__msg__LedStateArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simple_interfaces__msg__LedStateArray * data =
      (simple_interfaces__msg__LedStateArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simple_interfaces__msg__LedStateArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simple_interfaces__msg__LedStateArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simple_interfaces__msg__LedStateArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
