// Generated by gencpp from file webots_drive/node_add_force_with_offset.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_NODE_ADD_FORCE_WITH_OFFSET_H
#define WEBOTS_DRIVE_MESSAGE_NODE_ADD_FORCE_WITH_OFFSET_H

#include <ros/service_traits.h>


#include <webots_drive/node_add_force_with_offsetRequest.h>
#include <webots_drive/node_add_force_with_offsetResponse.h>


namespace webots_drive
{

struct node_add_force_with_offset
{

typedef node_add_force_with_offsetRequest Request;
typedef node_add_force_with_offsetResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_add_force_with_offset
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::node_add_force_with_offset > {
  static const char* value()
  {
    return "7bbdb8bfcc982af458fd685526128ebd";
  }

  static const char* value(const ::webots_drive::node_add_force_with_offset&) { return value(); }
};

template<>
struct DataType< ::webots_drive::node_add_force_with_offset > {
  static const char* value()
  {
    return "webots_drive/node_add_force_with_offset";
  }

  static const char* value(const ::webots_drive::node_add_force_with_offset&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::node_add_force_with_offsetRequest> should match
// service_traits::MD5Sum< ::webots_drive::node_add_force_with_offset >
template<>
struct MD5Sum< ::webots_drive::node_add_force_with_offsetRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_add_force_with_offset >::value();
  }
  static const char* value(const ::webots_drive::node_add_force_with_offsetRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_add_force_with_offsetRequest> should match
// service_traits::DataType< ::webots_drive::node_add_force_with_offset >
template<>
struct DataType< ::webots_drive::node_add_force_with_offsetRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_add_force_with_offset >::value();
  }
  static const char* value(const ::webots_drive::node_add_force_with_offsetRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::node_add_force_with_offsetResponse> should match
// service_traits::MD5Sum< ::webots_drive::node_add_force_with_offset >
template<>
struct MD5Sum< ::webots_drive::node_add_force_with_offsetResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_add_force_with_offset >::value();
  }
  static const char* value(const ::webots_drive::node_add_force_with_offsetResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_add_force_with_offsetResponse> should match
// service_traits::DataType< ::webots_drive::node_add_force_with_offset >
template<>
struct DataType< ::webots_drive::node_add_force_with_offsetResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_add_force_with_offset >::value();
  }
  static const char* value(const ::webots_drive::node_add_force_with_offsetResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_NODE_ADD_FORCE_WITH_OFFSET_H
