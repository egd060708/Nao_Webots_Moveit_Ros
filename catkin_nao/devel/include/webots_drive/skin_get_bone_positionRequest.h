// Generated by gencpp from file webots_drive/skin_get_bone_positionRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_SKIN_GET_BONE_POSITIONREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_SKIN_GET_BONE_POSITIONREQUEST_H


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
struct skin_get_bone_positionRequest_
{
  typedef skin_get_bone_positionRequest_<ContainerAllocator> Type;

  skin_get_bone_positionRequest_()
    : index(0)
    , absolute(false)  {
    }
  skin_get_bone_positionRequest_(const ContainerAllocator& _alloc)
    : index(0)
    , absolute(false)  {
  (void)_alloc;
    }



   typedef int32_t _index_type;
  _index_type index;

   typedef uint8_t _absolute_type;
  _absolute_type absolute;





  typedef boost::shared_ptr< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct skin_get_bone_positionRequest_

typedef ::webots_drive::skin_get_bone_positionRequest_<std::allocator<void> > skin_get_bone_positionRequest;

typedef boost::shared_ptr< ::webots_drive::skin_get_bone_positionRequest > skin_get_bone_positionRequestPtr;
typedef boost::shared_ptr< ::webots_drive::skin_get_bone_positionRequest const> skin_get_bone_positionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator1> & lhs, const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.index == rhs.index &&
    lhs.absolute == rhs.absolute;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator1> & lhs, const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b80fdb520b22500446f343c69464386";
  }

  static const char* value(const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b80fdb520b22500ULL;
  static const uint64_t static_value2 = 0x446f343c69464386ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/skin_get_bone_positionRequest";
  }

  static const char* value(const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 index\n"
"bool absolute\n"
;
  }

  static const char* value(const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
      stream.next(m.absolute);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct skin_get_bone_positionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::skin_get_bone_positionRequest_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
    s << indent << "absolute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.absolute);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_SKIN_GET_BONE_POSITIONREQUEST_H
