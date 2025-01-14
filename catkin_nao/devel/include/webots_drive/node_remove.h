// Generated by gencpp from file webots_drive/node_remove.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_NODE_REMOVE_H
#define WEBOTS_DRIVE_MESSAGE_NODE_REMOVE_H

#include <ros/service_traits.h>


#include <webots_drive/node_removeRequest.h>
#include <webots_drive/node_removeResponse.h>


namespace webots_drive
{

struct node_remove
{

typedef node_removeRequest Request;
typedef node_removeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_remove
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::node_remove > {
  static const char* value()
  {
    return "594d3b785623c78d3382c6628faa0f8c";
  }

  static const char* value(const ::webots_drive::node_remove&) { return value(); }
};

template<>
struct DataType< ::webots_drive::node_remove > {
  static const char* value()
  {
    return "webots_drive/node_remove";
  }

  static const char* value(const ::webots_drive::node_remove&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::node_removeRequest> should match
// service_traits::MD5Sum< ::webots_drive::node_remove >
template<>
struct MD5Sum< ::webots_drive::node_removeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_remove >::value();
  }
  static const char* value(const ::webots_drive::node_removeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_removeRequest> should match
// service_traits::DataType< ::webots_drive::node_remove >
template<>
struct DataType< ::webots_drive::node_removeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_remove >::value();
  }
  static const char* value(const ::webots_drive::node_removeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::node_removeResponse> should match
// service_traits::MD5Sum< ::webots_drive::node_remove >
template<>
struct MD5Sum< ::webots_drive::node_removeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_remove >::value();
  }
  static const char* value(const ::webots_drive::node_removeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_removeResponse> should match
// service_traits::DataType< ::webots_drive::node_remove >
template<>
struct DataType< ::webots_drive::node_removeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_remove >::value();
  }
  static const char* value(const ::webots_drive::node_removeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_NODE_REMOVE_H
