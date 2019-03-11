// Generated by gencpp from file ros_cellulo_swarm/CelluloStateResponse.msg
// DO NOT EDIT!


#ifndef ROS_CELLULO_SWARM_MESSAGE_CELLULOSTATERESPONSE_H
#define ROS_CELLULO_SWARM_MESSAGE_CELLULOSTATERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/TransformStamped.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float64.h>

namespace ros_cellulo_swarm
{
template <class ContainerAllocator>
struct CelluloStateResponse_
{
  typedef CelluloStateResponse_<ContainerAllocator> Type;

  CelluloStateResponse_()
    : Position()
    , vy()
    , vx()
    , w()
    , kidnapped(false)
    , keysTouched()
    , keysLongTouched()  {
    }
  CelluloStateResponse_(const ContainerAllocator& _alloc)
    : Position(_alloc)
    , vy(_alloc)
    , vx(_alloc)
    , w(_alloc)
    , kidnapped(false)
    , keysTouched(_alloc)
    , keysLongTouched(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::TransformStamped_<ContainerAllocator>  _Position_type;
  _Position_type Position;

   typedef  ::std_msgs::Float64_<ContainerAllocator>  _vy_type;
  _vy_type vy;

   typedef  ::std_msgs::Float64_<ContainerAllocator>  _vx_type;
  _vx_type vx;

   typedef  ::std_msgs::Float64_<ContainerAllocator>  _w_type;
  _w_type w;

   typedef uint8_t _kidnapped_type;
  _kidnapped_type kidnapped;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _keysTouched_type;
  _keysTouched_type keysTouched;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _keysLongTouched_type;
  _keysLongTouched_type keysLongTouched;





  typedef boost::shared_ptr< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CelluloStateResponse_

typedef ::ros_cellulo_swarm::CelluloStateResponse_<std::allocator<void> > CelluloStateResponse;

typedef boost::shared_ptr< ::ros_cellulo_swarm::CelluloStateResponse > CelluloStateResponsePtr;
typedef boost::shared_ptr< ::ros_cellulo_swarm::CelluloStateResponse const> CelluloStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_cellulo_swarm

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'ros_cellulo_swarm': ['/home/tprobotics/Documents/PROJECTS/catkin_ws/src/cellulo_swarm_practical_base/ros_cellulo_swarm/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8bdab235f1da303d0e5f6b768207e8cb";
  }

  static const char* value(const ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8bdab235f1da303dULL;
  static const uint64_t static_value2 = 0x0e5f6b768207e8cbULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_cellulo_swarm/CelluloStateResponse";
  }

  static const char* value(const ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/TransformStamped Position\n\
std_msgs/Float64 vy\n\
std_msgs/Float64 vx\n\
std_msgs/Float64 w\n\
bool kidnapped\n\
bool[] keysTouched\n\
bool[] keysLongTouched\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TransformStamped\n\
# This expresses a transform from coordinate frame header.frame_id\n\
# to the coordinate frame child_frame_id\n\
#\n\
# This message is mostly used by the \n\
# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n\
# See its documentation for more information.\n\
\n\
Header header\n\
string child_frame_id # the frame id of the child frame\n\
Transform transform\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: std_msgs/Float64\n\
float64 data\n\
";
  }

  static const char* value(const ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Position);
      stream.next(m.vy);
      stream.next(m.vx);
      stream.next(m.w);
      stream.next(m.kidnapped);
      stream.next(m.keysTouched);
      stream.next(m.keysLongTouched);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CelluloStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_cellulo_swarm::CelluloStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "Position: ";
    s << std::endl;
    Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.Position);
    s << indent << "vy: ";
    s << std::endl;
    Printer< ::std_msgs::Float64_<ContainerAllocator> >::stream(s, indent + "  ", v.vy);
    s << indent << "vx: ";
    s << std::endl;
    Printer< ::std_msgs::Float64_<ContainerAllocator> >::stream(s, indent + "  ", v.vx);
    s << indent << "w: ";
    s << std::endl;
    Printer< ::std_msgs::Float64_<ContainerAllocator> >::stream(s, indent + "  ", v.w);
    s << indent << "kidnapped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.kidnapped);
    s << indent << "keysTouched[]" << std::endl;
    for (size_t i = 0; i < v.keysTouched.size(); ++i)
    {
      s << indent << "  keysTouched[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.keysTouched[i]);
    }
    s << indent << "keysLongTouched[]" << std::endl;
    for (size_t i = 0; i < v.keysLongTouched.size(); ++i)
    {
      s << indent << "  keysLongTouched[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.keysLongTouched[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_CELLULO_SWARM_MESSAGE_CELLULOSTATERESPONSE_H