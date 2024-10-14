// Generated by gencpp from file webots_drive/set_float_arrayRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_SET_FLOAT_ARRAYREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_SET_FLOAT_ARRAYREQUEST_H


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
struct set_float_arrayRequest_
{
  typedef set_float_arrayRequest_<ContainerAllocator> Type;

  set_float_arrayRequest_()
    : values()  {
    }
  set_float_arrayRequest_(const ContainerAllocator& _alloc)
    : values(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _values_type;
  _values_type values;





  typedef boost::shared_ptr< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_float_arrayRequest_

typedef ::webots_drive::set_float_arrayRequest_<std::allocator<void> > set_float_arrayRequest;

typedef boost::shared_ptr< ::webots_drive::set_float_arrayRequest > set_float_arrayRequestPtr;
typedef boost::shared_ptr< ::webots_drive::set_float_arrayRequest const> set_float_arrayRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::set_float_arrayRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::set_float_arrayRequest_<ContainerAllocator1> & lhs, const ::webots_drive::set_float_arrayRequest_<ContainerAllocator2> & rhs)
{
  return lhs.values == rhs.values;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::set_float_arrayRequest_<ContainerAllocator1> & lhs, const ::webots_drive::set_float_arrayRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b9163d7c678dcd669317e43e46b63d96";
  }

  static const char* value(const ::webots_drive::set_float_arrayRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb9163d7c678dcd66ULL;
  static const uint64_t static_value2 = 0x9317e43e46b63d96ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/set_float_arrayRequest";
  }

  static const char* value(const ::webots_drive::set_float_arrayRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] values\n"
;
  }

  static const char* value(const ::webots_drive::set_float_arrayRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_float_arrayRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::set_float_arrayRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::set_float_arrayRequest_<ContainerAllocator>& v)
  {
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_SET_FLOAT_ARRAYREQUEST_H
