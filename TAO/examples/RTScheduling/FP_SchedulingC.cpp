// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:351


#include "FP_SchedulingC.h"
#include "tao/Stub.h"
#include "tao/Invocation.h"
#include "tao/PortableInterceptor.h"

#if TAO_HAS_INTERCEPTORS == 1
#include "tao/RequestInfo_Util.h"
#include "tao/ClientRequestInfo_i.h"
#include "tao/ClientInterceptorAdapter.h"
#endif  /* TAO_HAS_INTERCEPTORS == 1 */


#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "FP_SchedulingC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:63

int FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_class_id = 0;

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::tao_SegmentSchedulingParameterPolicy_life::tao_duplicate (
    SegmentSchedulingParameterPolicy_ptr p
  )
{
  return SegmentSchedulingParameterPolicy::_duplicate (p);
}

void
FP_Scheduling::tao_SegmentSchedulingParameterPolicy_life::tao_release (
    SegmentSchedulingParameterPolicy_ptr p
  )
{
  CORBA::release (p);
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::tao_SegmentSchedulingParameterPolicy_life::tao_nil (
    void
  )
{
  return SegmentSchedulingParameterPolicy::_nil ();
}

CORBA::Boolean
FP_Scheduling::tao_SegmentSchedulingParameterPolicy_life::tao_marshal (
    SegmentSchedulingParameterPolicy_ptr p,
    TAO_OutputCDR &cdr
  )
{
  return p->marshal (cdr);
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::tao_SegmentSchedulingParameterPolicy_cast::tao_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return SegmentSchedulingParameterPolicy::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
FP_Scheduling::tao_SegmentSchedulingParameterPolicy_cast::tao_upcast (
    void *src
  )
{
  SegmentSchedulingParameterPolicy **tmp =
    ACE_static_cast (SegmentSchedulingParameterPolicy **, src);
  return *tmp;
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)
  template class
    TAO_Objref_Var_T<
        FP_Scheduling::SegmentSchedulingParameterPolicy,
        FP_Scheduling::tao_SegmentSchedulingParameterPolicy_life
      >;
  template class
    TAO_Objref_Out_T<
        FP_Scheduling::SegmentSchedulingParameterPolicy,
        FP_Scheduling::tao_SegmentSchedulingParameterPolicy_life
      >;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate \
    TAO_Objref_Var_T< \
        FP_Scheduling::SegmentSchedulingParameterPolicy, \
        FP_Scheduling::tao_SegmentSchedulingParameterPolicy_life \
      >
# pragma instantiate \
    TAO_Objref_Out_T< \
        FP_Scheduling::SegmentSchedulingParameterPolicy, \
        FP_Scheduling::tao_SegmentSchedulingParameterPolicy_life \
      >
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

// TAO_IDL - Generated from 
// be/be_visitor_interface/interface_cs.cpp:245

FP_Scheduling::SegmentSchedulingParameterPolicy::SegmentSchedulingParameterPolicy (void)
{}

FP_Scheduling::SegmentSchedulingParameterPolicy::~SegmentSchedulingParameterPolicy (void)
{}

void 
FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor (void *_tao_void_pointer)
{
  SegmentSchedulingParameterPolicy *tmp = ACE_static_cast (SegmentSchedulingParameterPolicy *, _tao_void_pointer);
  CORBA::release (tmp);
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::SegmentSchedulingParameterPolicy::_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL
  )
{
  return SegmentSchedulingParameterPolicy::_unchecked_narrow (obj ACE_ENV_ARG_PARAMETER);
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr 
FP_Scheduling::SegmentSchedulingParameterPolicy::_unchecked_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (obj))
    {
      return SegmentSchedulingParameterPolicy::_nil ();
    }
  
  return
      ACE_reinterpret_cast (
          SegmentSchedulingParameterPolicy_ptr,
          obj->_tao_QueryInterface (
              ACE_reinterpret_cast (
                  ptrdiff_t,
                  &SegmentSchedulingParameterPolicy::_tao_class_id
                )
            )
        );
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::SegmentSchedulingParameterPolicy::_duplicate (SegmentSchedulingParameterPolicy_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void *FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_QueryInterface (ptrdiff_t type)
{
  void *retv = 0;
  
  if (type == ACE_reinterpret_cast (
              ptrdiff_t,
              &ACE_NESTED_CLASS (::FP_Scheduling, SegmentSchedulingParameterPolicy)::_tao_class_id)
            )
    {
      retv = ACE_reinterpret_cast (void*, this);
    }
  else if (type == ACE_reinterpret_cast (
              ptrdiff_t,
              &::CORBA::Policy::_tao_class_id)
            )
    {
      retv =
        ACE_reinterpret_cast (
            void *,
            ACE_static_cast (
                CORBA::Policy_ptr,
                this
              )
          );
    }
  else if (type == ACE_reinterpret_cast (
               ptrdiff_t,
               &CORBA::Object::_tao_class_id)
             )
    {
      retv =
        ACE_reinterpret_cast (
            void *,
            ACE_static_cast (CORBA::Object_ptr, this)
          );
    }
  
  if (retv != 0)
    {
      this->_add_ref ();
    }
  
  return retv;
}

const char* FP_Scheduling::SegmentSchedulingParameterPolicy::_interface_repository_id (void) const
{
  return "IDL:FP_Scheduling/SegmentSchedulingParameterPolicy:1.0";
}

CORBA::Boolean
FP_Scheduling::SegmentSchedulingParameterPolicy::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_FP_Scheduling_SegmentSchedulingParameterPolicy[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  55,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x46505f53), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c696e), 
  ACE_NTOHL (0x672f5365), 
  ACE_NTOHL (0x676d656e), 
  ACE_NTOHL (0x74536368), 
  ACE_NTOHL (0x6564756c), 
  ACE_NTOHL (0x696e6750), 
  ACE_NTOHL (0x6172616d), 
  ACE_NTOHL (0x65746572), 
  ACE_NTOHL (0x506f6c69), 
  ACE_NTOHL (0x63793a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:FP_Scheduling/SegmentSchedulingParameterPolicy:1.0
    33,
  ACE_NTOHL (0x5365676d), 
  ACE_NTOHL (0x656e7453), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c696e), 
  ACE_NTOHL (0x67506172), 
  ACE_NTOHL (0x616d6574), 
  ACE_NTOHL (0x6572506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x0),  // name = SegmentSchedulingParameterPolicy
  };

static CORBA::TypeCode _tc_TAO_tc_FP_Scheduling_SegmentSchedulingParameterPolicy (
    CORBA::tk_objref,
    sizeof (_oc_FP_Scheduling_SegmentSchedulingParameterPolicy),
    (char *) &_oc_FP_Scheduling_SegmentSchedulingParameterPolicy,
    0,
    sizeof (FP_Scheduling::SegmentSchedulingParameterPolicy)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (FP_Scheduling)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_SegmentSchedulingParameterPolicy,
    &_tc_TAO_tc_FP_Scheduling_SegmentSchedulingParameterPolicy
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:63

int FP_Scheduling::FP_Scheduler::_tao_class_id = 0;

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::tao_FP_Scheduler_life::tao_duplicate (
    FP_Scheduler_ptr p
  )
{
  return FP_Scheduler::_duplicate (p);
}

void
FP_Scheduling::tao_FP_Scheduler_life::tao_release (
    FP_Scheduler_ptr p
  )
{
  CORBA::release (p);
}

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::tao_FP_Scheduler_life::tao_nil (
    void
  )
{
  return FP_Scheduler::_nil ();
}

CORBA::Boolean
FP_Scheduling::tao_FP_Scheduler_life::tao_marshal (
    FP_Scheduler_ptr p,
    TAO_OutputCDR &cdr
  )
{
  return p->marshal (cdr);
}

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::tao_FP_Scheduler_cast::tao_narrow (
    CORBA::Object *p
    ACE_ENV_ARG_DECL
  )
{
  return FP_Scheduler::_narrow (p ACE_ENV_ARG_PARAMETER);
}

CORBA::Object *
FP_Scheduling::tao_FP_Scheduler_cast::tao_upcast (
    void *src
  )
{
  FP_Scheduler **tmp =
    ACE_static_cast (FP_Scheduler **, src);
  return *tmp;
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)
  template class
    TAO_Objref_Var_T<
        FP_Scheduling::FP_Scheduler,
        FP_Scheduling::tao_FP_Scheduler_life
      >;
  template class
    TAO_Objref_Out_T<
        FP_Scheduling::FP_Scheduler,
        FP_Scheduling::tao_FP_Scheduler_life
      >;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate \
    TAO_Objref_Var_T< \
        FP_Scheduling::FP_Scheduler, \
        FP_Scheduling::tao_FP_Scheduler_life \
      >
# pragma instantiate \
    TAO_Objref_Out_T< \
        FP_Scheduling::FP_Scheduler, \
        FP_Scheduling::tao_FP_Scheduler_life \
      >
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

// TAO_IDL - Generated from 
// be/be_visitor_interface/interface_cs.cpp:245

FP_Scheduling::FP_Scheduler::FP_Scheduler (void)
{}

FP_Scheduling::FP_Scheduler::~FP_Scheduler (void)
{}

void 
FP_Scheduling::FP_Scheduler::_tao_any_destructor (void *_tao_void_pointer)
{
  FP_Scheduler *tmp = ACE_static_cast (FP_Scheduler *, _tao_void_pointer);
  CORBA::release (tmp);
}

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::FP_Scheduler::_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL
  )
{
  return FP_Scheduler::_unchecked_narrow (obj ACE_ENV_ARG_PARAMETER);
}

FP_Scheduling::FP_Scheduler_ptr 
FP_Scheduling::FP_Scheduler::_unchecked_narrow (
    CORBA::Object_ptr obj
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (obj))
    {
      return FP_Scheduler::_nil ();
    }
  
  return
      ACE_reinterpret_cast (
          FP_Scheduler_ptr,
          obj->_tao_QueryInterface (
              ACE_reinterpret_cast (
                  ptrdiff_t,
                  &FP_Scheduler::_tao_class_id
                )
            )
        );
}

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::FP_Scheduler::_duplicate (FP_Scheduler_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void *FP_Scheduling::FP_Scheduler::_tao_QueryInterface (ptrdiff_t type)
{
  void *retv = 0;
  
  if (type == ACE_reinterpret_cast (
              ptrdiff_t,
              &ACE_NESTED_CLASS (::FP_Scheduling, FP_Scheduler)::_tao_class_id)
            )
    {
      retv = ACE_reinterpret_cast (void*, this);
    }
  else if (type == ACE_reinterpret_cast (
              ptrdiff_t,
              &::RTScheduling::Scheduler::_tao_class_id)
            )
    {
      retv =
        ACE_reinterpret_cast (
            void *,
            ACE_static_cast (
                RTScheduling::Scheduler_ptr,
                this
              )
          );
    }
  else if (type == ACE_reinterpret_cast (
               ptrdiff_t,
               &CORBA::Object::_tao_class_id)
             )
    {
      retv =
        ACE_reinterpret_cast (
            void *,
            ACE_static_cast (CORBA::Object_ptr, this)
          );
    }
  
  if (retv != 0)
    {
      this->_add_ref ();
    }
  
  return retv;
}

const char* FP_Scheduling::FP_Scheduler::_interface_repository_id (void) const
{
  return "IDL:FP_Scheduling/FP_Scheduler:1.0";
}

CORBA::Boolean
FP_Scheduling::FP_Scheduler::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_FP_Scheduling_FP_Scheduler[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  35,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x46505f53), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c696e), 
  ACE_NTOHL (0x672f4650), 
  ACE_NTOHL (0x5f536368), 
  ACE_NTOHL (0x6564756c), 
  ACE_NTOHL (0x65723a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:FP_Scheduling/FP_Scheduler:1.0
    13,
  ACE_NTOHL (0x46505f53), 
  ACE_NTOHL (0x63686564), 
  ACE_NTOHL (0x756c6572), 
  ACE_NTOHL (0x0),  // name = FP_Scheduler
  };

