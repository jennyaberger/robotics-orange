// Generated by gencpp from file create_fundamentals/DiffDriveRequest.msg
// DO NOT EDIT!


#ifndef CREATE_FUNDAMENTALS_MESSAGE_DIFFDRIVEREQUEST_H
#define CREATE_FUNDAMENTALS_MESSAGE_DIFFDRIVEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace create_fundamentals
{
template <class ContainerAllocator>
struct DiffDriveRequest_
{
  typedef DiffDriveRequest_<ContainerAllocator> Type;

  DiffDriveRequest_()
    : left(0.0)
    , right(0.0)  {
    }
  DiffDriveRequest_(const ContainerAllocator& _alloc)
    : left(0.0)
    , right(0.0)  {
  (void)_alloc;
    }



   typedef float _left_type;
  _left_type left;

   typedef float _right_type;
  _right_type right;




  typedef boost::shared_ptr< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DiffDriveRequest_

typedef ::create_fundamentals::DiffDriveRequest_<std::allocator<void> > DiffDriveRequest;

typedef boost::shared_ptr< ::create_fundamentals::DiffDriveRequest > DiffDriveRequestPtr;
typedef boost::shared_ptr< ::create_fundamentals::DiffDriveRequest const> DiffDriveRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace create_fundamentals

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'create_fundamentals': ['/home/orange/catkin_ws/src/create_fundamentals/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a927990ab5d5c3d628e2d52b8533e52";
  }

  static const char* value(const ::create_fundamentals::DiffDriveRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a927990ab5d5c3dULL;
  static const uint64_t static_value2 = 0x628e2d52b8533e52ULL;
};

template<class ContainerAllocator>
struct DataType< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "create_fundamentals/DiffDriveRequest";
  }

  static const char* value(const ::create_fundamentals::DiffDriveRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 left\n\
float32 right\n\
";
  }

  static const char* value(const ::create_fundamentals::DiffDriveRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left);
      stream.next(m.right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct DiffDriveRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::create_fundamentals::DiffDriveRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::create_fundamentals::DiffDriveRequest_<ContainerAllocator>& v)
  {
    s << indent << "left: ";
    Printer<float>::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    Printer<float>::stream(s, indent + "  ", v.right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CREATE_FUNDAMENTALS_MESSAGE_DIFFDRIVEREQUEST_H
