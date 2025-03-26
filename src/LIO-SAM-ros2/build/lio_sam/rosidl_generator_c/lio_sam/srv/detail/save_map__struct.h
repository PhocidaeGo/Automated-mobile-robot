// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lio_sam:srv/SaveMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lio_sam/srv/save_map.h"


#ifndef LIO_SAM__SRV__DETAIL__SAVE_MAP__STRUCT_H_
#define LIO_SAM__SRV__DETAIL__SAVE_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'destination'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveMap in the package lio_sam.
typedef struct lio_sam__srv__SaveMap_Request
{
  float resolution;
  rosidl_runtime_c__String destination;
} lio_sam__srv__SaveMap_Request;

// Struct for a sequence of lio_sam__srv__SaveMap_Request.
typedef struct lio_sam__srv__SaveMap_Request__Sequence
{
  lio_sam__srv__SaveMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lio_sam__srv__SaveMap_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SaveMap in the package lio_sam.
typedef struct lio_sam__srv__SaveMap_Response
{
  bool success;
} lio_sam__srv__SaveMap_Response;

// Struct for a sequence of lio_sam__srv__SaveMap_Response.
typedef struct lio_sam__srv__SaveMap_Response__Sequence
{
  lio_sam__srv__SaveMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lio_sam__srv__SaveMap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  lio_sam__srv__SaveMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  lio_sam__srv__SaveMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SaveMap in the package lio_sam.
typedef struct lio_sam__srv__SaveMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  lio_sam__srv__SaveMap_Request__Sequence request;
  lio_sam__srv__SaveMap_Response__Sequence response;
} lio_sam__srv__SaveMap_Event;

// Struct for a sequence of lio_sam__srv__SaveMap_Event.
typedef struct lio_sam__srv__SaveMap_Event__Sequence
{
  lio_sam__srv__SaveMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lio_sam__srv__SaveMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIO_SAM__SRV__DETAIL__SAVE_MAP__STRUCT_H_
