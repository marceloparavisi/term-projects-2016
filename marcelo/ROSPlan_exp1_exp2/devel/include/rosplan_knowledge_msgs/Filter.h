// Generated by gencpp from file rosplan_knowledge_msgs/Filter.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_FILTER_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_FILTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rosplan_knowledge_msgs/KnowledgeItem.h>

namespace rosplan_knowledge_msgs
{
template <class ContainerAllocator>
struct Filter_
{
  typedef Filter_<ContainerAllocator> Type;

  Filter_()
    : function(0)
    , knowledge_items()  {
    }
  Filter_(const ContainerAllocator& _alloc)
    : function(0)
    , knowledge_items(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _function_type;
  _function_type function;

   typedef std::vector< ::rosplan_knowledge_msgs::KnowledgeItem_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rosplan_knowledge_msgs::KnowledgeItem_<ContainerAllocator> >::other >  _knowledge_items_type;
  _knowledge_items_type knowledge_items;


    enum { CLEAR = 0u };
     enum { ADD = 1u };
     enum { REMOVE = 2u };
 

  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> const> ConstPtr;

}; // struct Filter_

typedef ::rosplan_knowledge_msgs::Filter_<std::allocator<void> > Filter;

typedef boost::shared_ptr< ::rosplan_knowledge_msgs::Filter > FilterPtr;
typedef boost::shared_ptr< ::rosplan_knowledge_msgs::Filter const> FilterConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ffaa5312f028f19664069486a077b599";
  }

  static const char* value(const ::rosplan_knowledge_msgs::Filter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xffaa5312f028f196ULL;
  static const uint64_t static_value2 = 0x64069486a077b599ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_knowledge_msgs/Filter";
  }

  static const char* value(const ::rosplan_knowledge_msgs::Filter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 CLEAR = 0\n\
uint8 ADD = 1\n\
uint8 REMOVE = 2\n\
\n\
uint8 function\n\
KnowledgeItem[] knowledge_items\n\
\n\
================================================================================\n\
MSG: rosplan_knowledge_msgs/KnowledgeItem\n\
# A knowledge item used to represent a piece of the world model in ROSPlan\n\
uint8 INSTANCE = 0\n\
uint8 FACT = 1\n\
uint8 FUNCTION = 2\n\
\n\
uint8 knowledge_type\n\
\n\
# instance knowledge_type\n\
string instance_type\n\
string instance_name\n\
\n\
# attribute knowledge_type\n\
string attribute_name\n\
diagnostic_msgs/KeyValue[] values\n\
\n\
# function value\n\
float64 function_value\n\
\n\
# negative of positive\n\
bool is_negative\n\
================================================================================\n\
MSG: diagnostic_msgs/KeyValue\n\
string key # what to label this value when viewing\n\
string value # a value to track over time\n\
";
  }

  static const char* value(const ::rosplan_knowledge_msgs::Filter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.function);
      stream.next(m.knowledge_items);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Filter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_knowledge_msgs::Filter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_knowledge_msgs::Filter_<ContainerAllocator>& v)
  {
    s << indent << "function: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.function);
    s << indent << "knowledge_items[]" << std::endl;
    for (size_t i = 0; i < v.knowledge_items.size(); ++i)
    {
      s << indent << "  knowledge_items[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rosplan_knowledge_msgs::KnowledgeItem_<ContainerAllocator> >::stream(s, indent + "    ", v.knowledge_items[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_FILTER_H
