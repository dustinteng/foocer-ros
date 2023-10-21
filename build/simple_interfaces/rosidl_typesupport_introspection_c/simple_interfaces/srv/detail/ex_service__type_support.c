// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simple_interfaces:srv/ExService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simple_interfaces/srv/detail/ex_service__rosidl_typesupport_introspection_c.h"
#include "simple_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simple_interfaces/srv/detail/ex_service__functions.h"
#include "simple_interfaces/srv/detail/ex_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simple_interfaces__srv__ExService_Request__init(message_memory);
}

void simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_fini_function(void * message_memory)
{
  simple_interfaces__srv__ExService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_message_member_array[2] = {
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces__srv__ExService_Request, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces__srv__ExService_Request, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_message_members = {
  "simple_interfaces__srv",  // message namespace
  "ExService_Request",  // message name
  2,  // number of fields
  sizeof(simple_interfaces__srv__ExService_Request),
  simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_message_member_array,  // message members
  simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_message_type_support_handle = {
  0,
  &simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_interfaces, srv, ExService_Request)() {
  if (!simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_message_type_support_handle.typesupport_identifier) {
    simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simple_interfaces__srv__ExService_Request__rosidl_typesupport_introspection_c__ExService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simple_interfaces/srv/detail/ex_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simple_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simple_interfaces/srv/detail/ex_service__functions.h"
// already included above
// #include "simple_interfaces/srv/detail/ex_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simple_interfaces__srv__ExService_Response__init(message_memory);
}

void simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_fini_function(void * message_memory)
{
  simple_interfaces__srv__ExService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_message_member_array[1] = {
  {
    "are_motors_ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces__srv__ExService_Response, are_motors_ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_message_members = {
  "simple_interfaces__srv",  // message namespace
  "ExService_Response",  // message name
  1,  // number of fields
  sizeof(simple_interfaces__srv__ExService_Response),
  simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_message_member_array,  // message members
  simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_message_type_support_handle = {
  0,
  &simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_interfaces, srv, ExService_Response)() {
  if (!simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_message_type_support_handle.typesupport_identifier) {
    simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simple_interfaces__srv__ExService_Response__rosidl_typesupport_introspection_c__ExService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simple_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simple_interfaces/srv/detail/ex_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_service_members = {
  "simple_interfaces__srv",  // service namespace
  "ExService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_Request_message_type_support_handle,
  NULL  // response message
  // simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_Response_message_type_support_handle
};

static rosidl_service_type_support_t simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_service_type_support_handle = {
  0,
  &simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_interfaces, srv, ExService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_interfaces, srv, ExService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_interfaces, srv, ExService)() {
  if (!simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_service_type_support_handle.typesupport_identifier) {
    simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_interfaces, srv, ExService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_interfaces, srv, ExService_Response)()->data;
  }

  return &simple_interfaces__srv__detail__ex_service__rosidl_typesupport_introspection_c__ExService_service_type_support_handle;
}
