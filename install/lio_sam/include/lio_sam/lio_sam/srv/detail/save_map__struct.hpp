// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lio_sam:srv/SaveMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lio_sam/srv/save_map.hpp"


#ifndef LIO_SAM__SRV__DETAIL__SAVE_MAP__STRUCT_HPP_
#define LIO_SAM__SRV__DETAIL__SAVE_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lio_sam__srv__SaveMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__lio_sam__srv__SaveMap_Request __declspec(deprecated)
#endif

namespace lio_sam
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveMap_Request_
{
  using Type = SaveMap_Request_<ContainerAllocator>;

  explicit SaveMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
      this->destination = "";
    }
  }

  explicit SaveMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : destination(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
      this->destination = "";
    }
  }

  // field types and members
  using _resolution_type =
    float;
  _resolution_type resolution;
  using _destination_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _destination_type destination;

  // setters for named parameter idiom
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__destination(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->destination = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lio_sam::srv::SaveMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lio_sam::srv::SaveMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lio_sam::srv::SaveMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lio_sam::srv::SaveMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lio_sam::srv::SaveMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lio_sam::srv::SaveMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lio_sam::srv::SaveMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lio_sam::srv::SaveMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lio_sam::srv::SaveMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lio_sam::srv::SaveMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lio_sam__srv__SaveMap_Request
    std::shared_ptr<lio_sam::srv::SaveMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lio_sam__srv__SaveMap_Request
    std::shared_ptr<lio_sam::srv::SaveMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveMap_Request_ & other) const
  {
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveMap_Request_

// alias to use template instance with default allocator
using SaveMap_Request =
  lio_sam::srv::SaveMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lio_sam


#ifndef _WIN32
# define DEPRECATED__lio_sam__srv__SaveMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__lio_sam__srv__SaveMap_Response __declspec(deprecated)
#endif

namespace lio_sam
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveMap_Response_
{
  using Type = SaveMap_Response_<ContainerAllocator>;

  explicit SaveMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SaveMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lio_sam::srv::SaveMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lio_sam::srv::SaveMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lio_sam::srv::SaveMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lio_sam::srv::SaveMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lio_sam::srv::SaveMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lio_sam::srv::SaveMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lio_sam::srv::SaveMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lio_sam::srv::SaveMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lio_sam::srv::SaveMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lio_sam::srv::SaveMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lio_sam__srv__SaveMap_Response
    std::shared_ptr<lio_sam::srv::SaveMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lio_sam__srv__SaveMap_Response
    std::shared_ptr<lio_sam::srv::SaveMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveMap_Response_

// alias to use template instance with default allocator
using SaveMap_Response =
  lio_sam::srv::SaveMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lio_sam


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lio_sam__srv__SaveMap_Event __attribute__((deprecated))
#else
# define DEPRECATED__lio_sam__srv__SaveMap_Event __declspec(deprecated)
#endif

namespace lio_sam
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveMap_Event_
{
  using Type = SaveMap_Event_<ContainerAllocator>;

  explicit SaveMap_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SaveMap_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<lio_sam::srv::SaveMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lio_sam::srv::SaveMap_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<lio_sam::srv::SaveMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lio_sam::srv::SaveMap_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<lio_sam::srv::SaveMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lio_sam::srv::SaveMap_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<lio_sam::srv::SaveMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lio_sam::srv::SaveMap_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lio_sam::srv::SaveMap_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const lio_sam::srv::SaveMap_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lio_sam::srv::SaveMap_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lio_sam::srv::SaveMap_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lio_sam::srv::SaveMap_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lio_sam::srv::SaveMap_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lio_sam::srv::SaveMap_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lio_sam::srv::SaveMap_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lio_sam::srv::SaveMap_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lio_sam::srv::SaveMap_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lio_sam__srv__SaveMap_Event
    std::shared_ptr<lio_sam::srv::SaveMap_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lio_sam__srv__SaveMap_Event
    std::shared_ptr<lio_sam::srv::SaveMap_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveMap_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveMap_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveMap_Event_

// alias to use template instance with default allocator
using SaveMap_Event =
  lio_sam::srv::SaveMap_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lio_sam

namespace lio_sam
{

namespace srv
{

struct SaveMap
{
  using Request = lio_sam::srv::SaveMap_Request;
  using Response = lio_sam::srv::SaveMap_Response;
  using Event = lio_sam::srv::SaveMap_Event;
};

}  // namespace srv

}  // namespace lio_sam

#endif  // LIO_SAM__SRV__DETAIL__SAVE_MAP__STRUCT_HPP_
