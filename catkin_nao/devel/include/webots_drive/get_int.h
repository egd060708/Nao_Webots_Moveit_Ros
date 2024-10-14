// Generated by gencpp from file webots_drive/get_int.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_GET_INT_H
#define WEBOTS_DRIVE_MESSAGE_GET_INT_H

#include <ros/service_traits.h>


#include <webots_drive/get_intRequest.h>
#include <webots_drive/get_intResponse.h>


namespace webots_drive
{

struct get_int
{

typedef get_intRequest Request;
typedef get_intResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_int
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::get_int > {
  static const char* value()
  {
    return "73dfae6ec9145dcc45d5ed973079e912";
  }

  static const char* value(const ::webots_drive::get_int&) { return value(); }
};

template<>
struct DataType< ::webots_drive::get_int > {
  static const char* value()
  {
    return "webots_drive/get_int";
  }

  static const char* value(const ::webots_drive::get_int&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::get_intRequest> should match
// service_traits::MD5Sum< ::webots_drive::get_int >
template<>
struct MD5Sum< ::webots_drive::get_intRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::get_int >::value();
  }
  static const char* value(const ::webots_drive::get_intRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::get_intRequest> should match
// service_traits::DataType< ::webots_drive::get_int >
template<>
struct DataType< ::webots_drive::get_intRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::get_int >::value();
  }
  static const char* value(const ::webots_drive::get_intRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::get_intResponse> should match
// service_traits::MD5Sum< ::webots_drive::get_int >
template<>
struct MD5Sum< ::webots_drive::get_intResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::get_int >::value();
  }
  static const char* value(const ::webots_drive::get_intResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::get_intResponse> should match
// service_traits::DataType< ::webots_drive::get_int >
template<>
struct DataType< ::webots_drive::get_intResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::get_int >::value();
  }
  static const char* value(const ::webots_drive::get_intResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_GET_INT_H
