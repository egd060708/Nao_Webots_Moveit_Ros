// Generated by gencpp from file webots_drive/field_remove_nodeRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_FIELD_REMOVE_NODEREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_FIELD_REMOVE_NODEREQUEST_H


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
struct field_remove_nodeRequest_
{
  typedef field_remove_nodeRequest_<ContainerAllocator> Type;

  field_remove_nodeRequest_()
    : field(0)
    , position(0)  {
    }
  field_remove_nodeRequest_(const ContainerAllocator& _alloc)
    : field(0)
    , position(0)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;

   typedef int32_t _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct field_remove_nodeRequest_

typedef ::webots_drive::field_remove_nodeRequest_<std::allocator<void> > field_remove_nodeRequest;

typedef boost::shared_ptr< ::webots_drive::field_remove_nodeRequest > field_remove_nodeRequestPtr;
typedef boost::shared_ptr< ::webots_drive::field_remove_nodeRequest const> field_remove_nodeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator1> & lhs, const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field &&
    lhs.position == rhs.position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator1> & lhs, const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e93ba679ed362db7a38da88ce503a380";
  }

  static const char* value(const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe93ba679ed362db7ULL;
  static const uint64_t static_value2 = 0xa38da88ce503a380ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/field_remove_nodeRequest";
  }

  static const char* value(const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
"int32 position\n"
;
  }

  static const char* value(const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_remove_nodeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::field_remove_nodeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::field_remove_nodeRequest_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
    s << indent << "position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_FIELD_REMOVE_NODEREQUEST_H
