
// -*- c++ -*-
/* Do not edit! -- generated file */

/***************************************************************************
 *   Copyright (C) 2009,2010 by Rick L. Vinyard, Jr.                       *
 *   rvinyard@cs.nmsu.edu                                                  *
 *                                                                         *
 *   This file is part of the dbus-cxx library.                            *
 *                                                                         *
 *   The dbus-cxx library is free software; you can redistribute it and/or *
 *   modify it under the terms of the GNU General Public License           *
 *   version 3 as published by the Free Software Foundation.               *
 *                                                                         *
 *   The dbus-cxx library is distributed in the hope that it will be       *
 *   useful, but WITHOUT ANY WARRANTY; without even the implied warranty   *
 *   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU   *
 *   General Public License for more details.                              *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this software. If not see <http://www.gnu.org/licenses/>.  *
 ***************************************************************************/
#include <dbus-cxx/forward_decls.h>
#include <dbus-cxx/methodproxybase.h>
#include <dbus-cxx/utility.h>
#include <dbus-cxx/headerlog.h>

#ifndef DBUSCXX_METHODPROXY_H
#define DBUSCXX_METHODPROXY_H

namespace DBus {


  /**
   * @ingroup objects
   * @ingroup proxy
   * 
   * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
   */
  template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5,class T_arg6,class T_arg7>
  class MethodProxy 
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    T_return operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3,T_arg4 _val_4,T_arg5 _val_5,T_arg6 _val_6,T_arg7 _val_7)
    {
      DBUSCXX_DEBUG_STDSTR( "dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3 << _val_4 << _val_5 << _val_6 << _val_7;
      ReturnMessage::const_pointer retmsg = this->call( _callmsg );
      T_return _retval;
      retmsg >> _retval;
      return _retval;
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };



  /**
   * @ingroup objects
   * @ingroup proxy
   * 
   * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
   */
  template <class T_return>
  class MethodProxy <T_return, nil,nil,nil,nil,nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    T_return operator()()
    {
      DBUSCXX_DEBUG_STDSTR( "dbus.MethodProxy", "Method<T_return>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      
      ReturnMessage::const_pointer retmsg = this->call( _callmsg );
      T_return _retval;
      retmsg >> _retval;
      return _retval;
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };


  /**
   * @ingroup objects
   * @ingroup proxy
   * 
   * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
   */
  template <class T_return, class T_arg1>
  class MethodProxy <T_return, T_arg1, nil,nil,nil,nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    T_return operator()(T_arg1 _val_1)
    {
      DBUSCXX_DEBUG_STDSTR( "dbus.MethodProxy", "Method<T_return, T_arg1>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1;
      ReturnMessage::const_pointer retmsg = this->call( _callmsg );
      T_return _retval;
      retmsg >> _retval;
      return _retval;
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };


  /**
   * @ingroup objects
   * @ingroup proxy
   * 
   * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
   */
  template <class T_return, class T_arg1,class T_arg2>
  class MethodProxy <T_return, T_arg1,T_arg2, nil,nil,nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    T_return operator()(T_arg1 _val_1,T_arg2 _val_2)
    {
      DBUSCXX_DEBUG_STDSTR( "dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2;
      ReturnMessage::const_pointer retmsg = this->call( _callmsg );
      T_return _retval;
      retmsg >> _retval;
      return _retval;
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };


  /**
   * @ingroup objects
   * @ingroup proxy
   * 
   * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
   */
  template <class T_return, class T_arg1,class T_arg2,class T_arg3>
  class MethodProxy <T_return, T_arg1,T_arg2,T_arg3, nil,nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    T_return operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3)
    {
      DBUSCXX_DEBUG_STDSTR( "dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3;
      ReturnMessage::const_pointer retmsg = this->call( _callmsg );
      T_return _retval;
      retmsg >> _retval;
      return _retval;
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };


  /**
   * @ingroup objects
   * @ingroup proxy
   * 
   * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
   */
  template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4>
  class MethodProxy <T_return, T_arg1,T_arg2,T_arg3,T_arg4, nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    T_return operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3,T_arg4 _val_4)
    {
      DBUSCXX_DEBUG_STDSTR( "dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3,T_arg4>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3 << _val_4;
      ReturnMessage::const_pointer retmsg = this->call( _callmsg );
      T_return _retval;
      retmsg >> _retval;
      return _retval;
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };


  /**
   * @ingroup objects
   * @ingroup proxy
   * 
   * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
   */
  template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5>
  class MethodProxy <T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5, nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    T_return operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3,T_arg4 _val_4,T_arg5 _val_5)
    {
      DBUSCXX_DEBUG_STDSTR( "dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3 << _val_4 << _val_5;
      ReturnMessage::const_pointer retmsg = this->call( _callmsg );
      T_return _retval;
      retmsg >> _retval;
      return _retval;
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };


  /**
   * @ingroup objects
   * @ingroup proxy
   * 
   * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
   */
  template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5,class T_arg6>
  class MethodProxy <T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6, nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    T_return operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3,T_arg4 _val_4,T_arg5 _val_5,T_arg6 _val_6)
    {
      DBUSCXX_DEBUG_STDSTR( "dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3 << _val_4 << _val_5 << _val_6;
      ReturnMessage::const_pointer retmsg = this->call( _callmsg );
      T_return _retval;
      retmsg >> _retval;
      return _retval;
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };


  /**
   */
  template <>
  class MethodProxy <void, nil,nil,nil,nil,nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    void operator()()
    {
      DBUSCXX_DEBUG_STDSTR("dbus.MethodProxy", "Method<T_return>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg ;
      _callmsg->set_no_reply();
      this->call( _callmsg );
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };

  /**
   */
  template <class T_arg1>
  class MethodProxy <void, T_arg1, nil,nil,nil,nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    void operator()(T_arg1 _val_1)
    {
      DBUSCXX_DEBUG_STDSTR("dbus.MethodProxy", "Method<T_return, T_arg1>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1;
      _callmsg->set_no_reply();
      this->call( _callmsg );
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };

  /**
   */
  template <class T_arg1,class T_arg2>
  class MethodProxy <void, T_arg1,T_arg2, nil,nil,nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    void operator()(T_arg1 _val_1,T_arg2 _val_2)
    {
      DBUSCXX_DEBUG_STDSTR("dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2;
      _callmsg->set_no_reply();
      this->call( _callmsg );
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };

  /**
   */
  template <class T_arg1,class T_arg2,class T_arg3>
  class MethodProxy <void, T_arg1,T_arg2,T_arg3, nil,nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    void operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3)
    {
      DBUSCXX_DEBUG_STDSTR("dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3;
      _callmsg->set_no_reply();
      this->call( _callmsg );
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };

  /**
   */
  template <class T_arg1,class T_arg2,class T_arg3,class T_arg4>
  class MethodProxy <void, T_arg1,T_arg2,T_arg3,T_arg4, nil,nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    void operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3,T_arg4 _val_4)
    {
      DBUSCXX_DEBUG_STDSTR("dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3,T_arg4>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3 << _val_4;
      _callmsg->set_no_reply();
      this->call( _callmsg );
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };

  /**
   */
  template <class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5>
  class MethodProxy <void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5, nil,nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    void operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3,T_arg4 _val_4,T_arg5 _val_5)
    {
      DBUSCXX_DEBUG_STDSTR("dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3 << _val_4 << _val_5;
      _callmsg->set_no_reply();
      this->call( _callmsg );
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };

  /**
   */
  template <class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5,class T_arg6>
  class MethodProxy <void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6, nil>
    : public MethodProxyBase
  {
  public:

    typedef DBusCxxPointer<MethodProxy> pointer;

    MethodProxy(const std::string& name):
      MethodProxyBase(name)
    {  }

    void operator()(T_arg1 _val_1,T_arg2 _val_2,T_arg3 _val_3,T_arg4 _val_4,T_arg5 _val_5,T_arg6 _val_6)
    {
      DBUSCXX_DEBUG_STDSTR("dbus.MethodProxy", "Method<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>::operator()   method=" << m_name );
      CallMessage::pointer _callmsg = this->create_call_message();
      *_callmsg  << _val_1 << _val_2 << _val_3 << _val_4 << _val_5 << _val_6;
      _callmsg->set_no_reply();
      this->call( _callmsg );
    }

    static pointer create(const std::string& name)
    { return pointer( new MethodProxy(name) ); }

  };



}

#endif
