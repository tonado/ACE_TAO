// $Id$
//
// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "sciop_endpoints.h"

#if !defined (__ACE_INLINE__)
#include "sciop_endpoints.i"
#endif /* !defined INLINE */

static const CORBA::Long _oc_TAO_SCIOP_Endpoint_Info[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  31, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f5f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x5f456e64), ACE_NTOHL (0x706f696e), ACE_NTOHL (0x745f496e), ACE_NTOHL (0x666f3a31), ACE_NTOHL (0x2e300000),  // repository ID = IDL:TAO_SCIOP_Endpoint_Info:1.0
  23, ACE_NTOHL (0x54414f5f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x5f456e64), ACE_NTOHL (0x706f696e), ACE_NTOHL (0x745f496e), ACE_NTOHL (0x666f0000),  // name = TAO_SCIOP_Endpoint_Info
  3, // member count
  5, ACE_NTOHL (0x686f7374), ACE_NTOHL (0x0),  // name = host
  CORBA::tk_string,
  0U, // string length
  5, ACE_NTOHL (0x706f7274), ACE_NTOHL (0x0),  // name = port
  CORBA::tk_short,

  9, ACE_NTOHL (0x7072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x0),  // name = priority
  CORBA::tk_short,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_SCIOP_Endpoint_Info (CORBA::tk_struct, sizeof (_oc_TAO_SCIOP_Endpoint_Info), (char *) &_oc_TAO_SCIOP_Endpoint_Info, 0, sizeof (TAO_SCIOP_Endpoint_Info));
CORBA::TypeCode_ptr _tc_TAO_SCIOP_Endpoint_Info = &_tc_TAO_tc_TAO_SCIOP_Endpoint_Info;

void TAO_SCIOP_Endpoint_Info::_tao_any_destructor (void *x)
{
  TAO_SCIOP_Endpoint_Info *tmp = ACE_static_cast (TAO_SCIOP_Endpoint_Info*,x);
  delete tmp;
}


#if !defined (TAO_USE_SEQUENCE_TEMPLATES)

#if !defined (__TAO_UNBOUNDED_SEQUENCE_TAO_SCIOPENDPOINTSEQUENCE_CS_)
#define __TAO_UNBOUNDED_SEQUENCE_TAO_SCIOPENDPOINTSEQUENCE_CS_

  void
  _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence::_allocate_buffer (CORBA::ULong length)
  {
    TAO_SCIOP_Endpoint_Info* tmp = 0;
    tmp = _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence::allocbuf (length);

    if (this->buffer_ != 0)
    {
      TAO_SCIOP_Endpoint_Info *old = ACE_reinterpret_cast (TAO_SCIOP_Endpoint_Info *,this->buffer_);

      for (CORBA::ULong i = 0; i < this->length_; ++i)
        tmp[i] = old[i];

      if (this->release_)
        _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence::freebuf (old);

    }
    this->buffer_ = tmp;
  }

  void
  _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence::_deallocate_buffer (void)
  {
    if (this->buffer_ == 0 || this->release_ == 0)
      return;

    TAO_SCIOP_Endpoint_Info *tmp = ACE_reinterpret_cast (TAO_SCIOP_Endpoint_Info *,this->buffer_);

    _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence::freebuf (tmp);
    this->buffer_ = 0;
  }

  _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence::~_TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence (void) // Dtor.
  {
    this->_deallocate_buffer ();
  }


#endif /* end #if !defined */


#endif /* !TAO_USE_SEQUENCE_TEMPLATES */

#if !defined (_TAO_SCIOPENDPOINTSEQUENCE_CS_)
#define _TAO_SCIOPENDPOINTSEQUENCE_CS_

// *************************************************************
// TAO_SCIOPEndpointSequence
// *************************************************************

