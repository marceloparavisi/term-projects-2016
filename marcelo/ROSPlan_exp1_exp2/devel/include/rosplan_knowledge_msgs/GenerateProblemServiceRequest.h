// Generated by gencpp from file rosplan_knowledge_msgs/GenerateProblemServiceRequest.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GENERATEPROBLEMSERVICEREQUEST_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GENERATEPROBLEMSERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_knowledge_msgs
{
template <class ContainerAllocator>
struct GenerateProblemServiceRequest_
{
  typedef GenerateProblemServiceRequest_<ContainerAllocator> Type;

  GenerateProblemServiceRequest_()
    : problem_path()
    , contingent(false)  {
    }
  GenerateProblemServiceRequest_(const ContainerAllocator& _alloc)
    : problem_path(_alloc)
    , contingent(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _problem_path_type;
  _problem_path_type problem_path;

   typedef uint8_t _contingent_type;
  _contingent_type contingent;




  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GenerateProblemServiceRequest_

typedef ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<std::allocator<void> > GenerateProblemServiceRequest;

typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest > GenerateProblemServiceRequestPtr;
typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest const> GenerateProblemServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosplan_knowledge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg'], 'rosplan_knowledge_msgs': ['/home/paravisi/ROSPlan/src/rosplan/rosplan_knowledge_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dae78a0248c75ae0669c86950a3f99cf";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdae78a0248c75ae0ULL;
  static const uint64_t static_value2 = 0x669c86950a3f99cfULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_knowledge_msgs/GenerateProblemServiceRequest";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string problem_path\n\
bool contingent\n\
";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.problem_path);
      stream.next(m.contingent);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GenerateProblemServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_knowledge_msgs::GenerateProblemServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "problem_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.problem_path);
    s << indent << "contingent: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.contingent);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GENERATEPROBLEMSERVICEREQUEST_H
