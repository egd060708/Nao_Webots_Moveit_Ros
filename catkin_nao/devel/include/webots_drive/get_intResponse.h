// Generated by gencpp from file webots_drive/get_intResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_GET_INTRESPONSE_H
#define WEBOTS_DRIVE_MESSAGE_GET_INTRESPONSE_H


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
struct get_intResponse_
{
  typedef get_intResponse_<ContainerAllocator> Type;

  get_intResponse_()
    : value(0)  {
    }
  get_intResponse_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef int32_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::webots_drive::get_intResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::get_intResponse_<ContainerAllocator> const> ConstPtr;

}; // struct get_intResponse_

typedef ::webots_drive::get_intResponse_<std::allocator<void> > get_intResponse;

typedef boost::shared_ptr< ::webots_drive::get_intResponse > get_intResponsePtr;
typedef boost::shared_ptr< ::webots_drive::get_intResponse const> get_intResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::get_intResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::get_intResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::get_intResponse_<ContainerAllocator1> & lhs, const ::webots_drive::get_intResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::get_intResponse_<ContainerAllocator1> & lhs, const ::webots_drive::get_intResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::get_intResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::get_intResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::get_intResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::get_intResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::get_intResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::get_intResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::get_intResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3087778e93fcd34cc8d65bc54e850d1";
  }

  static const char* value(const ::webots_drive::get_intResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3087778e93fcd34ULL;
  static const uint64_t static_value2 = 0xcc8d65bc54e850d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::get_intResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/get_intResponse";
  }

  static const char* value(const ::webots_drive::get_intResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::get_intResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 value\n"
"\n"
;
  }

  static const char* value(const ::webots_drive::get_intResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::get_intResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_intResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::get_intResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::get_intResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_GET_INTRESPONSE_H
