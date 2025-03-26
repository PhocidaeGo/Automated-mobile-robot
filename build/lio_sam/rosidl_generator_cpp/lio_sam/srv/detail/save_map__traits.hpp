// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lio_sam:srv/SaveMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lio_sam/srv/save_map.hpp"


#ifndef LIO_SAM__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
#define LIO_SAM__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lio_sam/srv/detail/save_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lio_sam
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: destination
  {
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveMap_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lio_sam

namespace rosidl_generator_traits
{

[[deprecated("use lio_sam::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lio_sam::srv::SaveMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lio_sam::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lio_sam::srv::to_yaml() instead")]]
inline std::string to_yaml(const lio_sam::srv::SaveMap_Request & msg)
{
  return lio_sam::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lio_sam::srv::SaveMap_Request>()
{
  return "lio_sam::srv::SaveMap_Request";
}

template<>
inline const char * name<lio_sam::srv::SaveMap_Request>()
{
  return "lio_sam/srv/SaveMap_Request";
}

template<>
struct has_fixed_size<lio_sam::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lio_sam::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lio_sam::srv::SaveMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lio_sam
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveMap_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lio_sam

namespace rosidl_generator_traits
{

[[deprecated("use lio_sam::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lio_sam::srv::SaveMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lio_sam::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lio_sam::srv::to_yaml() instead")]]
inline std::string to_yaml(const lio_sam::srv::SaveMap_Response & msg)
{
  return lio_sam::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lio_sam::srv::SaveMap_Response>()
{
  return "lio_sam::srv::SaveMap_Response";
}

template<>
inline const char * name<lio_sam::srv::SaveMap_Response>()
{
  return "lio_sam/srv/SaveMap_Response";
}

template<>
struct has_fixed_size<lio_sam::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lio_sam::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lio_sam::srv::SaveMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace lio_sam
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveMap_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveMap_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveMap_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lio_sam

namespace rosidl_generator_traits
{

[[deprecated("use lio_sam::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lio_sam::srv::SaveMap_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  lio_sam::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lio_sam::srv::to_yaml() instead")]]
inline std::string to_yaml(const lio_sam::srv::SaveMap_Event & msg)
{
  return lio_sam::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lio_sam::srv::SaveMap_Event>()
{
  return "lio_sam::srv::SaveMap_Event";
}

template<>
inline const char * name<lio_sam::srv::SaveMap_Event>()
{
  return "lio_sam/srv/SaveMap_Event";
}

template<>
struct has_fixed_size<lio_sam::srv::SaveMap_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lio_sam::srv::SaveMap_Event>
  : std::integral_constant<bool, has_bounded_size<lio_sam::srv::SaveMap_Request>::value && has_bounded_size<lio_sam::srv::SaveMap_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<lio_sam::srv::SaveMap_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lio_sam::srv::SaveMap>()
{
  return "lio_sam::srv::SaveMap";
}

template<>
inline const char * name<lio_sam::srv::SaveMap>()
{
  return "lio_sam/srv/SaveMap";
}

template<>
struct has_fixed_size<lio_sam::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_fixed_size<lio_sam::srv::SaveMap_Request>::value &&
    has_fixed_size<lio_sam::srv::SaveMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<lio_sam::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_bounded_size<lio_sam::srv::SaveMap_Request>::value &&
    has_bounded_size<lio_sam::srv::SaveMap_Response>::value
  >
{
};

template<>
struct is_service<lio_sam::srv::SaveMap>
  : std::true_type
{
};

template<>
struct is_service_request<lio_sam::srv::SaveMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lio_sam::srv::SaveMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIO_SAM__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
