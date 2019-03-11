// Generated by gencpp from file ros_cellulo_swarm/cellulo_pose_velocity.msg
// DO NOT EDIT!


#ifndef ROS_CELLULO_SWARM_MESSAGE_CELLULO_POSE_VELOCITY_H
#define ROS_CELLULO_SWARM_MESSAGE_CELLULO_POSE_VELOCITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace ros_cellulo_swarm
{
template <class ContainerAllocator>
struct cellulo_pose_velocity_
{
  typedef cellulo_pose_velocity_<ContainerAllocator> Type;

  cellulo_pose_velocity_()
    : Position()
    , Velocity()
    , xEnabled(false)
    , yEnabled(false)
    , thetaEnabled(false)  {
    }
  cellulo_pose_velocity_(const ContainerAllocator& _alloc)
    : Position(_alloc)
    , Velocity(_alloc)
    , xEnabled(false)
    , yEnabled(false)
    , thetaEnabled(false)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _Position_type;
  _Position_type Position;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _Velocity_type;
  _Velocity_type Velocity;

   typedef uint8_t _xEnabled_type;
  _xEnabled_type xEnabled;

   typedef uint8_t _yEnabled_type;
  _yEnabled_type yEnabled;

   typedef uint8_t _thetaEnabled_type;
  _thetaEnabled_type thetaEnabled;





  typedef boost::shared_ptr< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> const> ConstPtr;

}; // struct cellulo_pose_velocity_

typedef ::ros_cellulo_swarm::cellulo_pose_velocity_<std::allocator<void> > cellulo_pose_velocity;

typedef boost::shared_ptr< ::ros_cellulo_swarm::cellulo_pose_velocity > cellulo_pose_velocityPtr;
typedef boost::shared_ptr< ::ros_cellulo_swarm::cellulo_pose_velocity const> cellulo_pose_velocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_cellulo_swarm

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'ros_cellulo_swarm': ['/home/tprobotics/Documents/PROJECTS/catkin_ws/src/cellulo_swarm_practical_base/ros_cellulo_swarm/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "018249c62debdcf00e847db2f2416aed";
  }

  static const char* value(const ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x018249c62debdcf0ULL;
  static const uint64_t static_value2 = 0x0e847db2f2416aedULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_cellulo_swarm/cellulo_pose_velocity";
  }

  static const char* value(const ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point Position \n\
geometry_msgs/Point Velocity \n\
bool xEnabled\n\
bool yEnabled \n\
bool thetaEnabled \n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Position);
      stream.next(m.Velocity);
      stream.next(m.xEnabled);
      stream.next(m.yEnabled);
      stream.next(m.thetaEnabled);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cellulo_pose_velocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_cellulo_swarm::cellulo_pose_velocity_<ContainerAllocator>& v)
  {
    s << indent << "Position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.Position);
    s << indent << "Velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.Velocity);
    s << indent << "xEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.xEnabled);
    s << indent << "yEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.yEnabled);
    s << indent << "thetaEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.thetaEnabled);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_CELLULO_SWARM_MESSAGE_CELLULO_POSE_VELOCITY_H
