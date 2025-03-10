// Generated by gencpp from file webots_drive/display_image_loadRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_LOADREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_LOADREQUEST_H


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
struct display_image_loadRequest_
{
  typedef display_image_loadRequest_<ContainerAllocator> Type;

  display_image_loadRequest_()
    : filename()  {
    }
  display_image_loadRequest_(const ContainerAllocator& _alloc)
    : filename(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _filename_type;
  _filename_type filename;





  typedef boost::shared_ptr< ::webots_drive::display_image_loadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::display_image_loadRequest_<ContainerAllocator> const> ConstPtr;

}; // struct display_image_loadRequest_

typedef ::webots_drive::display_image_loadRequest_<std::allocator<void> > display_image_loadRequest;

typedef boost::shared_ptr< ::webots_drive::display_image_loadRequest > display_image_loadRequestPtr;
typedef boost::shared_ptr< ::webots_drive::display_image_loadRequest const> display_image_loadRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::display_image_loadRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::display_image_loadRequest_<ContainerAllocator1> & lhs, const ::webots_drive::display_image_loadRequest_<ContainerAllocator2> & rhs)
{
  return lhs.filename == rhs.filename;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::display_image_loadRequest_<ContainerAllocator1> & lhs, const ::webots_drive::display_image_loadRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::display_image_loadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::display_image_loadRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::display_image_loadRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "030824f52a0628ead956fb9d67e66ae9";
  }

  static const char* value(const ::webots_drive::display_image_loadRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x030824f52a0628eaULL;
  static const uint64_t static_value2 = 0xd956fb9d67e66ae9ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/display_image_loadRequest";
  }

  static const char* value(const ::webots_drive::display_image_loadRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string filename\n"
;
  }

  static const char* value(const ::webots_drive::display_image_loadRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filename);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_image_loadRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::display_image_loadRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::display_image_loadRequest_<ContainerAllocator>& v)
  {
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.filename);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_LOADREQUEST_H
