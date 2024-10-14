// Generated by gencpp from file webots_drive/field_disable_sf_tracking.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_FIELD_DISABLE_SF_TRACKING_H
#define WEBOTS_DRIVE_MESSAGE_FIELD_DISABLE_SF_TRACKING_H

#include <ros/service_traits.h>


#include <webots_drive/field_disable_sf_trackingRequest.h>
#include <webots_drive/field_disable_sf_trackingResponse.h>


namespace webots_drive
{

struct field_disable_sf_tracking
{

typedef field_disable_sf_trackingRequest Request;
typedef field_disable_sf_trackingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_disable_sf_tracking
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::field_disable_sf_tracking > {
  static const char* value()
  {
    return "d466ca5c1e4695154072bfb73f0f9e1f";
  }

  static const char* value(const ::webots_drive::field_disable_sf_tracking&) { return value(); }
};

template<>
struct DataType< ::webots_drive::field_disable_sf_tracking > {
  static const char* value()
  {
    return "webots_drive/field_disable_sf_tracking";
  }

  static const char* value(const ::webots_drive::field_disable_sf_tracking&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::field_disable_sf_trackingRequest> should match
// service_traits::MD5Sum< ::webots_drive::field_disable_sf_tracking >
template<>
struct MD5Sum< ::webots_drive::field_disable_sf_trackingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_disable_sf_tracking >::value();
  }
  static const char* value(const ::webots_drive::field_disable_sf_trackingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_disable_sf_trackingRequest> should match
// service_traits::DataType< ::webots_drive::field_disable_sf_tracking >
template<>
struct DataType< ::webots_drive::field_disable_sf_trackingRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_disable_sf_tracking >::value();
  }
  static const char* value(const ::webots_drive::field_disable_sf_trackingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::field_disable_sf_trackingResponse> should match
// service_traits::MD5Sum< ::webots_drive::field_disable_sf_tracking >
template<>
struct MD5Sum< ::webots_drive::field_disable_sf_trackingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_disable_sf_tracking >::value();
  }
  static const char* value(const ::webots_drive::field_disable_sf_trackingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_disable_sf_trackingResponse> should match
// service_traits::DataType< ::webots_drive::field_disable_sf_tracking >
template<>
struct DataType< ::webots_drive::field_disable_sf_trackingResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_disable_sf_tracking >::value();
  }
  static const char* value(const ::webots_drive::field_disable_sf_trackingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_FIELD_DISABLE_SF_TRACKING_H
