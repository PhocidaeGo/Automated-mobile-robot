// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from lio_sam:msg/CloudInfo.idl
// generated code does not contain a copyright notice
#ifndef LIO_SAM__MSG__DETAIL__CLOUD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LIO_SAM__MSG__DETAIL__CLOUD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lio_sam/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lio_sam/msg/detail/cloud_info__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
bool cdr_serialize_lio_sam__msg__CloudInfo(
  const lio_sam__msg__CloudInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
bool cdr_deserialize_lio_sam__msg__CloudInfo(
  eprosima::fastcdr::Cdr &,
  lio_sam__msg__CloudInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
size_t get_serialized_size_lio_sam__msg__CloudInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
size_t max_serialized_size_lio_sam__msg__CloudInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
bool cdr_serialize_key_lio_sam__msg__CloudInfo(
  const lio_sam__msg__CloudInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
size_t get_serialized_size_key_lio_sam__msg__CloudInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
size_t max_serialized_size_key_lio_sam__msg__CloudInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lio_sam, msg, CloudInfo)();

#ifdef __cplusplus
}
#endif

#endif  // LIO_SAM__MSG__DETAIL__CLOUD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
