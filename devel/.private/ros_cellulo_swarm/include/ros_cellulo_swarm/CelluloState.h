// Generated by gencpp from file ros_cellulo_swarm/CelluloState.msg
// DO NOT EDIT!


#ifndef ROS_CELLULO_SWARM_MESSAGE_CELLULOSTATE_H
#define ROS_CELLULO_SWARM_MESSAGE_CELLULOSTATE_H

#include <ros/service_traits.h>


#include <ros_cellulo_swarm/CelluloStateRequest.h>
#include <ros_cellulo_swarm/CelluloStateResponse.h>


namespace ros_cellulo_swarm
{

struct CelluloState
{

typedef CelluloStateRequest Request;
typedef CelluloStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CelluloState
} // namespace ros_cellulo_swarm


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_cellulo_swarm::CelluloState > {
  static const char* value()
  {
    return "8bdab235f1da303d0e5f6b768207e8cb";
  }

  static const char* value(const ::ros_cellulo_swarm::CelluloState&) { return value(); }
};

template<>
struct DataType< ::ros_cellulo_swarm::CelluloState > {
  static const char* value()
  {
    return "ros_cellulo_swarm/CelluloState";
  }

  static const char* value(const ::ros_cellulo_swarm::CelluloState&) { return value(); }
};


// service_traits::MD5Sum< ::ros_cellulo_swarm::CelluloStateRequest> should match 
// service_traits::MD5Sum< ::ros_cellulo_swarm::CelluloState > 
template<>
struct MD5Sum< ::ros_cellulo_swarm::CelluloStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_cellulo_swarm::CelluloState >::value();
  }
  static const char* value(const ::ros_cellulo_swarm::CelluloStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_cellulo_swarm::CelluloStateRequest> should match 
// service_traits::DataType< ::ros_cellulo_swarm::CelluloState > 
template<>
struct DataType< ::ros_cellulo_swarm::CelluloStateRequest>
{
  static const char* value()
  {
    return DataType< ::ros_cellulo_swarm::CelluloState >::value();
  }
  static const char* value(const ::ros_cellulo_swarm::CelluloStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_cellulo_swarm::CelluloStateResponse> should match 
// service_traits::MD5Sum< ::ros_cellulo_swarm::CelluloState > 
template<>
struct MD5Sum< ::ros_cellulo_swarm::CelluloStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_cellulo_swarm::CelluloState >::value();
  }
  static const char* value(const ::ros_cellulo_swarm::CelluloStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_cellulo_swarm::CelluloStateResponse> should match 
// service_traits::DataType< ::ros_cellulo_swarm::CelluloState > 
template<>
struct DataType< ::ros_cellulo_swarm::CelluloStateResponse>
{
  static const char* value()
  {
    return DataType< ::ros_cellulo_swarm::CelluloState >::value();
  }
  static const char* value(const ::ros_cellulo_swarm::CelluloStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_CELLULO_SWARM_MESSAGE_CELLULOSTATE_H