// Generated by gencpp from file webots_drive/field_get_node.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_FIELD_GET_NODE_H
#define WEBOTS_DRIVE_MESSAGE_FIELD_GET_NODE_H

#include <ros/service_traits.h>


#include <webots_drive/field_get_nodeRequest.h>
#include <webots_drive/field_get_nodeResponse.h>


namespace webots_drive
{

struct field_get_node
{

typedef field_get_nodeRequest Request;
typedef field_get_nodeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_node
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::field_get_node > {
  static const char* value()
  {
    return "c17cafc0118b2cdcc4a632463f436156";
  }

  static const char* value(const ::webots_drive::field_get_node&) { return value(); }
};

template<>
struct DataType< ::webots_drive::field_get_node > {
  static const char* value()
  {
    return "webots_drive/field_get_node";
  }

  static const char* value(const ::webots_drive::field_get_node&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::field_get_nodeRequest> should match
// service_traits::MD5Sum< ::webots_drive::field_get_node >
template<>
struct MD5Sum< ::webots_drive::field_get_nodeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_get_node >::value();
  }
  static const char* value(const ::webots_drive::field_get_nodeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_get_nodeRequest> should match
// service_traits::DataType< ::webots_drive::field_get_node >
template<>
struct DataType< ::webots_drive::field_get_nodeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_get_node >::value();
  }
  static const char* value(const ::webots_drive::field_get_nodeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::field_get_nodeResponse> should match
// service_traits::MD5Sum< ::webots_drive::field_get_node >
template<>
struct MD5Sum< ::webots_drive::field_get_nodeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::field_get_node >::value();
  }
  static const char* value(const ::webots_drive::field_get_nodeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::field_get_nodeResponse> should match
// service_traits::DataType< ::webots_drive::field_get_node >
template<>
struct DataType< ::webots_drive::field_get_nodeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::field_get_node >::value();
  }
  static const char* value(const ::webots_drive::field_get_nodeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_FIELD_GET_NODE_H
