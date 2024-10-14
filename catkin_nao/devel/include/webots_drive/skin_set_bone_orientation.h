// Generated by gencpp from file webots_drive/skin_set_bone_orientation.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_SKIN_SET_BONE_ORIENTATION_H
#define WEBOTS_DRIVE_MESSAGE_SKIN_SET_BONE_ORIENTATION_H

#include <ros/service_traits.h>


#include <webots_drive/skin_set_bone_orientationRequest.h>
#include <webots_drive/skin_set_bone_orientationResponse.h>


namespace webots_drive
{

struct skin_set_bone_orientation
{

typedef skin_set_bone_orientationRequest Request;
typedef skin_set_bone_orientationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct skin_set_bone_orientation
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::skin_set_bone_orientation > {
  static const char* value()
  {
    return "3902caf1e5bc44580e05f53048f6318b";
  }

  static const char* value(const ::webots_drive::skin_set_bone_orientation&) { return value(); }
};

template<>
struct DataType< ::webots_drive::skin_set_bone_orientation > {
  static const char* value()
  {
    return "webots_drive/skin_set_bone_orientation";
  }

  static const char* value(const ::webots_drive::skin_set_bone_orientation&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::skin_set_bone_orientationRequest> should match
// service_traits::MD5Sum< ::webots_drive::skin_set_bone_orientation >
template<>
struct MD5Sum< ::webots_drive::skin_set_bone_orientationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::skin_set_bone_orientation >::value();
  }
  static const char* value(const ::webots_drive::skin_set_bone_orientationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::skin_set_bone_orientationRequest> should match
// service_traits::DataType< ::webots_drive::skin_set_bone_orientation >
template<>
struct DataType< ::webots_drive::skin_set_bone_orientationRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::skin_set_bone_orientation >::value();
  }
  static const char* value(const ::webots_drive::skin_set_bone_orientationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::skin_set_bone_orientationResponse> should match
// service_traits::MD5Sum< ::webots_drive::skin_set_bone_orientation >
template<>
struct MD5Sum< ::webots_drive::skin_set_bone_orientationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::skin_set_bone_orientation >::value();
  }
  static const char* value(const ::webots_drive::skin_set_bone_orientationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::skin_set_bone_orientationResponse> should match
// service_traits::DataType< ::webots_drive::skin_set_bone_orientation >
template<>
struct DataType< ::webots_drive::skin_set_bone_orientationResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::skin_set_bone_orientation >::value();
  }
  static const char* value(const ::webots_drive::skin_set_bone_orientationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_SKIN_SET_BONE_ORIENTATION_H
