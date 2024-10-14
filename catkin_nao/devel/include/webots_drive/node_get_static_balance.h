// Generated by gencpp from file webots_drive/node_get_static_balance.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_NODE_GET_STATIC_BALANCE_H
#define WEBOTS_DRIVE_MESSAGE_NODE_GET_STATIC_BALANCE_H

#include <ros/service_traits.h>


#include <webots_drive/node_get_static_balanceRequest.h>
#include <webots_drive/node_get_static_balanceResponse.h>


namespace webots_drive
{

struct node_get_static_balance
{

typedef node_get_static_balanceRequest Request;
typedef node_get_static_balanceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_get_static_balance
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::node_get_static_balance > {
  static const char* value()
  {
    return "1bb59681994e8cd9a01f91ec4bc81585";
  }

  static const char* value(const ::webots_drive::node_get_static_balance&) { return value(); }
};

template<>
struct DataType< ::webots_drive::node_get_static_balance > {
  static const char* value()
  {
    return "webots_drive/node_get_static_balance";
  }

  static const char* value(const ::webots_drive::node_get_static_balance&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::node_get_static_balanceRequest> should match
// service_traits::MD5Sum< ::webots_drive::node_get_static_balance >
template<>
struct MD5Sum< ::webots_drive::node_get_static_balanceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_get_static_balance >::value();
  }
  static const char* value(const ::webots_drive::node_get_static_balanceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_get_static_balanceRequest> should match
// service_traits::DataType< ::webots_drive::node_get_static_balance >
template<>
struct DataType< ::webots_drive::node_get_static_balanceRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_get_static_balance >::value();
  }
  static const char* value(const ::webots_drive::node_get_static_balanceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::node_get_static_balanceResponse> should match
// service_traits::MD5Sum< ::webots_drive::node_get_static_balance >
template<>
struct MD5Sum< ::webots_drive::node_get_static_balanceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_get_static_balance >::value();
  }
  static const char* value(const ::webots_drive::node_get_static_balanceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_get_static_balanceResponse> should match
// service_traits::DataType< ::webots_drive::node_get_static_balance >
template<>
struct DataType< ::webots_drive::node_get_static_balanceResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_get_static_balance >::value();
  }
  static const char* value(const ::webots_drive::node_get_static_balanceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_NODE_GET_STATIC_BALANCE_H
