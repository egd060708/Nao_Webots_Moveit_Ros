// Generated by gencpp from file webots_drive/node_add_force_or_torque.msg
// DO NOT EDIT!


#ifndef WEBOTS_DRIVE_MESSAGE_NODE_ADD_FORCE_OR_TORQUE_H
#define WEBOTS_DRIVE_MESSAGE_NODE_ADD_FORCE_OR_TORQUE_H

#include <ros/service_traits.h>


#include <webots_drive/node_add_force_or_torqueRequest.h>
#include <webots_drive/node_add_force_or_torqueResponse.h>


namespace webots_drive
{

struct node_add_force_or_torque
{

typedef node_add_force_or_torqueRequest Request;
typedef node_add_force_or_torqueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_add_force_or_torque
} // namespace webots_drive


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_drive::node_add_force_or_torque > {
  static const char* value()
  {
    return "c741c774685e3d317ac9b286bef0788d";
  }

  static const char* value(const ::webots_drive::node_add_force_or_torque&) { return value(); }
};

template<>
struct DataType< ::webots_drive::node_add_force_or_torque > {
  static const char* value()
  {
    return "webots_drive/node_add_force_or_torque";
  }

  static const char* value(const ::webots_drive::node_add_force_or_torque&) { return value(); }
};


// service_traits::MD5Sum< ::webots_drive::node_add_force_or_torqueRequest> should match
// service_traits::MD5Sum< ::webots_drive::node_add_force_or_torque >
template<>
struct MD5Sum< ::webots_drive::node_add_force_or_torqueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_add_force_or_torque >::value();
  }
  static const char* value(const ::webots_drive::node_add_force_or_torqueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_add_force_or_torqueRequest> should match
// service_traits::DataType< ::webots_drive::node_add_force_or_torque >
template<>
struct DataType< ::webots_drive::node_add_force_or_torqueRequest>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_add_force_or_torque >::value();
  }
  static const char* value(const ::webots_drive::node_add_force_or_torqueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_drive::node_add_force_or_torqueResponse> should match
// service_traits::MD5Sum< ::webots_drive::node_add_force_or_torque >
template<>
struct MD5Sum< ::webots_drive::node_add_force_or_torqueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_drive::node_add_force_or_torque >::value();
  }
  static const char* value(const ::webots_drive::node_add_force_or_torqueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_drive::node_add_force_or_torqueResponse> should match
// service_traits::DataType< ::webots_drive::node_add_force_or_torque >
template<>
struct DataType< ::webots_drive::node_add_force_or_torqueResponse>
{
  static const char* value()
  {
    return DataType< ::webots_drive::node_add_force_or_torque >::value();
  }
  static const char* value(const ::webots_drive::node_add_force_or_torqueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DRIVE_MESSAGE_NODE_ADD_FORCE_OR_TORQUE_H
