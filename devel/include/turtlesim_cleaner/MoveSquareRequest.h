// Generated by gencpp from file turtlesim_cleaner/MoveSquareRequest.msg
// DO NOT EDIT!


#ifndef TURTLESIM_CLEANER_MESSAGE_MOVESQUAREREQUEST_H
#define TURTLESIM_CLEANER_MESSAGE_MOVESQUAREREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim_cleaner
{
template <class ContainerAllocator>
struct MoveSquareRequest_
{
  typedef MoveSquareRequest_<ContainerAllocator> Type;

  MoveSquareRequest_()
    : s(0.0)
    , r(0)  {
    }
  MoveSquareRequest_(const ContainerAllocator& _alloc)
    : s(0.0)
    , r(0)  {
  (void)_alloc;
    }



   typedef float _s_type;
  _s_type s;

   typedef int32_t _r_type;
  _r_type r;





  typedef boost::shared_ptr< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveSquareRequest_

typedef ::turtlesim_cleaner::MoveSquareRequest_<std::allocator<void> > MoveSquareRequest;

typedef boost::shared_ptr< ::turtlesim_cleaner::MoveSquareRequest > MoveSquareRequestPtr;
typedef boost::shared_ptr< ::turtlesim_cleaner::MoveSquareRequest const> MoveSquareRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlesim_cleaner

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af0b48fe9187ad9b8874f8bb3dcfb81d";
  }

  static const char* value(const ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf0b48fe9187ad9bULL;
  static const uint64_t static_value2 = 0x8874f8bb3dcfb81dULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim_cleaner/MoveSquareRequest";
  }

  static const char* value(const ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 s\n\
int32 r\n\
";
  }

  static const char* value(const ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.s);
      stream.next(m.r);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveSquareRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlesim_cleaner::MoveSquareRequest_<ContainerAllocator>& v)
  {
    s << indent << "s: ";
    Printer<float>::stream(s, indent + "  ", v.s);
    s << indent << "r: ";
    Printer<int32_t>::stream(s, indent + "  ", v.r);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_CLEANER_MESSAGE_MOVESQUAREREQUEST_H
