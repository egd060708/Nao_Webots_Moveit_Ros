// Generated by gencpp from file webots_drive/display_draw_textRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_DISPLAY_DRAW_TEXTREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_DISPLAY_DRAW_TEXTREQUEST_H


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
struct display_draw_textRequest_
{
  typedef display_draw_textRequest_<ContainerAllocator> Type;

  display_draw_textRequest_()
    : text()
    , x(0)
    , y(0)  {
    }
  display_draw_textRequest_(const ContainerAllocator& _alloc)
    : text(_alloc)
    , x(0)
    , y(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _text_type;
  _text_type text;

   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::webots_drive::display_draw_textRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::display_draw_textRequest_<ContainerAllocator> const> ConstPtr;

}; // struct display_draw_textRequest_

typedef ::webots_drive::display_draw_textRequest_<std::allocator<void> > display_draw_textRequest;

typedef boost::shared_ptr< ::webots_drive::display_draw_textRequest > display_draw_textRequestPtr;
typedef boost::shared_ptr< ::webots_drive::display_draw_textRequest const> display_draw_textRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::display_draw_textRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::display_draw_textRequest_<ContainerAllocator1> & lhs, const ::webots_drive::display_draw_textRequest_<ContainerAllocator2> & rhs)
{
  return lhs.text == rhs.text &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::display_draw_textRequest_<ContainerAllocator1> & lhs, const ::webots_drive::display_draw_textRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::display_draw_textRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::display_draw_textRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::display_draw_textRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d2520e8794aecbfdbbb03648b1650374";
  }

  static const char* value(const ::webots_drive::display_draw_textRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd2520e8794aecbfdULL;
  static const uint64_t static_value2 = 0xbbb03648b1650374ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/display_draw_textRequest";
  }

  static const char* value(const ::webots_drive::display_draw_textRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string text\n"
"int32 x\n"
"int32 y\n"
;
  }

  static const char* value(const ::webots_drive::display_draw_textRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.text);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_draw_textRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::display_draw_textRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::display_draw_textRequest_<ContainerAllocator>& v)
  {
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.text);
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_DISPLAY_DRAW_TEXTREQUEST_H
