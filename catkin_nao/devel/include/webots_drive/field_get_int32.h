// Generated by gencpp from file webots_drive/field_get_int32.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_FIELD_GET_INT32_H
#define WEBOTS_DRIVE_MESSAGE_FIELD_GET_INT32_H

#include <ros/service_traits.h>


#include <webots_drive/field_get_int32Request.h>
#include <webots_drive/field_get_int32Response.h>


namespace webots_drive
{

struct field_get_int32
{

typedef field_get_int32Request Request;
typedef field_get_int32Response Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_int32
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::field_get_int32 > {
  static const char* value()
  {
    return "f5c94e53fe49e81de1151baa92dffdc5";
  }

  static const char* value(const ::webots_drive::field_get_int32&) { return value(); }
};

template<>
struct DataType< ::webots_drive::field_get_int32 > {
  static const char* value()
  {
    return "webots_drive/field_get_int32";
  }

  static const char* value(const ::webots_drive::field_get_int32&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::field_get_int32Request> should match
// service_traits::MD5Sum< ::webots_drive::field_get_int32 >
template<>
struct MD5Sum< ::webots_drive::field_get_int32Request>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_get_int32 >::value();
  }
  static const char* value(const ::webots_drive::field_get_int32Request&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_get_int32Request> should match
// service_traits::DataType< ::webots_drive::field_get_int32 >
template<>
struct DataType< ::webots_drive::field_get_int32Request>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_get_int32 >::value();
  }
  static const char* value(const ::webots_drive::field_get_int32Request&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::field_get_int32Response> should match
// service_traits::MD5Sum< ::webots_drive::field_get_int32 >
template<>
struct MD5Sum< ::webots_drive::field_get_int32Response>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_get_int32 >::value();
  }
  static const char* value(const ::webots_drive::field_get_int32Response&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_get_int32Response> should match
// service_traits::DataType< ::webots_drive::field_get_int32 >
template<>
struct DataType< ::webots_drive::field_get_int32Response>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_get_int32 >::value();
  }
  static const char* value(const ::webots_drive::field_get_int32Response&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_FIELD_GET_INT32_H
