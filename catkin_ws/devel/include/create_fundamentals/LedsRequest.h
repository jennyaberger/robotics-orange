// Generated by gencpp from file create_fundamentals/LedsRequest.msg
// DO NOT EDIT!


#ifndef CREATE_FUNDAMENTALS_MESSAGE_LEDSREQUEST_H
#define CREATE_FUNDAMENTALS_MESSAGE_LEDSREQUEST_H


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
struct LedsRequest_
{
  typedef LedsRequest_<ContainerAllocator> Type;

  LedsRequest_()
    : advance(false)
    , play(false)
    , color(0)
    , intensity(0)  {
    }
  LedsRequest_(const ContainerAllocator& _alloc)
    : advance(false)
    , play(false)
    , color(0)
    , intensity(0)  {
  (void)_alloc;
    }



   typedef uint8_t _advance_type;
  _advance_type advance;

   typedef uint8_t _play_type;
  _play_type play;

   typedef uint8_t _color_type;
  _color_type color;

   typedef uint8_t _intensity_type;
  _intensity_type intensity;




  typedef boost::shared_ptr< ::create_fundamentals::LedsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::create_fundamentals::LedsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LedsRequest_

typedef ::create_fundamentals::LedsRequest_<std::allocator<void> > LedsRequest;

typedef boost::shared_ptr< ::create_fundamentals::LedsRequest > LedsRequestPtr;
typedef boost::shared_ptr< ::create_fundamentals::LedsRequest const> LedsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::create_fundamentals::LedsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::create_fundamentals::LedsRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::create_fundamentals::LedsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::create_fundamentals::LedsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_fundamentals::LedsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_fundamentals::LedsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_fundamentals::LedsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_fundamentals::LedsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::create_fundamentals::LedsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "df36903a5aadf6b7eb388fa7522028da";
  }

  static const char* value(const ::create_fundamentals::LedsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdf36903a5aadf6b7ULL;
  static const uint64_t static_value2 = 0xeb388fa7522028daULL;
};

template<class ContainerAllocator>
struct DataType< ::create_fundamentals::LedsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "create_fundamentals/LedsRequest";
  }

  static const char* value(const ::create_fundamentals::LedsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::create_fundamentals::LedsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool advance\n\
bool play\n\
uint8 color\n\
uint8 intensity\n\
";
  }

  static const char* value(const ::create_fundamentals::LedsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::create_fundamentals::LedsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.advance);
      stream.next(m.play);
      stream.next(m.color);
      stream.next(m.intensity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LedsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::create_fundamentals::LedsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::create_fundamentals::LedsRequest_<ContainerAllocator>& v)
  {
    s << indent << "advance: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.advance);
    s << indent << "play: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.play);
    s << indent << "color: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.color);
    s << indent << "intensity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.intensity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CREATE_FUNDAMENTALS_MESSAGE_LEDSREQUEST_H
