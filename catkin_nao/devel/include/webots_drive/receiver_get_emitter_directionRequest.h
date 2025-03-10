// Generated by gencpp from file webots_drive/receiver_get_emitter_directionRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_RECEIVER_GET_EMITTER_DIRECTIONREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_RECEIVER_GET_EMITTER_DIRECTIONREQUEST_H


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
struct receiver_get_emitter_directionRequest_
{
  typedef receiver_get_emitter_directionRequest_<ContainerAllocator> Type;

  receiver_get_emitter_directionRequest_()
    : ask(0)  {
    }
  receiver_get_emitter_directionRequest_(const ContainerAllocator& _alloc)
    : ask(0)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_type;
  _ask_type ask;





  typedef boost::shared_ptr< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct receiver_get_emitter_directionRequest_

typedef ::webots_drive::receiver_get_emitter_directionRequest_<std::allocator<void> > receiver_get_emitter_directionRequest;

typedef boost::shared_ptr< ::webots_drive::receiver_get_emitter_directionRequest > receiver_get_emitter_directionRequestPtr;
typedef boost::shared_ptr< ::webots_drive::receiver_get_emitter_directionRequest const> receiver_get_emitter_directionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator1> & lhs, const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ask == rhs.ask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator1> & lhs, const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9df5232b65af94f73f79fe6d84301bb";
  }

  static const char* value(const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/receiver_get_emitter_directionRequest";
  }

  static const char* value(const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 ask\n"
;
  }

  static const char* value(const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct receiver_get_emitter_directionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::receiver_get_emitter_directionRequest_<ContainerAllocator>& v)
  {
    s << indent << "ask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_RECEIVER_GET_EMITTER_DIRECTIONREQUEST_H
