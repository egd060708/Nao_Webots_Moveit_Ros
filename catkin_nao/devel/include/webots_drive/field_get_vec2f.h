// Generated by gencpp from file webots_drive/field_get_vec2f.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_FIELD_GET_VEC2F_H
#define WEBOTS_DRIVE_MESSAGE_FIELD_GET_VEC2F_H

#include <ros/service_traits.h>


#include <webots_drive/field_get_vec2fRequest.h>
#include <webots_drive/field_get_vec2fResponse.h>


namespace webots_drive
{

struct field_get_vec2f
{

typedef field_get_vec2fRequest Request;
typedef field_get_vec2fResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_vec2f
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::field_get_vec2f > {
  static const char* value()
  {
    return "5ba75d9d095ca14bcb57c58ac3b63422";
  }

  static const char* value(const ::webots_drive::field_get_vec2f&) { return value(); }
};

template<>
struct DataType< ::webots_drive::field_get_vec2f > {
  static const char* value()
  {
    return "webots_drive/field_get_vec2f";
  }

  static const char* value(const ::webots_drive::field_get_vec2f&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::field_get_vec2fRequest> should match
// service_traits::MD5Sum< ::webots_drive::field_get_vec2f >
template<>
struct MD5Sum< ::webots_drive::field_get_vec2fRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_get_vec2f >::value();
  }
  static const char* value(const ::webots_drive::field_get_vec2fRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_get_vec2fRequest> should match
// service_traits::DataType< ::webots_drive::field_get_vec2f >
template<>
struct DataType< ::webots_drive::field_get_vec2fRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_get_vec2f >::value();
  }
  static const char* value(const ::webots_drive::field_get_vec2fRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::field_get_vec2fResponse> should match
// service_traits::MD5Sum< ::webots_drive::field_get_vec2f >
template<>
struct MD5Sum< ::webots_drive::field_get_vec2fResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_get_vec2f >::value();
  }
  static const char* value(const ::webots_drive::field_get_vec2fResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_get_vec2fResponse> should match
// service_traits::DataType< ::webots_drive::field_get_vec2f >
template<>
struct DataType< ::webots_drive::field_get_vec2fResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_get_vec2f >::value();
  }
  static const char* value(const ::webots_drive::field_get_vec2fResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_FIELD_GET_VEC2F_H