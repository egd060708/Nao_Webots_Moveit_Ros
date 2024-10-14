// Generated by gencpp from file webots_drive/display_draw_rectangleRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_DISPLAY_DRAW_RECTANGLEREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_DISPLAY_DRAW_RECTANGLEREQUEST_H


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
struct display_draw_rectangleRequest_
{
  typedef display_draw_rectangleRequest_<ContainerAllocator> Type;

  display_draw_rectangleRequest_()
    : x(0)
    , y(0)
    , width(0)
    , height(0)  {
    }
  display_draw_rectangleRequest_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , width(0)
    , height(0)  {
  (void)_alloc;
    }



   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef int32_t _width_type;
  _width_type width;

   typedef int32_t _height_type;
  _height_type height;





  typedef boost::shared_ptr< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct display_draw_rectangleRequest_

typedef ::webots_drive::display_draw_rectangleRequest_<std::allocator<void> > display_draw_rectangleRequest;

typedef boost::shared_ptr< ::webots_drive::display_draw_rectangleRequest > display_draw_rectangleRequestPtr;
typedef boost::shared_ptr< ::webots_drive::display_draw_rectangleRequest const> display_draw_rectangleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator1> & lhs, const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.width == rhs.width &&
    lhs.height == rhs.height;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator1> & lhs, const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4425f1067abc7ec2e487d28194eccff4";
  }

  static const char* value(const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4425f1067abc7ec2ULL;
  static const uint64_t static_value2 = 0xe487d28194eccff4ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/display_draw_rectangleRequest";
  }

  static const char* value(const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 x\n"
"int32 y\n"
"int32 width\n"
"int32 height\n"
;
  }

  static const char* value(const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.width);
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_draw_rectangleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::display_draw_rectangleRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_DISPLAY_DRAW_RECTANGLEREQUEST_H
