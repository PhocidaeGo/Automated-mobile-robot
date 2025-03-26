// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lio_sam:srv/SaveMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lio_sam/srv/detail/save_map__rosidl_typesupport_introspection_c.h"
#include "lio_sam/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lio_sam/srv/detail/save_map__functions.h"
#include "lio_sam/srv/detail/save_map__struct.h"


// Include directives for member types
// Member `destination`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lio_sam__srv__SaveMap_Request__init(message_memory);
}

void lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_fini_function(void * message_memory)
{
  lio_sam__srv__SaveMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_member_array[2] = {
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam__srv__SaveMap_Request, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam__srv__SaveMap_Request, destination),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_members = {
  "lio_sam__srv",  // message namespace
  "SaveMap_Request",  // message name
  2,  // number of fields
  sizeof(lio_sam__srv__SaveMap_Request),
  false,  // has_any_key_member_
  lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_member_array,  // message members
  lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle = {
  0,
  &lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_members,
  get_message_typesupport_handle_function,
  &lio_sam__srv__SaveMap_Request__get_type_hash,
  &lio_sam__srv__SaveMap_Request__get_type_description,
  &lio_sam__srv__SaveMap_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lio_sam
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Request)() {
  if (!lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle.typesupport_identifier) {
    lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lio_sam/srv/detail/save_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lio_sam/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lio_sam/srv/detail/save_map__functions.h"
// already included above
// #include "lio_sam/srv/detail/save_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lio_sam__srv__SaveMap_Response__init(message_memory);
}

void lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_fini_function(void * message_memory)
{
  lio_sam__srv__SaveMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam__srv__SaveMap_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_members = {
  "lio_sam__srv",  // message namespace
  "SaveMap_Response",  // message name
  1,  // number of fields
  sizeof(lio_sam__srv__SaveMap_Response),
  false,  // has_any_key_member_
  lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_member_array,  // message members
  lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle = {
  0,
  &lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_members,
  get_message_typesupport_handle_function,
  &lio_sam__srv__SaveMap_Response__get_type_hash,
  &lio_sam__srv__SaveMap_Response__get_type_description,
  &lio_sam__srv__SaveMap_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lio_sam
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Response)() {
  if (!lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle.typesupport_identifier) {
    lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lio_sam/srv/detail/save_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lio_sam/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lio_sam/srv/detail/save_map__functions.h"
// already included above
// #include "lio_sam/srv/detail/save_map__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "lio_sam/srv/save_map.h"
// Member `request`
// Member `response`
// already included above
// #include "lio_sam/srv/detail/save_map__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lio_sam__srv__SaveMap_Event__init(message_memory);
}

void lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_fini_function(void * message_memory)
{
  lio_sam__srv__SaveMap_Event__fini(message_memory);
}

size_t lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__size_function__SaveMap_Event__request(
  const void * untyped_member)
{
  const lio_sam__srv__SaveMap_Request__Sequence * member =
    (const lio_sam__srv__SaveMap_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_const_function__SaveMap_Event__request(
  const void * untyped_member, size_t index)
{
  const lio_sam__srv__SaveMap_Request__Sequence * member =
    (const lio_sam__srv__SaveMap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_function__SaveMap_Event__request(
  void * untyped_member, size_t index)
{
  lio_sam__srv__SaveMap_Request__Sequence * member =
    (lio_sam__srv__SaveMap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__fetch_function__SaveMap_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const lio_sam__srv__SaveMap_Request * item =
    ((const lio_sam__srv__SaveMap_Request *)
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_const_function__SaveMap_Event__request(untyped_member, index));
  lio_sam__srv__SaveMap_Request * value =
    (lio_sam__srv__SaveMap_Request *)(untyped_value);
  *value = *item;
}

void lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__assign_function__SaveMap_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  lio_sam__srv__SaveMap_Request * item =
    ((lio_sam__srv__SaveMap_Request *)
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_function__SaveMap_Event__request(untyped_member, index));
  const lio_sam__srv__SaveMap_Request * value =
    (const lio_sam__srv__SaveMap_Request *)(untyped_value);
  *item = *value;
}

bool lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__resize_function__SaveMap_Event__request(
  void * untyped_member, size_t size)
{
  lio_sam__srv__SaveMap_Request__Sequence * member =
    (lio_sam__srv__SaveMap_Request__Sequence *)(untyped_member);
  lio_sam__srv__SaveMap_Request__Sequence__fini(member);
  return lio_sam__srv__SaveMap_Request__Sequence__init(member, size);
}

size_t lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__size_function__SaveMap_Event__response(
  const void * untyped_member)
{
  const lio_sam__srv__SaveMap_Response__Sequence * member =
    (const lio_sam__srv__SaveMap_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_const_function__SaveMap_Event__response(
  const void * untyped_member, size_t index)
{
  const lio_sam__srv__SaveMap_Response__Sequence * member =
    (const lio_sam__srv__SaveMap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_function__SaveMap_Event__response(
  void * untyped_member, size_t index)
{
  lio_sam__srv__SaveMap_Response__Sequence * member =
    (lio_sam__srv__SaveMap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__fetch_function__SaveMap_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const lio_sam__srv__SaveMap_Response * item =
    ((const lio_sam__srv__SaveMap_Response *)
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_const_function__SaveMap_Event__response(untyped_member, index));
  lio_sam__srv__SaveMap_Response * value =
    (lio_sam__srv__SaveMap_Response *)(untyped_value);
  *value = *item;
}

void lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__assign_function__SaveMap_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  lio_sam__srv__SaveMap_Response * item =
    ((lio_sam__srv__SaveMap_Response *)
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_function__SaveMap_Event__response(untyped_member, index));
  const lio_sam__srv__SaveMap_Response * value =
    (const lio_sam__srv__SaveMap_Response *)(untyped_value);
  *item = *value;
}

bool lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__resize_function__SaveMap_Event__response(
  void * untyped_member, size_t size)
{
  lio_sam__srv__SaveMap_Response__Sequence * member =
    (lio_sam__srv__SaveMap_Response__Sequence *)(untyped_member);
  lio_sam__srv__SaveMap_Response__Sequence__fini(member);
  return lio_sam__srv__SaveMap_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lio_sam__srv__SaveMap_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(lio_sam__srv__SaveMap_Event, request),  // bytes offset in struct
    NULL,  // default value
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__size_function__SaveMap_Event__request,  // size() function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_const_function__SaveMap_Event__request,  // get_const(index) function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_function__SaveMap_Event__request,  // get(index) function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__fetch_function__SaveMap_Event__request,  // fetch(index, &value) function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__assign_function__SaveMap_Event__request,  // assign(index, value) function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__resize_function__SaveMap_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(lio_sam__srv__SaveMap_Event, response),  // bytes offset in struct
    NULL,  // default value
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__size_function__SaveMap_Event__response,  // size() function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_const_function__SaveMap_Event__response,  // get_const(index) function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__get_function__SaveMap_Event__response,  // get(index) function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__fetch_function__SaveMap_Event__response,  // fetch(index, &value) function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__assign_function__SaveMap_Event__response,  // assign(index, value) function pointer
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__resize_function__SaveMap_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_members = {
  "lio_sam__srv",  // message namespace
  "SaveMap_Event",  // message name
  3,  // number of fields
  sizeof(lio_sam__srv__SaveMap_Event),
  false,  // has_any_key_member_
  lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_member_array,  // message members
  lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_type_support_handle = {
  0,
  &lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_members,
  get_message_typesupport_handle_function,
  &lio_sam__srv__SaveMap_Event__get_type_hash,
  &lio_sam__srv__SaveMap_Event__get_type_description,
  &lio_sam__srv__SaveMap_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lio_sam
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Event)() {
  lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Request)();
  lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Response)();
  if (!lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_type_support_handle.typesupport_identifier) {
    lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lio_sam/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lio_sam/srv/detail/save_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_members = {
  "lio_sam__srv",  // service namespace
  "SaveMap",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle,
  NULL,  // response message
  // lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle
  NULL  // event_message
  // lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle
};


static rosidl_service_type_support_t lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle = {
  0,
  &lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_members,
  get_service_typesupport_handle_function,
  &lio_sam__srv__SaveMap_Request__rosidl_typesupport_introspection_c__SaveMap_Request_message_type_support_handle,
  &lio_sam__srv__SaveMap_Response__rosidl_typesupport_introspection_c__SaveMap_Response_message_type_support_handle,
  &lio_sam__srv__SaveMap_Event__rosidl_typesupport_introspection_c__SaveMap_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    lio_sam,
    srv,
    SaveMap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    lio_sam,
    srv,
    SaveMap
  ),
  &lio_sam__srv__SaveMap__get_type_hash,
  &lio_sam__srv__SaveMap__get_type_description,
  &lio_sam__srv__SaveMap__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lio_sam
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap)(void) {
  if (!lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle.typesupport_identifier) {
    lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lio_sam, srv, SaveMap_Event)()->data;
  }

  return &lio_sam__srv__detail__save_map__rosidl_typesupport_introspection_c__SaveMap_service_type_support_handle;
}
