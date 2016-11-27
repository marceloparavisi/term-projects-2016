// Generated by gencpp from file rosplan_knowledge_msgs/GetDomainTypeService.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINTYPESERVICE_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINTYPESERVICE_H

#include <ros/service_traits.h>


#include <rosplan_knowledge_msgs/GetDomainTypeServiceRequest.h>
#include <rosplan_knowledge_msgs/GetDomainTypeServiceResponse.h>


namespace rosplan_knowledge_msgs
{

struct GetDomainTypeService
{

typedef GetDomainTypeServiceRequest Request;
typedef GetDomainTypeServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetDomainTypeService
} // namespace rosplan_knowledge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeService > {
  static const char* value()
  {
    return "80aee506387f88339842e9a93044c959";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeService&) { return value(); }
};

template<>
struct DataType< ::rosplan_knowledge_msgs::GetDomainTypeService > {
  static const char* value()
  {
    return "rosplan_knowledge_msgs/GetDomainTypeService";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeService&) { return value(); }
};


// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeServiceRequest> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeService > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::GetDomainTypeServiceRequest> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::GetDomainTypeService > 
template<>
struct DataType< ::rosplan_knowledge_msgs::GetDomainTypeServiceRequest>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::GetDomainTypeService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse> should match 
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeService > 
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::GetDomainTypeService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse> should match 
// service_traits::DataType< ::rosplan_knowledge_msgs::GetDomainTypeService > 
template<>
struct DataType< ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::GetDomainTypeService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetDomainTypeServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETDOMAINTYPESERVICE_H
