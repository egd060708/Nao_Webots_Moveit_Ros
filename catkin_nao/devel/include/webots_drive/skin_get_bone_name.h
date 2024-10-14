// Generated by gencpp from file webots_drive/skin_get_bone_name.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_SKIN_GET_BONE_NAME_H
#define WEBOTS_DRIVE_MESSAGE_SKIN_GET_BONE_NAME_H

#include <ros/service_traits.h>


#include <webots_drive/skin_get_bone_nameRequest.h>
#include <webots_drive/skin_get_bone_nameResponse.h>


namespace webots_drive
{

struct skin_get_bone_name
{

typedef skin_get_bone_nameRequest Request;
typedef skin_get_bone_nameResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct skin_get_bone_name
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::skin_get_bone_name > {
  static const char* value()
  {
    return "66ffbfea27ff9e5699fd78f900fd8579";
  }

  static const char* value(const ::webots_drive::skin_get_bone_name&) { return value(); }
};

template<>
struct DataType< ::webots_drive::skin_get_bone_name > {
  static const char* value()
  {
    return "webots_drive/skin_get_bone_name";
  }

  static const char* value(const ::webots_drive::skin_get_bone_name&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::skin_get_bone_nameRequest> should match
// service_traits::MD5Sum< ::webots_drive::skin_get_bone_name >
template<>
struct MD5Sum< ::webots_drive::skin_get_bone_nameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::skin_get_bone_name >::value();
  }
  static const char* value(const ::webots_drive::skin_get_bone_nameRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::skin_get_bone_nameRequest> should match
// service_traits::DataType< ::webots_drive::skin_get_bone_name >
template<>
struct DataType< ::webots_drive::skin_get_bone_nameRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::skin_get_bone_name >::value();
  }
  static const char* value(const ::webots_drive::skin_get_bone_nameRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::skin_get_bone_nameResponse> should match
// service_traits::MD5Sum< ::webots_drive::skin_get_bone_name >
template<>
struct MD5Sum< ::webots_drive::skin_get_bone_nameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::skin_get_bone_name >::value();
  }
  static const char* value(const ::webots_drive::skin_get_bone_nameResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::skin_get_bone_nameResponse> should match
// service_traits::DataType< ::webots_drive::skin_get_bone_name >
template<>
struct DataType< ::webots_drive::skin_get_bone_nameResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::skin_get_bone_name >::value();
  }
  static const char* value(const ::webots_drive::skin_get_bone_nameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_SKIN_GET_BONE_NAME_H