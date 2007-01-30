#include "Server_Request_Interceptor.h"

#include "ace/Log_Msg.h"

ACE_RCSID (ORB_Shutdown,
           Server_Request_Interceptor,
           "$Id$")

Server_Request_Interceptor::Server_Request_Interceptor (bool & destroy_called)
  : destroy_called_ (destroy_called)
{
  this->destroy_called_ = false;  // Sanity check.
}

Server_Request_Interceptor::~Server_Request_Interceptor (void)
{
  // ORB::destroy() should have been called, which in turn should have
  // called the Interceptor::destroy() method in all registered
  // interceptors.
  ACE_ASSERT (this->destroy_called_ == true);
}

char *
Server_Request_Interceptor::name (void)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  return CORBA::string_dup ("Server_Request_Interceptor");
}

void
Server_Request_Interceptor::destroy (void)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  this->destroy_called_ = true;
}

void
Server_Request_Interceptor::receive_request_service_contexts (
    PortableInterceptor::ServerRequestInfo_ptr)
  ACE_THROW_SPEC ((CORBA::SystemException,
                   PortableInterceptor::ForwardRequest))
{
  // Interceptor::destroy() should not have been called yet.
  ACE_ASSERT (this->destroy_called_ == false);
}

void
Server_Request_Interceptor::receive_request (
    PortableInterceptor::ServerRequestInfo_ptr)
  ACE_THROW_SPEC ((CORBA::SystemException,
                   PortableInterceptor::ForwardRequest))

{
  // Interceptor::destroy() should not have been called yet.
  ACE_ASSERT (this->destroy_called_ == false);
}

void
Server_Request_Interceptor::send_reply (
    PortableInterceptor::ServerRequestInfo_ptr)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  // Interceptor::destroy() should not have been called yet.
  ACE_ASSERT (this->destroy_called_ == false);
}

void
Server_Request_Interceptor::send_exception (
    PortableInterceptor::ServerRequestInfo_ptr)
  ACE_THROW_SPEC ((CORBA::SystemException,
                   PortableInterceptor::ForwardRequest))
{
  // Interceptor::destroy() should not have been called yet.
  ACE_ASSERT (this->destroy_called_ == false);
}

void
Server_Request_Interceptor::send_other (
    PortableInterceptor::ServerRequestInfo_ptr)
  ACE_THROW_SPEC ((CORBA::SystemException,
                   PortableInterceptor::ForwardRequest))
{
  // Interceptor::destroy() should not have been called yet.
  ACE_ASSERT (this->destroy_called_ == false);
}