static CORBA::TypeCode _tc_TAO_tc_FP_Scheduling_FP_Scheduler (
    CORBA::tk_objref,
    sizeof (_oc_FP_Scheduling_FP_Scheduler),
    (char *) &_oc_FP_Scheduling_FP_Scheduler,
    0,
    sizeof (FP_Scheduling::FP_Scheduler)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (FP_Scheduling)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_FP_Scheduler,
    &_tc_TAO_tc_FP_Scheduling_FP_Scheduler
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:50

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    FP_Scheduling::SegmentSchedulingParameterPolicy_ptr _tao_elem
  )
{
  FP_Scheduling::SegmentSchedulingParameterPolicy_ptr _tao_objptr =
    FP_Scheduling::SegmentSchedulingParameterPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    FP_Scheduling::SegmentSchedulingParameterPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>::insert (
      _tao_any,
      FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor,
      FP_Scheduling::_tc_SegmentSchedulingParameterPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    FP_Scheduling::SegmentSchedulingParameterPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>::extract (
        _tao_any,
        FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor,
        FP_Scheduling::_tc_SegmentSchedulingParameterPolicy,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO::Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate TAO::Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:50

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    FP_Scheduling::FP_Scheduler_ptr _tao_elem
  )
{
  FP_Scheduling::FP_Scheduler_ptr _tao_objptr =
    FP_Scheduling::FP_Scheduler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    FP_Scheduling::FP_Scheduler_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<FP_Scheduling::FP_Scheduler>::insert (
      _tao_any,
      FP_Scheduling::FP_Scheduler::_tao_any_destructor,
      FP_Scheduling::_tc_FP_Scheduler,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    FP_Scheduling::FP_Scheduler_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<FP_Scheduling::FP_Scheduler>::extract (
        _tao_any,
        FP_Scheduling::FP_Scheduler::_tao_any_destructor,
        FP_Scheduling::_tc_FP_Scheduler,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO::Any_Impl_T<FP_Scheduling::FP_Scheduler>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate TAO::Any_Impl_T<FP_Scheduling::FP_Scheduler>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

