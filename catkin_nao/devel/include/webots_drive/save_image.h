// Generated by gencpp from file webots_drive/save_image.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_SAVE_IMAGE_H
#define WEBOTS_DRIVE_MESSAGE_SAVE_IMAGE_H

#include <ros/service_traits.h>


#include <webots_drive/save_imageRequest.h>
#include <webots_drive/save_imageResponse.h>


namespace webots_drive
{

struct save_image
{

typedef save_imageRequest Request;
typedef save_imageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct save_image
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::save_image > {
  static const char* value()
  {
    return "9f4c973c7b1d0924ab26586269d7499e";
  }

  static const char* value(const ::webots_drive::save_image&) { return value(); }
};

template<>
struct DataType< ::webots_drive::save_image > {
  static const char* value()
  {
    return "webots_drive/save_image";
  }

  static const char* value(const ::webots_drive::save_image&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::save_imageRequest> should match
// service_traits::MD5Sum< ::webots_drive::save_image >
template<>
struct MD5Sum< ::webots_drive::save_imageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::save_image >::value();
  }
  static const char* value(const ::webots_drive::save_imageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::save_imageRequest> should match
// service_traits::DataType< ::webots_drive::save_image >
template<>
struct DataType< ::webots_drive::save_imageRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::save_image >::value();
  }
  static const char* value(const ::webots_drive::save_imageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::save_imageResponse> should match
// service_traits::MD5Sum< ::webots_drive::save_image >
template<>
struct MD5Sum< ::webots_drive::save_imageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::save_image >::value();
  }
  static const char* value(const ::webots_drive::save_imageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::save_imageResponse> should match
// service_traits::DataType< ::webots_drive::save_image >
template<>
struct DataType< ::webots_drive::save_imageResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::save_image >::value();
  }
  static const char* value(const ::webots_drive::save_imageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_SAVE_IMAGE_H
