// Generated by gencpp from file frogs_msgs/robot_armResult.msg
// DO NOT EDIT!


#ifndef FROGS_MSGS_MESSAGE_ROBOT_ARMRESULT_H
#define FROGS_MSGS_MESSAGE_ROBOT_ARMRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace frogs_msgs
{
template <class ContainerAllocator>
struct robot_armResult_
{
  typedef robot_armResult_<ContainerAllocator> Type;

  robot_armResult_()
    : count(0)  {
    }
  robot_armResult_(const ContainerAllocator& _alloc)
    : count(0)  {
  (void)_alloc;
    }



   typedef int64_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::frogs_msgs::robot_armResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::frogs_msgs::robot_armResult_<ContainerAllocator> const> ConstPtr;

}; // struct robot_armResult_

typedef ::frogs_msgs::robot_armResult_<std::allocator<void> > robot_armResult;

typedef boost::shared_ptr< ::frogs_msgs::robot_armResult > robot_armResultPtr;
typedef boost::shared_ptr< ::frogs_msgs::robot_armResult const> robot_armResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::frogs_msgs::robot_armResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::frogs_msgs::robot_armResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace frogs_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'frogs_msgs': ['/home/ros/catkin_ws/devel/share/frogs_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::frogs_msgs::robot_armResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::frogs_msgs::robot_armResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::frogs_msgs::robot_armResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::frogs_msgs::robot_armResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::frogs_msgs::robot_armResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::frogs_msgs::robot_armResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::frogs_msgs::robot_armResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8dbac33d2eb67bfeeedd516d65fec846";
  }

  static const char* value(const ::frogs_msgs::robot_armResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8dbac33d2eb67bfeULL;
  static const uint64_t static_value2 = 0xeedd516d65fec846ULL;
};

template<class ContainerAllocator>
struct DataType< ::frogs_msgs::robot_armResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "frogs_msgs/robot_armResult";
  }

  static const char* value(const ::frogs_msgs::robot_armResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::frogs_msgs::robot_armResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result\n\
int64 count\n\
";
  }

  static const char* value(const ::frogs_msgs::robot_armResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::frogs_msgs::robot_armResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_armResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::frogs_msgs::robot_armResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::frogs_msgs::robot_armResult_<ContainerAllocator>& v)
  {
    s << indent << "count: ";
    Printer<int64_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FROGS_MSGS_MESSAGE_ROBOT_ARMRESULT_H
