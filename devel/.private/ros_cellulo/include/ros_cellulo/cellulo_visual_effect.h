// Generated by gencpp from file ros_cellulo/cellulo_visual_effect.msg
// DO NOT EDIT!


#ifndef ROS_CELLULO_MESSAGE_CELLULO_VISUAL_EFFECT_H
#define ROS_CELLULO_MESSAGE_CELLULO_VISUAL_EFFECT_H


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
struct cellulo_visual_effect_
{
  typedef cellulo_visual_effect_<ContainerAllocator> Type;

  cellulo_visual_effect_()
    : effect(0)
    , red(0)
    , green(0)
    , blue(0)
    , value(0)  {
    }
  cellulo_visual_effect_(const ContainerAllocator& _alloc)
    : effect(0)
    , red(0)
    , green(0)
    , blue(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef uint8_t _effect_type;
  _effect_type effect;

   typedef uint8_t _red_type;
  _red_type red;

   typedef uint8_t _green_type;
  _green_type green;

   typedef uint8_t _blue_type;
  _blue_type blue;

   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> const> ConstPtr;

}; // struct cellulo_visual_effect_

typedef ::ros_cellulo::cellulo_visual_effect_<std::allocator<void> > cellulo_visual_effect;

typedef boost::shared_ptr< ::ros_cellulo::cellulo_visual_effect > cellulo_visual_effectPtr;
typedef boost::shared_ptr< ::ros_cellulo::cellulo_visual_effect const> cellulo_visual_effectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_cellulo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'ros_cellulo': ['/home/tprobotics/Documents/PROJECTS/catkin_ws/src/ros_cellulo/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b75a11a8484f25e95441feb7621b408f";
  }

  static const char* value(const ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb75a11a8484f25e9ULL;
  static const uint64_t static_value2 = 0x5441feb7621b408fULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_cellulo/cellulo_visual_effect";
  }

  static const char* value(const ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 effect \n\
uint8 red \n\
uint8 green \n\
uint8 blue \n\
uint8 value\n\
\n\
";
  }

  static const char* value(const ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.effect);
      stream.next(m.red);
      stream.next(m.green);
      stream.next(m.blue);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cellulo_visual_effect_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_cellulo::cellulo_visual_effect_<ContainerAllocator>& v)
  {
    s << indent << "effect: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.effect);
    s << indent << "red: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.red);
    s << indent << "green: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.green);
    s << indent << "blue: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.blue);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_CELLULO_MESSAGE_CELLULO_VISUAL_EFFECT_H
