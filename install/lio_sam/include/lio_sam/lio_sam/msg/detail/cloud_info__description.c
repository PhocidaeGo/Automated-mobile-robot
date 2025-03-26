// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from lio_sam:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#include "lio_sam/msg/detail/cloud_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_lio_sam
const rosidl_type_hash_t *
lio_sam__msg__CloudInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0x99, 0x17, 0xfc, 0xe5, 0x0b, 0x1f, 0xdc,
      0xa1, 0x8c, 0x03, 0x54, 0x77, 0x4f, 0x1a, 0xb7,
      0xe0, 0xab, 0x9b, 0xba, 0xa1, 0xb0, 0xf2, 0xba,
      0x46, 0x55, 0xd4, 0xf7, 0x94, 0xa7, 0x3d, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "sensor_msgs/msg/detail/point_field__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__PointCloud2__EXPECTED_HASH = {1, {
    0x91, 0x98, 0xca, 0xbf, 0x7d, 0xa3, 0x79, 0x6a,
    0xe6, 0xfe, 0x19, 0xc4, 0xcb, 0x3b, 0xdd, 0x35,
    0x25, 0x49, 0x29, 0x88, 0xc7, 0x05, 0x22, 0x62,
    0x8a, 0xf5, 0xda, 0xa1, 0x24, 0xba, 0xe2, 0xb5,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__PointField__EXPECTED_HASH = {1, {
    0x5c, 0x6a, 0x47, 0x50, 0x72, 0x8c, 0x2b, 0xcf,
    0xbb, 0xf7, 0x03, 0x72, 0x25, 0xb2, 0x0b, 0x02,
    0xd4, 0x42, 0x96, 0x34, 0x73, 0x21, 0x46, 0xb7,
    0x42, 0xde, 0xe1, 0x72, 0x66, 0x37, 0xef, 0x01,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char lio_sam__msg__CloudInfo__TYPE_NAME[] = "lio_sam/msg/CloudInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_msgs__msg__PointCloud2__TYPE_NAME[] = "sensor_msgs/msg/PointCloud2";
static char sensor_msgs__msg__PointField__TYPE_NAME[] = "sensor_msgs/msg/PointField";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char lio_sam__msg__CloudInfo__FIELD_NAME__header[] = "header";
static char lio_sam__msg__CloudInfo__FIELD_NAME__start_ring_index[] = "start_ring_index";
static char lio_sam__msg__CloudInfo__FIELD_NAME__end_ring_index[] = "end_ring_index";
static char lio_sam__msg__CloudInfo__FIELD_NAME__point_col_ind[] = "point_col_ind";
static char lio_sam__msg__CloudInfo__FIELD_NAME__point_range[] = "point_range";
static char lio_sam__msg__CloudInfo__FIELD_NAME__imu_available[] = "imu_available";
static char lio_sam__msg__CloudInfo__FIELD_NAME__odom_available[] = "odom_available";
static char lio_sam__msg__CloudInfo__FIELD_NAME__imu_roll_init[] = "imu_roll_init";
static char lio_sam__msg__CloudInfo__FIELD_NAME__imu_pitch_init[] = "imu_pitch_init";
static char lio_sam__msg__CloudInfo__FIELD_NAME__imu_yaw_init[] = "imu_yaw_init";
static char lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_x[] = "initial_guess_x";
static char lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_y[] = "initial_guess_y";
static char lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_z[] = "initial_guess_z";
static char lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_roll[] = "initial_guess_roll";
static char lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_pitch[] = "initial_guess_pitch";
static char lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_yaw[] = "initial_guess_yaw";
static char lio_sam__msg__CloudInfo__FIELD_NAME__cloud_deskewed[] = "cloud_deskewed";
static char lio_sam__msg__CloudInfo__FIELD_NAME__cloud_corner[] = "cloud_corner";
static char lio_sam__msg__CloudInfo__FIELD_NAME__cloud_surface[] = "cloud_surface";

static rosidl_runtime_c__type_description__Field lio_sam__msg__CloudInfo__FIELDS[] = {
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__start_ring_index, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__end_ring_index, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__point_col_ind, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__point_range, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__imu_available, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__odom_available, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__imu_roll_init, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__imu_pitch_init, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__imu_yaw_init, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_x, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_y, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_z, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_roll, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_pitch, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__initial_guess_yaw, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__cloud_deskewed, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__cloud_corner, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {lio_sam__msg__CloudInfo__FIELD_NAME__cloud_surface, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription lio_sam__msg__CloudInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointCloud2__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__PointField__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lio_sam__msg__CloudInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lio_sam__msg__CloudInfo__TYPE_NAME, 21, 21},
      {lio_sam__msg__CloudInfo__FIELDS, 19, 19},
    },
    {lio_sam__msg__CloudInfo__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointCloud2__EXPECTED_HASH, sensor_msgs__msg__PointCloud2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__PointCloud2__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__PointField__EXPECTED_HASH, sensor_msgs__msg__PointField__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = sensor_msgs__msg__PointField__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Cloud Info\n"
  "std_msgs/Header header \n"
  "\n"
  "int32[] start_ring_index\n"
  "int32[] end_ring_index\n"
  "\n"
  "int32[]  point_col_ind # point column index in range image\n"
  "float32[] point_range # point range \n"
  "\n"
  "int64 imu_available\n"
  "int64 odom_available\n"
  "\n"
  "# Attitude for LOAM initialization\n"
  "float32 imu_roll_init\n"
  "float32 imu_pitch_init\n"
  "float32 imu_yaw_init\n"
  "\n"
  "# Initial guess from imu pre-integration\n"
  "float32 initial_guess_x\n"
  "float32 initial_guess_y\n"
  "float32 initial_guess_z\n"
  "float32 initial_guess_roll\n"
  "float32 initial_guess_pitch\n"
  "float32 initial_guess_yaw\n"
  "\n"
  "# Point cloud messages\n"
  "sensor_msgs/PointCloud2 cloud_deskewed  # original cloud deskewed\n"
  "sensor_msgs/PointCloud2 cloud_corner    # extracted corner feature\n"
  "sensor_msgs/PointCloud2 cloud_surface   # extracted surface feature";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
lio_sam__msg__CloudInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lio_sam__msg__CloudInfo__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 747, 747},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lio_sam__msg__CloudInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lio_sam__msg__CloudInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__PointCloud2__get_individual_type_description_source(NULL);
    sources[3] = *sensor_msgs__msg__PointField__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
