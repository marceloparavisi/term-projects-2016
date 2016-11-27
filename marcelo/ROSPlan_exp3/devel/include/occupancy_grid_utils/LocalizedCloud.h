// Generated by gencpp from file occupancy_grid_utils/LocalizedCloud.msg
// DO NOT EDIT!


#ifndef OCCUPANCY_GRID_UTILS_MESSAGE_LOCALIZEDCLOUD_H
#define OCCUPANCY_GRID_UTILS_MESSAGE_LOCALIZEDCLOUD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <sensor_msgs/PointCloud.h>

namespace occupancy_grid_utils
{
template <class ContainerAllocator>
struct LocalizedCloud_
{
  typedef LocalizedCloud_<ContainerAllocator> Type;

  LocalizedCloud_()
    : header()
    , sensor_pose()
    , cloud()  {
    }
  LocalizedCloud_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sensor_pose(_alloc)
    , cloud(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _sensor_pose_type;
  _sensor_pose_type sensor_pose;

   typedef  ::sensor_msgs::PointCloud_<ContainerAllocator>  _cloud_type;
  _cloud_type cloud;




  typedef boost::shared_ptr< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> const> ConstPtr;

}; // struct LocalizedCloud_

typedef ::occupancy_grid_utils::LocalizedCloud_<std::allocator<void> > LocalizedCloud;

typedef boost::shared_ptr< ::occupancy_grid_utils::LocalizedCloud > LocalizedCloudPtr;
typedef boost::shared_ptr< ::occupancy_grid_utils::LocalizedCloud const> LocalizedCloudConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace occupancy_grid_utils

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'occupancy_grid_utils': ['/home/paravisi/ROSPlan/src/occupancy_grid_utils/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e868d77f7e7116b7eb215e43caa0ea5d";
  }

  static const char* value(const ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe868d77f7e7116b7ULL;
  static const uint64_t static_value2 = 0xeb215e43caa0ea5dULL;
};

template<class ContainerAllocator>
struct DataType< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >
{
  static const char* value()
  {
    return "occupancy_grid_utils/LocalizedCloud";
  }

  static const char* value(const ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Represents a point cloud (in a sensor frame) together with the pose of the sensor in\n\
# reference frame header.frame_id\n\
# The header of the cloud is ignored\n\
Header header\n\
geometry_msgs/Pose sensor_pose\n\
sensor_msgs/PointCloud cloud\n\
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
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
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
MSG: sensor_msgs/PointCloud\n\
# This message holds a collection of 3d points, plus optional additional\n\
# information about each point.\n\
\n\
# Time of sensor data acquisition, coordinate frame ID.\n\
Header header\n\
\n\
# Array of 3d points. Each Point32 should be interpreted as a 3d point\n\
# in the frame given in the header.\n\
geometry_msgs/Point32[] points\n\
\n\
# Each channel should have the same number of elements as points array,\n\
# and the data in each channel should correspond 1:1 with each point.\n\
# Channel names in common practice are listed in ChannelFloat32.msg.\n\
ChannelFloat32[] channels\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: sensor_msgs/ChannelFloat32\n\
# This message is used by the PointCloud message to hold optional data\n\
# associated with each point in the cloud. The length of the values\n\
# array should be the same as the length of the points array in the\n\
# PointCloud, and each value should be associated with the corresponding\n\
# point.\n\
\n\
# Channel names in existing practice include:\n\
#   \"u\", \"v\" - row and column (respectively) in the left stereo image.\n\
#              This is opposite to usual conventions but remains for\n\
#              historical reasons. The newer PointCloud2 message has no\n\
#              such problem.\n\
#   \"rgb\" - For point clouds produced by color stereo cameras. uint8\n\
#           (R,G,B) values packed into the least significant 24 bits,\n\
#           in order.\n\
#   \"intensity\" - laser or pixel intensity.\n\
#   \"distance\"\n\
\n\
# The channel name should give semantics of the channel (e.g.\n\
# \"intensity\" instead of \"value\").\n\
string name\n\
\n\
# The values array should be 1-1 with the elements of the associated\n\
# PointCloud.\n\
float32[] values\n\
";
  }

  static const char* value(const ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sensor_pose);
      stream.next(m.cloud);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocalizedCloud_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::occupancy_grid_utils::LocalizedCloud_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sensor_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.sensor_pose);
    s << indent << "cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCCUPANCY_GRID_UTILS_MESSAGE_LOCALIZEDCLOUD_H
