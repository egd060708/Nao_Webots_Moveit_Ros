// Generated by gencpp from file webots_ros/field_set_vec3fRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_FIELD_SET_VEC3FREQUEST_H
#define WEBOTS_ROS_MESSAGE_FIELD_SET_VEC3FREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace webots_ros
{
template <class ContainerAllocator>
struct field_set_vec3fRequest_
{
  typedef field_set_vec3fRequest_<ContainerAllocator> Type;

  field_set_vec3fRequest_()
    : field(0)
    , index(0)
    , value()  {
    }
  field_set_vec3fRequest_(const ContainerAllocator& _alloc)
    : field(0)
    , index(0)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;

   typedef int32_t _index_type;
  _index_type index;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> const> ConstPtr;

}; // struct field_set_vec3fRequest_

typedef ::webots_ros::field_set_vec3fRequest_<std::allocator<void> > field_set_vec3fRequest;

typedef boost::shared_ptr< ::webots_ros::field_set_vec3fRequest > field_set_vec3fRequestPtr;
typedef boost::shared_ptr< ::webots_ros::field_set_vec3fRequest const> field_set_vec3fRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator1> & lhs, const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field &&
    lhs.index == rhs.index &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator1> & lhs, const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e78e366a5838b6427603da25de1ca26d";
  }

  static const char* value(const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe78e366a5838b642ULL;
  static const uint64_t static_value2 = 0x7603da25de1ca26dULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/field_set_vec3fRequest";
  }

  static const char* value(const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
"int32 index\n"
"geometry_msgs/Vector3 value\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
      stream.next(m.index);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_set_vec3fRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::field_set_vec3fRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::field_set_vec3fRequest_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
    s << indent << "value: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_SET_VEC3FREQUEST_H
