// Generated by gencpp from file webots_drive/supervisor_get_from_defRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_SUPERVISOR_GET_FROM_DEFREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_SUPERVISOR_GET_FROM_DEFREQUEST_H


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
struct supervisor_get_from_defRequest_
{
  typedef supervisor_get_from_defRequest_<ContainerAllocator> Type;

  supervisor_get_from_defRequest_()
    : name()
    , proto(0)  {
    }
  supervisor_get_from_defRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , proto(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef uint64_t _proto_type;
  _proto_type proto;





  typedef boost::shared_ptr< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_get_from_defRequest_

typedef ::webots_drive::supervisor_get_from_defRequest_<std::allocator<void> > supervisor_get_from_defRequest;

typedef boost::shared_ptr< ::webots_drive::supervisor_get_from_defRequest > supervisor_get_from_defRequestPtr;
typedef boost::shared_ptr< ::webots_drive::supervisor_get_from_defRequest const> supervisor_get_from_defRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator1> & lhs, const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.proto == rhs.proto;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator1> & lhs, const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "178cf7495b55fb0d5a2e01c746ab4754";
  }

  static const char* value(const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x178cf7495b55fb0dULL;
  static const uint64_t static_value2 = 0x5a2e01c746ab4754ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/supervisor_get_from_defRequest";
  }

  static const char* value(const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"uint64 proto\n"
;
  }

  static const char* value(const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.proto);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_get_from_defRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::supervisor_get_from_defRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "proto: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.proto);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_SUPERVISOR_GET_FROM_DEFREQUEST_H
