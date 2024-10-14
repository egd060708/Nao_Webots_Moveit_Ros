// Generated by gencpp from file webots_drive/node_disable_pose_tracking.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_NODE_DISABLE_POSE_TRACKING_H
#define WEBOTS_DRIVE_MESSAGE_NODE_DISABLE_POSE_TRACKING_H

#include <ros/service_traits.h>


#include <webots_drive/node_disable_pose_trackingRequest.h>
#include <webots_drive/node_disable_pose_trackingResponse.h>


namespace webots_drive
{

struct node_disable_pose_tracking
{

typedef node_disable_pose_trackingRequest Request;
typedef node_disable_pose_trackingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_disable_pose_tracking
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::node_disable_pose_tracking > {
  static const char* value()
  {
    return "f4bf0dd6ac618f06de5c519a76586978";
  }

  static const char* value(const ::webots_drive::node_disable_pose_tracking&) { return value(); }
};

template<>
struct DataType< ::webots_drive::node_disable_pose_tracking > {
  static const char* value()
  {
    return "webots_drive/node_disable_pose_tracking";
  }

  static const char* value(const ::webots_drive::node_disable_pose_tracking&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::node_disable_pose_trackingRequest> should match
// service_traits::MD5Sum< ::webots_drive::node_disable_pose_tracking >
template<>
struct MD5Sum< ::webots_drive::node_disable_pose_trackingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_disable_pose_tracking >::value();
  }
  static const char* value(const ::webots_drive::node_disable_pose_trackingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_disable_pose_trackingRequest> should match
// service_traits::DataType< ::webots_drive::node_disable_pose_tracking >
template<>
struct DataType< ::webots_drive::node_disable_pose_trackingRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_disable_pose_tracking >::value();
  }
  static const char* value(const ::webots_drive::node_disable_pose_trackingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::node_disable_pose_trackingResponse> should match
// service_traits::MD5Sum< ::webots_drive::node_disable_pose_tracking >
template<>
struct MD5Sum< ::webots_drive::node_disable_pose_trackingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_disable_pose_tracking >::value();
  }
  static const char* value(const ::webots_drive::node_disable_pose_trackingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_disable_pose_trackingResponse> should match
// service_traits::DataType< ::webots_drive::node_disable_pose_tracking >
template<>
struct DataType< ::webots_drive::node_disable_pose_trackingResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_disable_pose_tracking >::value();
  }
  static const char* value(const ::webots_drive::node_disable_pose_trackingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_NODE_DISABLE_POSE_TRACKING_H
