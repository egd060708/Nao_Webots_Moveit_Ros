// Generated by gencpp from file webots_drive/mouse_get_stateRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_MOUSE_GET_STATEREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_MOUSE_GET_STATEREQUEST_H


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
struct mouse_get_stateRequest_
{
  typedef mouse_get_stateRequest_<ContainerAllocator> Type;

  mouse_get_stateRequest_()
    : ask(0)  {
    }
  mouse_get_stateRequest_(const ContainerAllocator& _alloc)
    : ask(0)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_type;
  _ask_type ask;





  typedef boost::shared_ptr< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct mouse_get_stateRequest_

typedef ::webots_drive::mouse_get_stateRequest_<std::allocator<void> > mouse_get_stateRequest;

typedef boost::shared_ptr< ::webots_drive::mouse_get_stateRequest > mouse_get_stateRequestPtr;
typedef boost::shared_ptr< ::webots_drive::mouse_get_stateRequest const> mouse_get_stateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator1> & lhs, const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ask == rhs.ask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator1> & lhs, const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9df5232b65af94f73f79fe6d84301bb";
  }

  static const char* value(const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/mouse_get_stateRequest";
  }

  static const char* value(const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 ask\n"
;
  }

  static const char* value(const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mouse_get_stateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::mouse_get_stateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::mouse_get_stateRequest_<ContainerAllocator>& v)
  {
    s << indent << "ask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_MOUSE_GET_STATEREQUEST_H
