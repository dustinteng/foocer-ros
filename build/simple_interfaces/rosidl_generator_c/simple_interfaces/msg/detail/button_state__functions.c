// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_interfaces:msg/ButtonState.idl
// generated code does not contain a copyright notice
#include "simple_interfaces/msg/detail/button_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
simple_interfaces__msg__ButtonState__init(simple_interfaces__msg__ButtonState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    simple_interfaces__msg__ButtonState__fini(msg);
    return false;
  }
  // level
  return true;
}

void
simple_interfaces__msg__ButtonState__fini(simple_interfaces__msg__ButtonState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // level
}

bool
simple_interfaces__msg__ButtonState__are_equal(const simple_interfaces__msg__ButtonState * lhs, const simple_interfaces__msg__ButtonState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  return true;
}

bool
simple_interfaces__msg__ButtonState__copy(
  const simple_interfaces__msg__ButtonState * input,
  simple_interfaces__msg__ButtonState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // level
  output->level = input->level;
  return true;
}

simple_interfaces__msg__ButtonState *
simple_interfaces__msg__ButtonState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__ButtonState * msg = (simple_interfaces__msg__ButtonState *)allocator.allocate(sizeof(simple_interfaces__msg__ButtonState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_interfaces__msg__ButtonState));
  bool success = simple_interfaces__msg__ButtonState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simple_interfaces__msg__ButtonState__destroy(simple_interfaces__msg__ButtonState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simple_interfaces__msg__ButtonState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simple_interfaces__msg__ButtonState__Sequence__init(simple_interfaces__msg__ButtonState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__ButtonState * data = NULL;

  if (size) {
    data = (simple_interfaces__msg__ButtonState *)allocator.zero_allocate(size, sizeof(simple_interfaces__msg__ButtonState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_interfaces__msg__ButtonState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_interfaces__msg__ButtonState__fini(&data[i - 1]);
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
simple_interfaces__msg__ButtonState__Sequence__fini(simple_interfaces__msg__ButtonState__Sequence * array)
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
      simple_interfaces__msg__ButtonState__fini(&array->data[i]);
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

simple_interfaces__msg__ButtonState__Sequence *
simple_interfaces__msg__ButtonState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__ButtonState__Sequence * array = (simple_interfaces__msg__ButtonState__Sequence *)allocator.allocate(sizeof(simple_interfaces__msg__ButtonState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simple_interfaces__msg__ButtonState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simple_interfaces__msg__ButtonState__Sequence__destroy(simple_interfaces__msg__ButtonState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simple_interfaces__msg__ButtonState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simple_interfaces__msg__ButtonState__Sequence__are_equal(const simple_interfaces__msg__ButtonState__Sequence * lhs, const simple_interfaces__msg__ButtonState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simple_interfaces__msg__ButtonState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simple_interfaces__msg__ButtonState__Sequence__copy(
  const simple_interfaces__msg__ButtonState__Sequence * input,
  simple_interfaces__msg__ButtonState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simple_interfaces__msg__ButtonState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simple_interfaces__msg__ButtonState * data =
      (simple_interfaces__msg__ButtonState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simple_interfaces__msg__ButtonState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simple_interfaces__msg__ButtonState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simple_interfaces__msg__ButtonState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
