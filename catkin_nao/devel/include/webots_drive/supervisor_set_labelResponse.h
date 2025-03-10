// Generated by gencpp from file webots_drive/supervisor_set_labelResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_SUPERVISOR_SET_LABELRESPONSE_H
#define WEBOTS_DRIVE_MESSAGE_SUPERVISOR_SET_LABELRESPONSE_H


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
struct supervisor_set_labelResponse_
{
  typedef supervisor_set_labelResponse_<ContainerAllocator> Type;

  supervisor_set_labelResponse_()
    : success(0)  {
    }
  supervisor_set_labelResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_set_labelResponse_

typedef ::webots_drive::supervisor_set_labelResponse_<std::allocator<void> > supervisor_set_labelResponse;

typedef boost::shared_ptr< ::webots_drive::supervisor_set_labelResponse > supervisor_set_labelResponsePtr;
typedef boost::shared_ptr< ::webots_drive::supervisor_set_labelResponse const> supervisor_set_labelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator1> & lhs, const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator1> & lhs, const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b13460cb14006d3852674b4c614f25f";
  }

  static const char* value(const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b13460cb14006d3ULL;
  static const uint64_t static_value2 = 0x852674b4c614f25fULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/supervisor_set_labelResponse";
  }

  static const char* value(const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 success\n"
"\n"
;
  }

  static const char* value(const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_set_labelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::supervisor_set_labelResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_SUPERVISOR_SET_LABELRESPONSE_H
