// Generated by gencpp from file ros_cellulo/cellulo_touch_key.msg
// DO NOT EDIT!


#ifndef ROS_CELLULO_MESSAGE_CELLULO_TOUCH_KEY_H
#define ROS_CELLULO_MESSAGE_CELLULO_TOUCH_KEY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_cellulo
{
template <class ContainerAllocator>
struct cellulo_touch_key_
{
  typedef cellulo_touch_key_<ContainerAllocator> Type;

  cellulo_touch_key_()
    : timestamp()
    , keysTouched()  {
    }
  cellulo_touch_key_(const ContainerAllocator& _alloc)
    : timestamp()
    , keysTouched(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _keysTouched_type;
  _keysTouched_type keysTouched;





  typedef boost::shared_ptr< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> const> ConstPtr;

}; // struct cellulo_touch_key_

typedef ::ros_cellulo::cellulo_touch_key_<std::allocator<void> > cellulo_touch_key;

typedef boost::shared_ptr< ::ros_cellulo::cellulo_touch_key > cellulo_touch_keyPtr;
typedef boost::shared_ptr< ::ros_cellulo::cellulo_touch_key const> cellulo_touch_keyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_cellulo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'ros_cellulo': ['/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38607ca2eb2d571f9c232f6d6f20d9ec";
  }

  static const char* value(const ::ros_cellulo::cellulo_touch_key_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38607ca2eb2d571fULL;
  static const uint64_t static_value2 = 0x9c232f6d6f20d9ecULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_cellulo/cellulo_touch_key";
  }

  static const char* value(const ::ros_cellulo::cellulo_touch_key_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time timestamp\n\
bool[] keysTouched\n\
\n\
";
  }

  static const char* value(const ::ros_cellulo::cellulo_touch_key_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.keysTouched);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cellulo_touch_key_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_cellulo::cellulo_touch_key_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_cellulo::cellulo_touch_key_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "keysTouched[]" << std::endl;
    for (size_t i = 0; i < v.keysTouched.size(); ++i)
    {
      s << indent << "  keysTouched[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.keysTouched[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_CELLULO_MESSAGE_CELLULO_TOUCH_KEY_H
