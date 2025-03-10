// Generated by gencpp from file webots_drive/robot_get_device_listResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_ROBOT_GET_DEVICE_LISTRESPONSE_H
#define WEBOTS_DRIVE_MESSAGE_ROBOT_GET_DEVICE_LISTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace webots_drive
{
template <class ContainerAllocator>
struct robot_get_device_listResponse_
{
  typedef robot_get_device_listResponse_<ContainerAllocator> Type;

  robot_get_device_listResponse_()
    : list()  {
    }
  robot_get_device_listResponse_(const ContainerAllocator& _alloc)
    : list(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _list_type;
  _list_type list;





  typedef boost::shared_ptr< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> const> ConstPtr;

}; // struct robot_get_device_listResponse_

typedef ::webots_drive::robot_get_device_listResponse_<std::allocator<void> > robot_get_device_listResponse;

typedef boost::shared_ptr< ::webots_drive::robot_get_device_listResponse > robot_get_device_listResponsePtr;
typedef boost::shared_ptr< ::webots_drive::robot_get_device_listResponse const> robot_get_device_listResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator1> & lhs, const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator2> & rhs)
{
  return lhs.list == rhs.list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator1> & lhs, const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e09fa9aad51508cfdcab3b64f048ce0";
  }

  static const char* value(const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e09fa9aad51508cULL;
  static const uint64_t static_value2 = 0xfdcab3b64f048ce0ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/robot_get_device_listResponse";
  }

  static const char* value(const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] list\n"
"\n"
;
  }

  static const char* value(const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_get_device_listResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::robot_get_device_listResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::robot_get_device_listResponse_<ContainerAllocator>& v)
  {
    s << indent << "list[]" << std::endl;
    for (size_t i = 0; i < v.list.size(); ++i)
    {
      s << indent << "  list[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_ROBOT_GET_DEVICE_LISTRESPONSE_H
