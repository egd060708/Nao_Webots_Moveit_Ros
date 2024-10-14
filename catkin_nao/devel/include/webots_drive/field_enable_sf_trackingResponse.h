// Generated by gencpp from file webots_drive/field_enable_sf_trackingResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_FIELD_ENABLE_SF_TRACKINGRESPONSE_H
#define WEBOTS_DRIVE_MESSAGE_FIELD_ENABLE_SF_TRACKINGRESPONSE_H


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
struct field_enable_sf_trackingResponse_
{
  typedef field_enable_sf_trackingResponse_<ContainerAllocator> Type;

  field_enable_sf_trackingResponse_()
    : success(0)  {
    }
  field_enable_sf_trackingResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_enable_sf_trackingResponse_

typedef ::webots_drive::field_enable_sf_trackingResponse_<std::allocator<void> > field_enable_sf_trackingResponse;

typedef boost::shared_ptr< ::webots_drive::field_enable_sf_trackingResponse > field_enable_sf_trackingResponsePtr;
typedef boost::shared_ptr< ::webots_drive::field_enable_sf_trackingResponse const> field_enable_sf_trackingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator1> & lhs, const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator1> & lhs, const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b13460cb14006d3852674b4c614f25f";
  }

  static const char* value(const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b13460cb14006d3ULL;
  static const uint64_t static_value2 = 0x852674b4c614f25fULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/field_enable_sf_trackingResponse";
  }

  static const char* value(const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 success\n"
"\n"
;
  }

  static const char* value(const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_enable_sf_trackingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::field_enable_sf_trackingResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_FIELD_ENABLE_SF_TRACKINGRESPONSE_H
