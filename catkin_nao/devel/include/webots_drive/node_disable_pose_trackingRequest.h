// Generated by gencpp from file webots_drive/node_disable_pose_trackingRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_NODE_DISABLE_POSE_TRACKINGREQUEST_H
#define WEBOTS_DRIVE_MESSAGE_NODE_DISABLE_POSE_TRACKINGREQUEST_H


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
struct node_disable_pose_trackingRequest_
{
  typedef node_disable_pose_trackingRequest_<ContainerAllocator> Type;

  node_disable_pose_trackingRequest_()
    : node(0)
    , from_node(0)  {
    }
  node_disable_pose_trackingRequest_(const ContainerAllocator& _alloc)
    : node(0)
    , from_node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;

   typedef uint64_t _from_node_type;
  _from_node_type from_node;





  typedef boost::shared_ptr< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_disable_pose_trackingRequest_

typedef ::webots_drive::node_disable_pose_trackingRequest_<std::allocator<void> > node_disable_pose_trackingRequest;

typedef boost::shared_ptr< ::webots_drive::node_disable_pose_trackingRequest > node_disable_pose_trackingRequestPtr;
typedef boost::shared_ptr< ::webots_drive::node_disable_pose_trackingRequest const> node_disable_pose_trackingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator1> & lhs, const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node &&
    lhs.from_node == rhs.from_node;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator1> & lhs, const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eda5466e6469f685de429bfb11a7d60a";
  }

  static const char* value(const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeda5466e6469f685ULL;
  static const uint64_t static_value2 = 0xde429bfb11a7d60aULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_drive/node_disable_pose_trackingRequest";
  }

  static const char* value(const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"uint64 from_node\n"
;
  }

  static const char* value(const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
      stream.next(m.from_node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_disable_pose_trackingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_drive::node_disable_pose_trackingRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
    s << indent << "from_node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.from_node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_NODE_DISABLE_POSE_TRACKINGREQUEST_H
