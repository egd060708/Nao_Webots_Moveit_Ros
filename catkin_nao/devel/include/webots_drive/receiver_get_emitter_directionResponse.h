// Generated by gencpp from file webots_drive/receiver_get_emitter_directionResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_RECEIVER_GET_EMITTER_DIRECTIONRESPONSE_H
#define WEBOTS_DRIVE_MESSAGE_RECEIVER_GET_EMITTER_DIRECTIONRESPONSE_H


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
struct receiver_get_emitter_directionResponse_
{
  typedef receiver_get_emitter_directionResponse_<ContainerAllocator> Type;

  receiver_get_emitter_directionResponse_()
    : direction()  {
    }
  receiver_get_emitter_directionResponse_(const ContainerAllocator& _alloc)
    : direction(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _direction_type;
  _direction_type direction;





  typedef boost::shared_ptr< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct receiver_get_emitter_directionResponse_

typedef ::webots_drive::receiver_get_emitter_directionResponse_<std::allocator<void> > receiver_get_emitter_directionResponse;

typedef boost::shared_ptr< ::webots_drive::receiver_get_emitter_directionResponse > receiver_get_emitter_directionResponsePtr;
typedef boost::shared_ptr< ::webots_drive::receiver_get_emitter_directionResponse const> receiver_get_emitter_directionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator1> & lhs, const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.direction == rhs.direction;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator1> & lhs, const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f61a8da1ee4e83406fd5157b36d50cb";
  }

  static const char* value(const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f61a8da1ee4e834ULL;
  static const uint64_t static_value2 = 0x06fd5157b36d50cbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/receiver_get_emitter_directionResponse";
  }

  static const char* value(const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] direction\n"
"\n"
;
  }

  static const char* value(const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct receiver_get_emitter_directionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::receiver_get_emitter_directionResponse_<ContainerAllocator>& v)
  {
    s << indent << "direction[]" << std::endl;
    for (size_t i = 0; i < v.direction.size(); ++i)
    {
      s << indent << "  direction[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.direction[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_RECEIVER_GET_EMITTER_DIRECTIONRESPONSE_H
