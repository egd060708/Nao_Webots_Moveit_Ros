// Generated by gencpp from file webots_drive/display_image_copy.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_COPY_H
#define WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_COPY_H

#include <ros/service_traits.h>


#include <webots_drive/display_image_copyRequest.h>
#include <webots_drive/display_image_copyResponse.h>


namespace webots_drive
{

struct display_image_copy
{

typedef display_image_copyRequest Request;
typedef display_image_copyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct display_image_copy
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::display_image_copy > {
  static const char* value()
  {
    return "631fd4626b960a90b6a634bededf2cea";
  }

  static const char* value(const ::webots_drive::display_image_copy&) { return value(); }
};

template<>
struct DataType< ::webots_drive::display_image_copy > {
  static const char* value()
  {
    return "webots_drive/display_image_copy";
  }

  static const char* value(const ::webots_drive::display_image_copy&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::display_image_copyRequest> should match
// service_traits::MD5Sum< ::webots_drive::display_image_copy >
template<>
struct MD5Sum< ::webots_drive::display_image_copyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::display_image_copy >::value();
  }
  static const char* value(const ::webots_drive::display_image_copyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::display_image_copyRequest> should match
// service_traits::DataType< ::webots_drive::display_image_copy >
template<>
struct DataType< ::webots_drive::display_image_copyRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::display_image_copy >::value();
  }
  static const char* value(const ::webots_drive::display_image_copyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::display_image_copyResponse> should match
// service_traits::MD5Sum< ::webots_drive::display_image_copy >
template<>
struct MD5Sum< ::webots_drive::display_image_copyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::display_image_copy >::value();
  }
  static const char* value(const ::webots_drive::display_image_copyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::display_image_copyResponse> should match
// service_traits::DataType< ::webots_drive::display_image_copy >
template<>
struct DataType< ::webots_drive::display_image_copyResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::display_image_copy >::value();
  }
  static const char* value(const ::webots_drive::display_image_copyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_DISPLAY_IMAGE_COPY_H
