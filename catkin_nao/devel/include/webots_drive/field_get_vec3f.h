// Generated by gencpp from file webots_drive/field_get_vec3f.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_FIELD_GET_VEC3F_H
#define WEBOTS_DRIVE_MESSAGE_FIELD_GET_VEC3F_H

#include <ros/service_traits.h>


#include <webots_drive/field_get_vec3fRequest.h>
#include <webots_drive/field_get_vec3fResponse.h>


namespace webots_drive
{

struct field_get_vec3f
{

typedef field_get_vec3fRequest Request;
typedef field_get_vec3fResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_vec3f
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::field_get_vec3f > {
  static const char* value()
  {
    return "5ba75d9d095ca14bcb57c58ac3b63422";
  }

  static const char* value(const ::webots_drive::field_get_vec3f&) { return value(); }
};

template<>
struct DataType< ::webots_drive::field_get_vec3f > {
  static const char* value()
  {
    return "webots_drive/field_get_vec3f";
  }

  static const char* value(const ::webots_drive::field_get_vec3f&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::field_get_vec3fRequest> should match
// service_traits::MD5Sum< ::webots_drive::field_get_vec3f >
template<>
struct MD5Sum< ::webots_drive::field_get_vec3fRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_get_vec3f >::value();
  }
  static const char* value(const ::webots_drive::field_get_vec3fRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_get_vec3fRequest> should match
// service_traits::DataType< ::webots_drive::field_get_vec3f >
template<>
struct DataType< ::webots_drive::field_get_vec3fRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_get_vec3f >::value();
  }
  static const char* value(const ::webots_drive::field_get_vec3fRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::field_get_vec3fResponse> should match
// service_traits::MD5Sum< ::webots_drive::field_get_vec3f >
template<>
struct MD5Sum< ::webots_drive::field_get_vec3fResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_get_vec3f >::value();
  }
  static const char* value(const ::webots_drive::field_get_vec3fResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_get_vec3fResponse> should match
// service_traits::DataType< ::webots_drive::field_get_vec3f >
template<>
struct DataType< ::webots_drive::field_get_vec3fResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_get_vec3f >::value();
  }
  static const char* value(const ::webots_drive::field_get_vec3fResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_FIELD_GET_VEC3F_H
