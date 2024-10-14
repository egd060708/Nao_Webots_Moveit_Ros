// Generated by gencpp from file webots_drive/camera_get_focus_info.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_CAMERA_GET_FOCUS_INFO_H
#define WEBOTS_DRIVE_MESSAGE_CAMERA_GET_FOCUS_INFO_H

#include <ros/service_traits.h>


#include <webots_drive/camera_get_focus_infoRequest.h>
#include <webots_drive/camera_get_focus_infoResponse.h>


namespace webots_drive
{

struct camera_get_focus_info
{

typedef camera_get_focus_infoRequest Request;
typedef camera_get_focus_infoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct camera_get_focus_info
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::camera_get_focus_info > {
  static const char* value()
  {
    return "b515f92c1f91e19619caa437c4da4d85";
  }

  static const char* value(const ::webots_drive::camera_get_focus_info&) { return value(); }
};

template<>
struct DataType< ::webots_drive::camera_get_focus_info > {
  static const char* value()
  {
    return "webots_drive/camera_get_focus_info";
  }

  static const char* value(const ::webots_drive::camera_get_focus_info&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::camera_get_focus_infoRequest> should match
// service_traits::MD5Sum< ::webots_drive::camera_get_focus_info >
template<>
struct MD5Sum< ::webots_drive::camera_get_focus_infoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::camera_get_focus_info >::value();
  }
  static const char* value(const ::webots_drive::camera_get_focus_infoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::camera_get_focus_infoRequest> should match
// service_traits::DataType< ::webots_drive::camera_get_focus_info >
template<>
struct DataType< ::webots_drive::camera_get_focus_infoRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::camera_get_focus_info >::value();
  }
  static const char* value(const ::webots_drive::camera_get_focus_infoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::camera_get_focus_infoResponse> should match
// service_traits::MD5Sum< ::webots_drive::camera_get_focus_info >
template<>
struct MD5Sum< ::webots_drive::camera_get_focus_infoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::camera_get_focus_info >::value();
  }
  static const char* value(const ::webots_drive::camera_get_focus_infoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::camera_get_focus_infoResponse> should match
// service_traits::DataType< ::webots_drive::camera_get_focus_info >
template<>
struct DataType< ::webots_drive::camera_get_focus_infoResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::camera_get_focus_info >::value();
  }
  static const char* value(const ::webots_drive::camera_get_focus_infoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_CAMERA_GET_FOCUS_INFO_H
