
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
#include <dbus-cxx/method.h>
#include <dbus-cxx/connection.h>
#include <dbus-cxx/headerlog.h>
    
#ifndef DBUSCXX_METHOD_IMPL_H
#define DBUSCXX_METHOD_IMPL_H

namespace DBus {

  /**
   */
  template <>
  class Method <void, nil,nil,nil,nil,nil,nil,nil>
    : public MethodBase
  {
  public:

    typedef DBusCxxPointer<Method> pointer;

    Method(const std::string& name):
      MethodBase(name)
    {  }

    virtual HandlerResult handle_call_message( DBusCxxPointer<Connection> connection, CallMessage::const_pointer message )
    {
      DBUSCXX_DEBUG_STDSTR("dbus.Method", "Method<void>::handle_call_message   method=" << m_name );
      
      if ( not connection or not message ) return NOT_HANDLED;

            

      

      m_slot();

      ReturnMessage::const_pointer retmsg;

      if ( message->expects_reply() )
      {
        retmsg = message->create_reply();
        if ( not retmsg ) return NOT_HANDLED;
        connection << retmsg;
      }

      return HANDLED;
    }

    void set_method( sigc::slot0<void> slot )
    { m_slot = slot; }

    static pointer create(const std::string& name)
    { return pointer( new Method(name) ); }

    virtual MethodBase::pointer clone()
    { return MethodBase::pointer( new Method(this->name()) ); }

    /** Returns a DBus XML description of this interface */
    virtual std::string introspect(int space_depth=0) const
    {
      std::ostringstream sout;
      std::string spaces;
      for (int i=0; i < space_depth; i++ ) spaces += " ";
      sout << spaces << "<method name=\"" << name() << "\">\n";
      
          sout << spaces << "</method>\n";
      return sout.str();
    }

    virtual std::string arg_name(size_t i) {
      if ( i < 0+1 ) return m_arg_names[i];
      return std::string();
    }

    virtual void set_arg_name(size_t i, const std::string& name) {
      if ( i < 0+1 ) m_arg_names[i] = name;
    }

  protected:

    std::string m_arg_names[0+1];

    sigc::slot0<void> m_slot;

  };

