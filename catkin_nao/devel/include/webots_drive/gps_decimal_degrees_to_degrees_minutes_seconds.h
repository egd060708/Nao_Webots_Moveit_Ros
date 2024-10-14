// Generated by gencpp from file webots_drive/gps_decimal_degrees_to_degrees_minutes_seconds.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_GPS_DECIMAL_DEGREES_TO_DEGREES_MINUTES_SECONDS_H
#define WEBOTS_DRIVE_MESSAGE_GPS_DECIMAL_DEGREES_TO_DEGREES_MINUTES_SECONDS_H

#include <ros/service_traits.h>


#include <webots_drive/gps_decimal_degrees_to_degrees_minutes_secondsRequest.h>
#include <webots_drive/gps_decimal_degrees_to_degrees_minutes_secondsResponse.h>


namespace webots_drive
{

struct gps_decimal_degrees_to_degrees_minutes_seconds
{

typedef gps_decimal_degrees_to_degrees_minutes_secondsRequest Request;
typedef gps_decimal_degrees_to_degrees_minutes_secondsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct gps_decimal_degrees_to_degrees_minutes_seconds
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds > {
  static const char* value()
  {
    return "2911ee9051e401397c9b1e29a01f7ead";
  }

  static const char* value(const ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds&) { return value(); }
};

template<>
struct DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds > {
  static const char* value()
  {
    return "webots_drive/gps_decimal_degrees_to_degrees_minutes_seconds";
  }

  static const char* value(const ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsRequest> should match
// service_traits::MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds >
template<>
struct MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds >::value();
  }
  static const char* value(const ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsRequest> should match
// service_traits::DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds >
template<>
struct DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds >::value();
  }
  static const char* value(const ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsResponse> should match
// service_traits::MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds >
template<>
struct MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds >::value();
  }
  static const char* value(const ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsResponse> should match
// service_traits::DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds >
template<>
struct DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::gps_decimal_degrees_to_degrees_minutes_seconds >::value();
  }
  static const char* value(const ::webots_drive::gps_decimal_degrees_to_degrees_minutes_secondsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_GPS_DECIMAL_DEGREES_TO_DEGREES_MINUTES_SECONDS_H
