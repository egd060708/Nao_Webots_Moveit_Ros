// Generated by gencpp from file webots_drive/supervisor_set_label.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_SUPERVISOR_SET_LABEL_H
#define WEBOTS_DRIVE_MESSAGE_SUPERVISOR_SET_LABEL_H

#include <ros/service_traits.h>


#include <webots_drive/supervisor_set_labelRequest.h>
#include <webots_drive/supervisor_set_labelResponse.h>


namespace webots_drive
{

struct supervisor_set_label
{

typedef supervisor_set_labelRequest Request;
typedef supervisor_set_labelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct supervisor_set_label
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::supervisor_set_label > {
  static const char* value()
  {
    return "5ee78a04723ef11d3847c8d8c557058c";
  }

  static const char* value(const ::webots_drive::supervisor_set_label&) { return value(); }
};

template<>
struct DataType< ::webots_drive::supervisor_set_label > {
  static const char* value()
  {
    return "webots_drive/supervisor_set_label";
  }

  static const char* value(const ::webots_drive::supervisor_set_label&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::supervisor_set_labelRequest> should match
// service_traits::MD5Sum< ::webots_drive::supervisor_set_label >
template<>
struct MD5Sum< ::webots_drive::supervisor_set_labelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::supervisor_set_label >::value();
  }
  static const char* value(const ::webots_drive::supervisor_set_labelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::supervisor_set_labelRequest> should match
// service_traits::DataType< ::webots_drive::supervisor_set_label >
template<>
struct DataType< ::webots_drive::supervisor_set_labelRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::supervisor_set_label >::value();
  }
  static const char* value(const ::webots_drive::supervisor_set_labelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::supervisor_set_labelResponse> should match
// service_traits::MD5Sum< ::webots_drive::supervisor_set_label >
template<>
struct MD5Sum< ::webots_drive::supervisor_set_labelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::supervisor_set_label >::value();
  }
  static const char* value(const ::webots_drive::supervisor_set_labelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::supervisor_set_labelResponse> should match
// service_traits::DataType< ::webots_drive::supervisor_set_label >
template<>
struct DataType< ::webots_drive::supervisor_set_labelResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::supervisor_set_label >::value();
  }
  static const char* value(const ::webots_drive::supervisor_set_labelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_SUPERVISOR_SET_LABEL_H