TAO_SCIOPEndpointSequence::TAO_SCIOPEndpointSequence (void)
{}
TAO_SCIOPEndpointSequence::TAO_SCIOPEndpointSequence (CORBA::ULong max) // uses max size
  :
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Sequence<TAO_SCIOP_Endpoint_Info>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */
 (max)
{}
TAO_SCIOPEndpointSequence::TAO_SCIOPEndpointSequence (CORBA::ULong max, CORBA::ULong length, TAO_SCIOP_Endpoint_Info *buffer, CORBA::Boolean release)
  :
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Sequence<TAO_SCIOP_Endpoint_Info>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */
 (max, length, buffer, release)
{}
TAO_SCIOPEndpointSequence::TAO_SCIOPEndpointSequence (const TAO_SCIOPEndpointSequence &seq) // copy ctor
  :
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Sequence_TAO_SCIOPEndpointSequence
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Sequence<TAO_SCIOP_Endpoint_Info>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */
 (seq)
{}
TAO_SCIOPEndpointSequence::~TAO_SCIOPEndpointSequence (void) // dtor
{}
void TAO_SCIOPEndpointSequence::_tao_any_destructor (void *x)
{
  TAO_SCIOPEndpointSequence *tmp = ACE_static_cast (TAO_SCIOPEndpointSequence*,x);
  delete tmp;
}


#endif /* end #if !defined */

static const CORBA::Long _oc_TAO_SCIOPEndpointSequence[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  33, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f5f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x456e6470), ACE_NTOHL (0x6f696e74), ACE_NTOHL (0x53657175), ACE_NTOHL (0x656e6365), ACE_NTOHL (0x3a312e30), ACE_NTOHL (0x0),  // repository ID = IDL:TAO_SCIOPEndpointSequence:1.0
  25, ACE_NTOHL (0x54414f5f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x456e6470), ACE_NTOHL (0x6f696e74), ACE_NTOHL (0x53657175), ACE_NTOHL (0x656e6365), ACE_NTOHL (0x0),  // name = TAO_SCIOPEndpointSequence
  CORBA::tk_sequence, // typecode kind
  144, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_struct, // typecode kind
    128, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      31, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f5f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x5f456e64), ACE_NTOHL (0x706f696e), ACE_NTOHL (0x745f496e), ACE_NTOHL (0x666f3a31), ACE_NTOHL (0x2e300000),  // repository ID = IDL:TAO_SCIOP_Endpoint_Info:1.0
      23, ACE_NTOHL (0x54414f5f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x5f456e64), ACE_NTOHL (0x706f696e), ACE_NTOHL (0x745f496e), ACE_NTOHL (0x666f0000),  // name = TAO_SCIOP_Endpoint_Info
      3, // member count
      5, ACE_NTOHL (0x686f7374), ACE_NTOHL (0x0),  // name = host
      CORBA::tk_string,
      0U, // string length
      5, ACE_NTOHL (0x706f7274), ACE_NTOHL (0x0),  // name = port
      CORBA::tk_short,

      9, ACE_NTOHL (0x7072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x0),  // name = priority
      CORBA::tk_short,


    0U,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_SCIOPEndpointSequence (CORBA::tk_alias, sizeof (_oc_TAO_SCIOPEndpointSequence), (char *) &_oc_TAO_SCIOPEndpointSequence, 0, sizeof (TAO_SCIOPEndpointSequence));
CORBA::TypeCode_ptr _tc_TAO_SCIOPEndpointSequence = &_tc_TAO_tc_TAO_SCIOPEndpointSequence;


CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO_SCIOPEndpointSequence &_tao_sequence
  )
{
  if (strm << _tao_sequence.length ())
  {
    // encode all elements
    CORBA::Boolean _tao_marshal_flag = 1;
    for (CORBA::ULong i = 0; i < _tao_sequence.length () && _tao_marshal_flag; i++)
    {
      _tao_marshal_flag = (strm << _tao_sequence[i]);
    }
    return _tao_marshal_flag;
  }
  return 0; // error
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO_SCIOPEndpointSequence &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;
  if (strm >> _tao_seq_len)
  {
    // set the length of the sequence
    _tao_sequence.length (_tao_seq_len);
    // If length is 0 we return true.
    if (0 >= _tao_seq_len)
      return 1;
    // retrieve all the elements
    CORBA::Boolean _tao_marshal_flag = 1;
    for (CORBA::ULong i = 0; i < _tao_sequence.length () && _tao_marshal_flag; i++)
    {
      _tao_marshal_flag = (strm >> _tao_sequence[i]);
    }
    return _tao_marshal_flag;
  }
  return 0; // error
}

