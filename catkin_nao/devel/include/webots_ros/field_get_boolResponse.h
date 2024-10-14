// Generated by gencpp from file webots_ros/field_get_boolResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_BOOLRESPONSE_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_BOOLRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace webots_ros
{
template <class ContainerAllocator>
struct field_get_boolResponse_
{
  typedef field_get_boolResponse_<ContainerAllocator> Type;

  field_get_boolResponse_()
    : value(0)  {
    }
  field_get_boolResponse_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::webots_ros::field_get_boolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::field_get_boolResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_boolResponse_

typedef ::webots_ros::field_get_boolResponse_<std::allocator<void> > field_get_boolResponse;

typedef boost::shared_ptr< ::webots_ros::field_get_boolResponse > field_get_boolResponsePtr;
typedef boost::shared_ptr< ::webots_ros::field_get_boolResponse const> field_get_boolResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::field_get_boolResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::field_get_boolResponse_<ContainerAllocator1> & lhs, const ::webots_ros::field_get_boolResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::field_get_boolResponse_<ContainerAllocator1> & lhs, const ::webots_ros::field_get_boolResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::field_get_boolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::field_get_boolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::field_get_boolResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4da51e86d3bac963ee2bb1f41031407";
  }

  static const char* value(const ::webots_ros::field_get_boolResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4da51e86d3bac96ULL;
  static const uint64_t static_value2 = 0x3ee2bb1f41031407ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/field_get_boolResponse";
  }

  static const char* value(const ::webots_ros::field_get_boolResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 value\n"
"\n"
;
  }

  static const char* value(const ::webots_ros::field_get_boolResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_boolResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::field_get_boolResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::field_get_boolResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_BOOLRESPONSE_H
