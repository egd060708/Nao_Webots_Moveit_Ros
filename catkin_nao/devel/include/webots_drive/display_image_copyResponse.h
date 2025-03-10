// Generated by gencpp from file webots_drive/display_image_copyResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_COPYRESPONSE_H
#define WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_COPYRESPONSE_H


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
struct display_image_copyResponse_
{
  typedef display_image_copyResponse_<ContainerAllocator> Type;

  display_image_copyResponse_()
    : ir(0)  {
    }
  display_image_copyResponse_(const ContainerAllocator& _alloc)
    : ir(0)  {
  (void)_alloc;
    }



   typedef uint64_t _ir_type;
  _ir_type ir;





  typedef boost::shared_ptr< ::webots_drive::display_image_copyResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::display_image_copyResponse_<ContainerAllocator> const> ConstPtr;

}; // struct display_image_copyResponse_

typedef ::webots_drive::display_image_copyResponse_<std::allocator<void> > display_image_copyResponse;

typedef boost::shared_ptr< ::webots_drive::display_image_copyResponse > display_image_copyResponsePtr;
typedef boost::shared_ptr< ::webots_drive::display_image_copyResponse const> display_image_copyResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::display_image_copyResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::display_image_copyResponse_<ContainerAllocator1> & lhs, const ::webots_drive::display_image_copyResponse_<ContainerAllocator2> & rhs)
{
  return lhs.ir == rhs.ir;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::display_image_copyResponse_<ContainerAllocator1> & lhs, const ::webots_drive::display_image_copyResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::display_image_copyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::display_image_copyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::display_image_copyResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "062bd6ec8c99fd70e30cc24256f9226a";
  }

  static const char* value(const ::webots_drive::display_image_copyResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x062bd6ec8c99fd70ULL;
  static const uint64_t static_value2 = 0xe30cc24256f9226aULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/display_image_copyResponse";
  }

  static const char* value(const ::webots_drive::display_image_copyResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 ir\n"
"\n"
;
  }

  static const char* value(const ::webots_drive::display_image_copyResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ir);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_image_copyResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::display_image_copyResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::display_image_copyResponse_<ContainerAllocator>& v)
  {
    s << indent << "ir: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.ir);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_COPYRESPONSE_H