  /**
   */
  template <class T_arg1>
  class Method <void, T_arg1, nil,nil,nil,nil,nil,nil>
    : public MethodBase
  {
  public:

    typedef DBusCxxPointer<Method> pointer;

    Method(const std::string& name):
      MethodBase(name)
    {  }

    virtual HandlerResult handle_call_message( DBusCxxPointer<Connection> connection, CallMessage::const_pointer message )
    {
      DBUSCXX_DEBUG_STDSTR("dbus.Method", "Method<void, T_arg1>::handle_call_message   method=" << m_name );
      
      if ( not connection or not message ) return NOT_HANDLED;

            
      T_arg1 _val_1;

      
      try {
        Message::iterator i = message->begin();
        i  >> _val_1;
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
      

      m_slot(_val_1);

      ReturnMessage::const_pointer retmsg;

      if ( message->expects_reply() )
      {
        retmsg = message->create_reply();
        if ( not retmsg ) return NOT_HANDLED;
        connection << retmsg;
      }

      return HANDLED;
    }

    void set_method( sigc::slot1<void, T_arg1> slot )
    { m_slot = slot; }

    static pointer create(const std::string& name)
    { return pointer( new Method(name) ); }

    virtual MethodBase::pointer clone()
    { return MethodBase::pointer( new Method(this->name()) ); }

    /** Returns a DBus XML description of this interface */
    virtual std::string introspect(int space_depth=0) const
    {
      std::ostringstream sout;
      std::string spaces;
      for (int i=0; i < space_depth; i++ ) spaces += " ";
      sout << spaces << "<method name=\"" << name() << "\">\n";
      
          sout << spaces << "  <arg name=\"" << m_arg_names[1] << "\" type=\"" << signature<T_arg1>() << "\" direction=\"in\"/>\n";
          sout << spaces << "</method>\n";
      return sout.str();
    }

    virtual std::string arg_name(size_t i) {
      if ( i < 1+1 ) return m_arg_names[i];
      return std::string();
    }

    virtual void set_arg_name(size_t i, const std::string& name) {
      if ( i < 1+1 ) m_arg_names[i] = name;
    }

  protected:

    std::string m_arg_names[1+1];

    sigc::slot1<void, T_arg1> m_slot;

  };

  /**
   */
  template <class T_arg1,class T_arg2>
  class Method <void, T_arg1,T_arg2, nil,nil,nil,nil,nil>
    : public MethodBase
  {
  public:

    typedef DBusCxxPointer<Method> pointer;

    Method(const std::string& name):
      MethodBase(name)
    {  }

    virtual HandlerResult handle_call_message( DBusCxxPointer<Connection> connection, CallMessage::const_pointer message )
    {
      DBUSCXX_DEBUG_STDSTR("dbus.Method", "Method<void, T_arg1,T_arg2>::handle_call_message   method=" << m_name );
      
      if ( not connection or not message ) return NOT_HANDLED;

            
      T_arg1 _val_1;
      T_arg2 _val_2;

      
      try {
        Message::iterator i = message->begin();
        i  >> _val_1 >> _val_2;
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
      

      m_slot(_val_1,_val_2);

      ReturnMessage::const_pointer retmsg;

      if ( message->expects_reply() )
      {
        retmsg = message->create_reply();
        if ( not retmsg ) return NOT_HANDLED;
        connection << retmsg;
      }

      return HANDLED;
    }

    void set_method( sigc::slot2<void, T_arg1,T_arg2> slot )
    { m_slot = slot; }

    static pointer create(const std::string& name)
    { return pointer( new Method(name) ); }

    virtual MethodBase::pointer clone()
    { return MethodBase::pointer( new Method(this->name()) ); }

    /** Returns a DBus XML description of this interface */
    virtual std::string introspect(int space_depth=0) const
    {
      std::ostringstream sout;
      std::string spaces;
      for (int i=0; i < space_depth; i++ ) spaces += " ";
      sout << spaces << "<method name=\"" << name() << "\">\n";
      
          sout << spaces << "  <arg name=\"" << m_arg_names[1] << "\" type=\"" << signature<T_arg1>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[2] << "\" type=\"" << signature<T_arg2>() << "\" direction=\"in\"/>\n";
          sout << spaces << "</method>\n";
      return sout.str();
    }

    virtual std::string arg_name(size_t i) {
      if ( i < 2+1 ) return m_arg_names[i];
      return std::string();
    }

    virtual void set_arg_name(size_t i, const std::string& name) {
      if ( i < 2+1 ) m_arg_names[i] = name;
    }

  protected:

    std::string m_arg_names[2+1];

    sigc::slot2<void, T_arg1,T_arg2> m_slot;

  };

  /**
   */
  template <class T_arg1,class T_arg2,class T_arg3>
  class Method <void, T_arg1,T_arg2,T_arg3, nil,nil,nil,nil>
    : public MethodBase
  {
  public:

    typedef DBusCxxPointer<Method> pointer;

    Method(const std::string& name):
      MethodBase(name)
    {  }

    virtual HandlerResult handle_call_message( DBusCxxPointer<Connection> connection, CallMessage::const_pointer message )
    {
      DBUSCXX_DEBUG_STDSTR("dbus.Method", "Method<void, T_arg1,T_arg2,T_arg3>::handle_call_message   method=" << m_name );
      
      if ( not connection or not message ) return NOT_HANDLED;

            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;

      
      try {
        Message::iterator i = message->begin();
        i  >> _val_1 >> _val_2 >> _val_3;
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
      

      m_slot(_val_1,_val_2,_val_3);

      ReturnMessage::const_pointer retmsg;

      if ( message->expects_reply() )
      {
        retmsg = message->create_reply();
        if ( not retmsg ) return NOT_HANDLED;
        connection << retmsg;
      }

      return HANDLED;
    }

    void set_method( sigc::slot3<void, T_arg1,T_arg2,T_arg3> slot )
    { m_slot = slot; }

    static pointer create(const std::string& name)
    { return pointer( new Method(name) ); }

    virtual MethodBase::pointer clone()
    { return MethodBase::pointer( new Method(this->name()) ); }

    /** Returns a DBus XML description of this interface */
    virtual std::string introspect(int space_depth=0) const
    {
      std::ostringstream sout;
      std::string spaces;
      for (int i=0; i < space_depth; i++ ) spaces += " ";
      sout << spaces << "<method name=\"" << name() << "\">\n";
      
          sout << spaces << "  <arg name=\"" << m_arg_names[1] << "\" type=\"" << signature<T_arg1>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[2] << "\" type=\"" << signature<T_arg2>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[3] << "\" type=\"" << signature<T_arg3>() << "\" direction=\"in\"/>\n";
          sout << spaces << "</method>\n";
      return sout.str();
    }

    virtual std::string arg_name(size_t i) {
      if ( i < 3+1 ) return m_arg_names[i];
      return std::string();
    }

    virtual void set_arg_name(size_t i, const std::string& name) {
      if ( i < 3+1 ) m_arg_names[i] = name;
    }

  protected:

    std::string m_arg_names[3+1];

    sigc::slot3<void, T_arg1,T_arg2,T_arg3> m_slot;

  };

  /**
   */
  template <class T_arg1,class T_arg2,class T_arg3,class T_arg4>
  class Method <void, T_arg1,T_arg2,T_arg3,T_arg4, nil,nil,nil>
    : public MethodBase
  {
  public:

    typedef DBusCxxPointer<Method> pointer;

    Method(const std::string& name):
      MethodBase(name)
    {  }

    virtual HandlerResult handle_call_message( DBusCxxPointer<Connection> connection, CallMessage::const_pointer message )
    {
      DBUSCXX_DEBUG_STDSTR("dbus.Method", "Method<void, T_arg1,T_arg2,T_arg3,T_arg4>::handle_call_message   method=" << m_name );
      
      if ( not connection or not message ) return NOT_HANDLED;

            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;
      T_arg4 _val_4;

      
      try {
        Message::iterator i = message->begin();
        i  >> _val_1 >> _val_2 >> _val_3 >> _val_4;
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
      

      m_slot(_val_1,_val_2,_val_3,_val_4);

      ReturnMessage::const_pointer retmsg;

      if ( message->expects_reply() )
      {
        retmsg = message->create_reply();
        if ( not retmsg ) return NOT_HANDLED;
        connection << retmsg;
      }

      return HANDLED;
    }

    void set_method( sigc::slot4<void, T_arg1,T_arg2,T_arg3,T_arg4> slot )
    { m_slot = slot; }

    static pointer create(const std::string& name)
    { return pointer( new Method(name) ); }

    virtual MethodBase::pointer clone()
    { return MethodBase::pointer( new Method(this->name()) ); }

    /** Returns a DBus XML description of this interface */
    virtual std::string introspect(int space_depth=0) const
    {
      std::ostringstream sout;
      std::string spaces;
      for (int i=0; i < space_depth; i++ ) spaces += " ";
      sout << spaces << "<method name=\"" << name() << "\">\n";
      
          sout << spaces << "  <arg name=\"" << m_arg_names[1] << "\" type=\"" << signature<T_arg1>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[2] << "\" type=\"" << signature<T_arg2>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[3] << "\" type=\"" << signature<T_arg3>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[4] << "\" type=\"" << signature<T_arg4>() << "\" direction=\"in\"/>\n";
          sout << spaces << "</method>\n";
      return sout.str();
    }

    virtual std::string arg_name(size_t i) {
      if ( i < 4+1 ) return m_arg_names[i];
      return std::string();
    }

    virtual void set_arg_name(size_t i, const std::string& name) {
      if ( i < 4+1 ) m_arg_names[i] = name;
    }

  protected:

    std::string m_arg_names[4+1];

    sigc::slot4<void, T_arg1,T_arg2,T_arg3,T_arg4> m_slot;

  };

  /**
   */
  template <class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5>
  class Method <void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5, nil,nil>
    : public MethodBase
  {
  public:

    typedef DBusCxxPointer<Method> pointer;

    Method(const std::string& name):
      MethodBase(name)
    {  }

    virtual HandlerResult handle_call_message( DBusCxxPointer<Connection> connection, CallMessage::const_pointer message )
    {
      DBUSCXX_DEBUG_STDSTR("dbus.Method", "Method<void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>::handle_call_message   method=" << m_name );
      
      if ( not connection or not message ) return NOT_HANDLED;

            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;
      T_arg4 _val_4;
      T_arg5 _val_5;

      
      try {
        Message::iterator i = message->begin();
        i  >> _val_1 >> _val_2 >> _val_3 >> _val_4 >> _val_5;
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
      

      m_slot(_val_1,_val_2,_val_3,_val_4,_val_5);

      ReturnMessage::const_pointer retmsg;

      if ( message->expects_reply() )
      {
        retmsg = message->create_reply();
        if ( not retmsg ) return NOT_HANDLED;
        connection << retmsg;
      }

      return HANDLED;
    }

    void set_method( sigc::slot5<void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5> slot )
    { m_slot = slot; }

    static pointer create(const std::string& name)
    { return pointer( new Method(name) ); }

    virtual MethodBase::pointer clone()
    { return MethodBase::pointer( new Method(this->name()) ); }

    /** Returns a DBus XML description of this interface */
    virtual std::string introspect(int space_depth=0) const
    {
      std::ostringstream sout;
      std::string spaces;
      for (int i=0; i < space_depth; i++ ) spaces += " ";
      sout << spaces << "<method name=\"" << name() << "\">\n";
      
          sout << spaces << "  <arg name=\"" << m_arg_names[1] << "\" type=\"" << signature<T_arg1>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[2] << "\" type=\"" << signature<T_arg2>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[3] << "\" type=\"" << signature<T_arg3>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[4] << "\" type=\"" << signature<T_arg4>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[5] << "\" type=\"" << signature<T_arg5>() << "\" direction=\"in\"/>\n";
          sout << spaces << "</method>\n";
      return sout.str();
    }

    virtual std::string arg_name(size_t i) {
      if ( i < 5+1 ) return m_arg_names[i];
      return std::string();
    }

    virtual void set_arg_name(size_t i, const std::string& name) {
      if ( i < 5+1 ) m_arg_names[i] = name;
    }

  protected:

    std::string m_arg_names[5+1];

    sigc::slot5<void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5> m_slot;

  };

  /**
   */
  template <class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5,class T_arg6>
  class Method <void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6, nil>
    : public MethodBase
  {
  public:

    typedef DBusCxxPointer<Method> pointer;

    Method(const std::string& name):
      MethodBase(name)
    {  }

    virtual HandlerResult handle_call_message( DBusCxxPointer<Connection> connection, CallMessage::const_pointer message )
    {
      DBUSCXX_DEBUG_STDSTR("dbus.Method", "Method<void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>::handle_call_message   method=" << m_name );
      
      if ( not connection or not message ) return NOT_HANDLED;

            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;
      T_arg4 _val_4;
      T_arg5 _val_5;
      T_arg6 _val_6;

      
      try {
        Message::iterator i = message->begin();
        i  >> _val_1 >> _val_2 >> _val_3 >> _val_4 >> _val_5 >> _val_6;
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
      

      m_slot(_val_1,_val_2,_val_3,_val_4,_val_5,_val_6);

      ReturnMessage::const_pointer retmsg;

      if ( message->expects_reply() )
      {
        retmsg = message->create_reply();
        if ( not retmsg ) return NOT_HANDLED;
        connection << retmsg;
      }

      return HANDLED;
    }

    void set_method( sigc::slot6<void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6> slot )
    { m_slot = slot; }

    static pointer create(const std::string& name)
    { return pointer( new Method(name) ); }

    virtual MethodBase::pointer clone()
    { return MethodBase::pointer( new Method(this->name()) ); }

    /** Returns a DBus XML description of this interface */
    virtual std::string introspect(int space_depth=0) const
    {
      std::ostringstream sout;
      std::string spaces;
      for (int i=0; i < space_depth; i++ ) spaces += " ";
      sout << spaces << "<method name=\"" << name() << "\">\n";
      
          sout << spaces << "  <arg name=\"" << m_arg_names[1] << "\" type=\"" << signature<T_arg1>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[2] << "\" type=\"" << signature<T_arg2>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[3] << "\" type=\"" << signature<T_arg3>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[4] << "\" type=\"" << signature<T_arg4>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[5] << "\" type=\"" << signature<T_arg5>() << "\" direction=\"in\"/>\n";
          sout << spaces << "  <arg name=\"" << m_arg_names[6] << "\" type=\"" << signature<T_arg6>() << "\" direction=\"in\"/>\n";
          sout << spaces << "</method>\n";
      return sout.str();
    }

    virtual std::string arg_name(size_t i) {
      if ( i < 6+1 ) return m_arg_names[i];
      return std::string();
    }

    virtual void set_arg_name(size_t i, const std::string& name) {
      if ( i < 6+1 ) m_arg_names[i] = name;
    }

  protected:

    std::string m_arg_names[6+1];

    sigc::slot6<void, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6> m_slot;

  };



}

#endif
