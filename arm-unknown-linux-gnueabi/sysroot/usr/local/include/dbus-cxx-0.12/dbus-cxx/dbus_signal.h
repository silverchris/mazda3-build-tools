
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
#include <sstream>
#include <dbus-cxx/forward_decls.h>
#include <dbus-cxx/utility.h>
#include <dbus-cxx/signal_base.h>
#include <dbus-cxx/headerlog.h>

#ifndef DBUSCXX_DBUS_SIGNAL_H_
#define DBUSCXX_DBUS_SIGNAL_H_

namespace DBus {

/**
 * Subclass of the numbered sigc::signal templates.
 *
 * This class defines a subclass of the sigc::signal types and can be used
 * as its parent. The key difference is that when the signal is emitted
 * a DBus signal message is created using the parameters of the signal
 * emission and transmitted via the dbus in addition to any local
 * signal propagation that may take place.
 *
 * @ingroup signals
 *
 * @ingroup local
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1 = nil,class T_arg2 = nil,class T_arg3 = nil,class T_arg4 = nil,class T_arg5 = nil,class T_arg6 = nil,class T_arg7 = nil>
class signal 
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7>, public signal_base
{
public:

  //template <class T_accumulator>
  //class accumulated
  //: public sigc::signal7<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7, T_accumulator>, public signal_base
  //{
  //public:
  //  typedef DBusCxxPointer<accumulated> pointer;
  //
  //  accumulated(const std::string& interface, const std::string& name):
  //    signal_base(interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name):
  //    signal_base(path, interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal7<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7, T_accumulator>(src),
  //    signal_base(interface, name)
  //  {}

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal7<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7, T_accumulator>(src),
  //    signal_base(path, interface, name)
  //  {}

  //  static pointer create(const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(interface, name) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(path, interface, name) );
  //  }
    
  //  static pointer create(const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(interface, name, src) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(path, interface, name, src) );
  //  }
    
  //  virtual signal_base::pointer clone()
  //  {
  //    return signal_base::pointer( new accumulated(*this) );
  //  }

  //protected:

  //  sigc::connection m_internal_callback_connection;

  //  virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
  //  {
  //    // T_return _retval;
  //      //    
  //    T_arg1 _val_1;
  //    T_arg2 _val_2;
  //    T_arg3 _val_3;
  //    T_arg4 _val_4;
  //    T_arg5 _val_5;
  //    T_arg6 _val_6;
  //    T_arg7 _val_7;

  //    m_internal_callback_connection.block();
    
  //    try {
  //      Message::iterator i = msg->begin();
  //      i  >> _val_1 >> _val_2 >> _val_3 >> _val_4 >> _val_5 >> _val_6 >> _val_7;
  //      this->emit(_val_1,_val_2,_val_3,_val_4,_val_5,_val_6,_val_7);
  //    }
  //    catch ( ErrorInvalidTypecast& e ) {
  //      m_internal_callback_connection.unblock();
  //      return NOT_HANDLED;
  //    }
    
  //    m_internal_callback_connection.unblock();

  //    return HANDLED;
  //  }


  //  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3,T_arg4 arg4,T_arg5 arg5,T_arg6 arg6,T_arg7 arg7)
  //  {
    
  //  }

  //};

  typedef DBusCxxPointer<signal> pointer;
  
  signal(const std::string& interface, const std::string& name):
    signal_base(interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& path, const std::string& interface, const std::string& name):
    signal_base(path, interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7>(src),
    signal_base(interface, name)
  { }

  signal(const std::string& path, const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7>(src),
    signal_base(path, interface, name)
  { }

  static pointer create(const std::string& interface, const std::string& name)
  {
    return pointer( new signal(interface, name) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  {
    return pointer( new signal(path, interface, name) );
  }

  static pointer create(const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(interface, name, src) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(path, interface, name, src) );
  }

  virtual signal_base::pointer clone()
  {
    return signal_base::pointer( new signal(*this) );
  }

  /** Returns a DBus XML description of this interface */
  virtual std::string introspect(int space_depth=0) const
  {
    std::ostringstream sout;
    std::string spaces;
    for (int i=0; i < space_depth; i++ ) spaces += " ";
    sout << spaces << "<signal name=\"" << name() << "\">\n";
    
    T_arg1 arg1;
    sout << spaces << "  <arg name=\"" << m_arg_names[1-1] << "\" type=\"" << signature(arg1) << "\"/>\n";
    T_arg2 arg2;
    sout << spaces << "  <arg name=\"" << m_arg_names[2-1] << "\" type=\"" << signature(arg2) << "\"/>\n";
    T_arg3 arg3;
    sout << spaces << "  <arg name=\"" << m_arg_names[3-1] << "\" type=\"" << signature(arg3) << "\"/>\n";
    T_arg4 arg4;
    sout << spaces << "  <arg name=\"" << m_arg_names[4-1] << "\" type=\"" << signature(arg4) << "\"/>\n";
    T_arg5 arg5;
    sout << spaces << "  <arg name=\"" << m_arg_names[5-1] << "\" type=\"" << signature(arg5) << "\"/>\n";
    T_arg6 arg6;
    sout << spaces << "  <arg name=\"" << m_arg_names[6-1] << "\" type=\"" << signature(arg6) << "\"/>\n";
    T_arg7 arg7;
    sout << spaces << "  <arg name=\"" << m_arg_names[7-1] << "\" type=\"" << signature(arg7) << "\"/>\n";
    sout << spaces << "</signal>\n";
    return sout.str();
  }

  virtual std::string arg_name(size_t i) {
    if ( i < 7 ) return m_arg_names[i];
    return std::string();
  }

  virtual void set_arg_name(size_t i, const std::string& name) {
    if ( i < 7 ) m_arg_names[i] = name;
  }

  protected:

  friend class Interface;

  std::string m_arg_names[7];

  sigc::connection m_internal_callback_connection;

  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3,T_arg4 arg4,T_arg5 arg5,T_arg6 arg6,T_arg7 arg7)
  {
    // DBUS_CXX_DEBUG( "signal::internal_callback: "  << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 );
    SignalMessage::pointer __msg = SignalMessage::create(m_path, m_interface, m_name);
    if ( not m_destination.empty() ) __msg->set_destination(m_destination);
    *__msg  << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7;
    bool result = this->handle_dbus_outgoing(__msg);
    DBUSCXX_DEBUG_STDSTR( "dbus.signal", "signal::internal_callback: result=" << result );
  }

};



/**
 * Subclass of the numbered sigc::signal templates.
 *
 * This class defines a subclass of the sigc::signal types and can be used
 * as its parent. The key difference is that when the signal is emitted
 * a DBus signal message is created using the parameters of the signal
 * emission and transmitted via the dbus in addition to any local
 * signal propagation that may take place.
 *
 * @ingroup signals
 *
 * @ingroup local
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return>
class signal <T_return, nil,nil,nil,nil,nil,nil,nil>
  : public sigc::signal<T_return>, public signal_base
{
public:

  //template <class T_accumulator>
  //class accumulated
  //: public sigc::signal0<T_return, T_accumulator>, public signal_base
  //{
  //public:
  //  typedef DBusCxxPointer<accumulated> pointer;
  //
  //  accumulated(const std::string& interface, const std::string& name):
  //    signal_base(interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name):
  //    signal_base(path, interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal0<T_return, T_accumulator>(src),
  //    signal_base(interface, name)
  //  {}

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal0<T_return, T_accumulator>(src),
  //    signal_base(path, interface, name)
  //  {}

  //  static pointer create(const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(interface, name) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(path, interface, name) );
  //  }
    
  //  static pointer create(const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(interface, name, src) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(path, interface, name, src) );
  //  }
    
  //  virtual signal_base::pointer clone()
  //  {
  //    return signal_base::pointer( new accumulated(*this) );
  //  }

  //protected:

  //  sigc::connection m_internal_callback_connection;

  //  virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
  //  {
  //    // T_return _retval;
  //      //    

  //    m_internal_callback_connection.block();
    
  //    try {
  //      Message::iterator i = msg->begin();
  //      i ;
  //      this->emit();
  //    }
  //    catch ( ErrorInvalidTypecast& e ) {
  //      m_internal_callback_connection.unblock();
  //      return NOT_HANDLED;
  //    }
    
  //    m_internal_callback_connection.unblock();

  //    return HANDLED;
  //  }


  //  T_return internal_callback()
  //  {
    
  //  }

  //};

  typedef DBusCxxPointer<signal> pointer;
  
  signal(const std::string& interface, const std::string& name):
    signal_base(interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& path, const std::string& interface, const std::string& name):
    signal_base(path, interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return>(src),
    signal_base(interface, name)
  { }

  signal(const std::string& path, const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return>(src),
    signal_base(path, interface, name)
  { }

  static pointer create(const std::string& interface, const std::string& name)
  {
    return pointer( new signal(interface, name) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  {
    return pointer( new signal(path, interface, name) );
  }

  static pointer create(const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(interface, name, src) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(path, interface, name, src) );
  }

  virtual signal_base::pointer clone()
  {
    return signal_base::pointer( new signal(*this) );
  }

  /** Returns a DBus XML description of this interface */
  virtual std::string introspect(int space_depth=0) const
  {
    std::ostringstream sout;
    std::string spaces;
    for (int i=0; i < space_depth; i++ ) spaces += " ";
    sout << spaces << "<signal name=\"" << name() << "\">\n";
    
    sout << spaces << "</signal>\n";
    return sout.str();
  }

  virtual std::string arg_name(size_t i) {
    if ( i < 0 ) return m_arg_names[i];
    return std::string();
  }

  virtual void set_arg_name(size_t i, const std::string& name) {
    if ( i < 0 ) m_arg_names[i] = name;
  }

  protected:

  friend class Interface;

  std::string m_arg_names[0];

  sigc::connection m_internal_callback_connection;

  T_return internal_callback()
  {
    // DBUS_CXX_DEBUG( "signal::internal_callback: "  );
    SignalMessage::pointer __msg = SignalMessage::create(m_path, m_interface, m_name);
    if ( not m_destination.empty() ) __msg->set_destination(m_destination);
    
    bool result = this->handle_dbus_outgoing(__msg);
    DBUSCXX_DEBUG_STDSTR( "dbus.signal", "signal::internal_callback: result=" << result );
  }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * This class defines a subclass of the sigc::signal types and can be used
 * as its parent. The key difference is that when the signal is emitted
 * a DBus signal message is created using the parameters of the signal
 * emission and transmitted via the dbus in addition to any local
 * signal propagation that may take place.
 *
 * @ingroup signals
 *
 * @ingroup local
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1>
class signal <T_return, T_arg1, nil,nil,nil,nil,nil,nil>
  : public sigc::signal<T_return, T_arg1>, public signal_base
{
public:

  //template <class T_accumulator>
  //class accumulated
  //: public sigc::signal1<T_return, T_arg1, T_accumulator>, public signal_base
  //{
  //public:
  //  typedef DBusCxxPointer<accumulated> pointer;
  //
  //  accumulated(const std::string& interface, const std::string& name):
  //    signal_base(interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name):
  //    signal_base(path, interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal1<T_return, T_arg1, T_accumulator>(src),
  //    signal_base(interface, name)
  //  {}

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal1<T_return, T_arg1, T_accumulator>(src),
  //    signal_base(path, interface, name)
  //  {}

  //  static pointer create(const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(interface, name) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(path, interface, name) );
  //  }
    
  //  static pointer create(const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(interface, name, src) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(path, interface, name, src) );
  //  }
    
  //  virtual signal_base::pointer clone()
  //  {
  //    return signal_base::pointer( new accumulated(*this) );
  //  }

  //protected:

  //  sigc::connection m_internal_callback_connection;

  //  virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
  //  {
  //    // T_return _retval;
  //      //    
  //    T_arg1 _val_1;

  //    m_internal_callback_connection.block();
    
  //    try {
  //      Message::iterator i = msg->begin();
  //      i  >> _val_1;
  //      this->emit(_val_1);
  //    }
  //    catch ( ErrorInvalidTypecast& e ) {
  //      m_internal_callback_connection.unblock();
  //      return NOT_HANDLED;
  //    }
    
  //    m_internal_callback_connection.unblock();

  //    return HANDLED;
  //  }


  //  T_return internal_callback(T_arg1 arg1)
  //  {
    
  //  }

  //};

  typedef DBusCxxPointer<signal> pointer;
  
  signal(const std::string& interface, const std::string& name):
    signal_base(interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& path, const std::string& interface, const std::string& name):
    signal_base(path, interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1>(src),
    signal_base(interface, name)
  { }

  signal(const std::string& path, const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1>(src),
    signal_base(path, interface, name)
  { }

  static pointer create(const std::string& interface, const std::string& name)
  {
    return pointer( new signal(interface, name) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  {
    return pointer( new signal(path, interface, name) );
  }

  static pointer create(const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(interface, name, src) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(path, interface, name, src) );
  }

  virtual signal_base::pointer clone()
  {
    return signal_base::pointer( new signal(*this) );
  }

  /** Returns a DBus XML description of this interface */
  virtual std::string introspect(int space_depth=0) const
  {
    std::ostringstream sout;
    std::string spaces;
    for (int i=0; i < space_depth; i++ ) spaces += " ";
    sout << spaces << "<signal name=\"" << name() << "\">\n";
    
    T_arg1 arg1;
    sout << spaces << "  <arg name=\"" << m_arg_names[1-1] << "\" type=\"" << signature(arg1) << "\"/>\n";
    sout << spaces << "</signal>\n";
    return sout.str();
  }

  virtual std::string arg_name(size_t i) {
    if ( i < 1 ) return m_arg_names[i];
    return std::string();
  }

  virtual void set_arg_name(size_t i, const std::string& name) {
    if ( i < 1 ) m_arg_names[i] = name;
  }

  protected:

  friend class Interface;

  std::string m_arg_names[1];

  sigc::connection m_internal_callback_connection;

  T_return internal_callback(T_arg1 arg1)
  {
    // DBUS_CXX_DEBUG( "signal::internal_callback: "  << arg1 );
    SignalMessage::pointer __msg = SignalMessage::create(m_path, m_interface, m_name);
    if ( not m_destination.empty() ) __msg->set_destination(m_destination);
    *__msg  << arg1;
    bool result = this->handle_dbus_outgoing(__msg);
    DBUSCXX_DEBUG_STDSTR( "dbus.signal", "signal::internal_callback: result=" << result );
  }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * This class defines a subclass of the sigc::signal types and can be used
 * as its parent. The key difference is that when the signal is emitted
 * a DBus signal message is created using the parameters of the signal
 * emission and transmitted via the dbus in addition to any local
 * signal propagation that may take place.
 *
 * @ingroup signals
 *
 * @ingroup local
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2>
class signal <T_return, T_arg1,T_arg2, nil,nil,nil,nil,nil>
  : public sigc::signal<T_return, T_arg1,T_arg2>, public signal_base
{
public:

  //template <class T_accumulator>
  //class accumulated
  //: public sigc::signal2<T_return, T_arg1,T_arg2, T_accumulator>, public signal_base
  //{
  //public:
  //  typedef DBusCxxPointer<accumulated> pointer;
  //
  //  accumulated(const std::string& interface, const std::string& name):
  //    signal_base(interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name):
  //    signal_base(path, interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal2<T_return, T_arg1,T_arg2, T_accumulator>(src),
  //    signal_base(interface, name)
  //  {}

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal2<T_return, T_arg1,T_arg2, T_accumulator>(src),
  //    signal_base(path, interface, name)
  //  {}

  //  static pointer create(const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(interface, name) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(path, interface, name) );
  //  }
    
  //  static pointer create(const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(interface, name, src) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(path, interface, name, src) );
  //  }
    
  //  virtual signal_base::pointer clone()
  //  {
  //    return signal_base::pointer( new accumulated(*this) );
  //  }

  //protected:

  //  sigc::connection m_internal_callback_connection;

  //  virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
  //  {
  //    // T_return _retval;
  //      //    
  //    T_arg1 _val_1;
  //    T_arg2 _val_2;

  //    m_internal_callback_connection.block();
    
  //    try {
  //      Message::iterator i = msg->begin();
  //      i  >> _val_1 >> _val_2;
  //      this->emit(_val_1,_val_2);
  //    }
  //    catch ( ErrorInvalidTypecast& e ) {
  //      m_internal_callback_connection.unblock();
  //      return NOT_HANDLED;
  //    }
    
  //    m_internal_callback_connection.unblock();

  //    return HANDLED;
  //  }


  //  T_return internal_callback(T_arg1 arg1,T_arg2 arg2)
  //  {
    
  //  }

  //};

  typedef DBusCxxPointer<signal> pointer;
  
  signal(const std::string& interface, const std::string& name):
    signal_base(interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& path, const std::string& interface, const std::string& name):
    signal_base(path, interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2>(src),
    signal_base(interface, name)
  { }

  signal(const std::string& path, const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2>(src),
    signal_base(path, interface, name)
  { }

  static pointer create(const std::string& interface, const std::string& name)
  {
    return pointer( new signal(interface, name) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  {
    return pointer( new signal(path, interface, name) );
  }

  static pointer create(const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(interface, name, src) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(path, interface, name, src) );
  }

  virtual signal_base::pointer clone()
  {
    return signal_base::pointer( new signal(*this) );
  }

  /** Returns a DBus XML description of this interface */
  virtual std::string introspect(int space_depth=0) const
  {
    std::ostringstream sout;
    std::string spaces;
    for (int i=0; i < space_depth; i++ ) spaces += " ";
    sout << spaces << "<signal name=\"" << name() << "\">\n";
    
    T_arg1 arg1;
    sout << spaces << "  <arg name=\"" << m_arg_names[1-1] << "\" type=\"" << signature(arg1) << "\"/>\n";
    T_arg2 arg2;
    sout << spaces << "  <arg name=\"" << m_arg_names[2-1] << "\" type=\"" << signature(arg2) << "\"/>\n";
    sout << spaces << "</signal>\n";
    return sout.str();
  }

  virtual std::string arg_name(size_t i) {
    if ( i < 2 ) return m_arg_names[i];
    return std::string();
  }

  virtual void set_arg_name(size_t i, const std::string& name) {
    if ( i < 2 ) m_arg_names[i] = name;
  }

  protected:

  friend class Interface;

  std::string m_arg_names[2];

  sigc::connection m_internal_callback_connection;

  T_return internal_callback(T_arg1 arg1,T_arg2 arg2)
  {
    // DBUS_CXX_DEBUG( "signal::internal_callback: "  << arg1 << arg2 );
    SignalMessage::pointer __msg = SignalMessage::create(m_path, m_interface, m_name);
    if ( not m_destination.empty() ) __msg->set_destination(m_destination);
    *__msg  << arg1 << arg2;
    bool result = this->handle_dbus_outgoing(__msg);
    DBUSCXX_DEBUG_STDSTR( "dbus.signal", "signal::internal_callback: result=" << result );
  }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * This class defines a subclass of the sigc::signal types and can be used
 * as its parent. The key difference is that when the signal is emitted
 * a DBus signal message is created using the parameters of the signal
 * emission and transmitted via the dbus in addition to any local
 * signal propagation that may take place.
 *
 * @ingroup signals
 *
 * @ingroup local
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2,class T_arg3>
class signal <T_return, T_arg1,T_arg2,T_arg3, nil,nil,nil,nil>
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3>, public signal_base
{
public:

  //template <class T_accumulator>
  //class accumulated
  //: public sigc::signal3<T_return, T_arg1,T_arg2,T_arg3, T_accumulator>, public signal_base
  //{
  //public:
  //  typedef DBusCxxPointer<accumulated> pointer;
  //
  //  accumulated(const std::string& interface, const std::string& name):
  //    signal_base(interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name):
  //    signal_base(path, interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal3<T_return, T_arg1,T_arg2,T_arg3, T_accumulator>(src),
  //    signal_base(interface, name)
  //  {}

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal3<T_return, T_arg1,T_arg2,T_arg3, T_accumulator>(src),
  //    signal_base(path, interface, name)
  //  {}

  //  static pointer create(const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(interface, name) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(path, interface, name) );
  //  }
    
  //  static pointer create(const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(interface, name, src) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(path, interface, name, src) );
  //  }
    
  //  virtual signal_base::pointer clone()
  //  {
  //    return signal_base::pointer( new accumulated(*this) );
  //  }

  //protected:

  //  sigc::connection m_internal_callback_connection;

  //  virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
  //  {
  //    // T_return _retval;
  //      //    
  //    T_arg1 _val_1;
  //    T_arg2 _val_2;
  //    T_arg3 _val_3;

  //    m_internal_callback_connection.block();
    
  //    try {
  //      Message::iterator i = msg->begin();
  //      i  >> _val_1 >> _val_2 >> _val_3;
  //      this->emit(_val_1,_val_2,_val_3);
  //    }
  //    catch ( ErrorInvalidTypecast& e ) {
  //      m_internal_callback_connection.unblock();
  //      return NOT_HANDLED;
  //    }
    
  //    m_internal_callback_connection.unblock();

  //    return HANDLED;
  //  }


  //  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3)
  //  {
    
  //  }

  //};

  typedef DBusCxxPointer<signal> pointer;
  
  signal(const std::string& interface, const std::string& name):
    signal_base(interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& path, const std::string& interface, const std::string& name):
    signal_base(path, interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3>(src),
    signal_base(interface, name)
  { }

  signal(const std::string& path, const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3>(src),
    signal_base(path, interface, name)
  { }

  static pointer create(const std::string& interface, const std::string& name)
  {
    return pointer( new signal(interface, name) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  {
    return pointer( new signal(path, interface, name) );
  }

  static pointer create(const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(interface, name, src) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(path, interface, name, src) );
  }

  virtual signal_base::pointer clone()
  {
    return signal_base::pointer( new signal(*this) );
  }

  /** Returns a DBus XML description of this interface */
  virtual std::string introspect(int space_depth=0) const
  {
    std::ostringstream sout;
    std::string spaces;
    for (int i=0; i < space_depth; i++ ) spaces += " ";
    sout << spaces << "<signal name=\"" << name() << "\">\n";
    
    T_arg1 arg1;
    sout << spaces << "  <arg name=\"" << m_arg_names[1-1] << "\" type=\"" << signature(arg1) << "\"/>\n";
    T_arg2 arg2;
    sout << spaces << "  <arg name=\"" << m_arg_names[2-1] << "\" type=\"" << signature(arg2) << "\"/>\n";
    T_arg3 arg3;
    sout << spaces << "  <arg name=\"" << m_arg_names[3-1] << "\" type=\"" << signature(arg3) << "\"/>\n";
    sout << spaces << "</signal>\n";
    return sout.str();
  }

  virtual std::string arg_name(size_t i) {
    if ( i < 3 ) return m_arg_names[i];
    return std::string();
  }

  virtual void set_arg_name(size_t i, const std::string& name) {
    if ( i < 3 ) m_arg_names[i] = name;
  }

  protected:

  friend class Interface;

  std::string m_arg_names[3];

  sigc::connection m_internal_callback_connection;

  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3)
  {
    // DBUS_CXX_DEBUG( "signal::internal_callback: "  << arg1 << arg2 << arg3 );
    SignalMessage::pointer __msg = SignalMessage::create(m_path, m_interface, m_name);
    if ( not m_destination.empty() ) __msg->set_destination(m_destination);
    *__msg  << arg1 << arg2 << arg3;
    bool result = this->handle_dbus_outgoing(__msg);
    DBUSCXX_DEBUG_STDSTR( "dbus.signal", "signal::internal_callback: result=" << result );
  }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * This class defines a subclass of the sigc::signal types and can be used
 * as its parent. The key difference is that when the signal is emitted
 * a DBus signal message is created using the parameters of the signal
 * emission and transmitted via the dbus in addition to any local
 * signal propagation that may take place.
 *
 * @ingroup signals
 *
 * @ingroup local
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4>
class signal <T_return, T_arg1,T_arg2,T_arg3,T_arg4, nil,nil,nil>
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4>, public signal_base
{
public:

  //template <class T_accumulator>
  //class accumulated
  //: public sigc::signal4<T_return, T_arg1,T_arg2,T_arg3,T_arg4, T_accumulator>, public signal_base
  //{
  //public:
  //  typedef DBusCxxPointer<accumulated> pointer;
  //
  //  accumulated(const std::string& interface, const std::string& name):
  //    signal_base(interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name):
  //    signal_base(path, interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal4<T_return, T_arg1,T_arg2,T_arg3,T_arg4, T_accumulator>(src),
  //    signal_base(interface, name)
  //  {}

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal4<T_return, T_arg1,T_arg2,T_arg3,T_arg4, T_accumulator>(src),
  //    signal_base(path, interface, name)
  //  {}

  //  static pointer create(const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(interface, name) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(path, interface, name) );
  //  }
    
  //  static pointer create(const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(interface, name, src) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(path, interface, name, src) );
  //  }
    
  //  virtual signal_base::pointer clone()
  //  {
  //    return signal_base::pointer( new accumulated(*this) );
  //  }

  //protected:

  //  sigc::connection m_internal_callback_connection;

  //  virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
  //  {
  //    // T_return _retval;
  //      //    
  //    T_arg1 _val_1;
  //    T_arg2 _val_2;
  //    T_arg3 _val_3;
  //    T_arg4 _val_4;

  //    m_internal_callback_connection.block();
    
  //    try {
  //      Message::iterator i = msg->begin();
  //      i  >> _val_1 >> _val_2 >> _val_3 >> _val_4;
  //      this->emit(_val_1,_val_2,_val_3,_val_4);
  //    }
  //    catch ( ErrorInvalidTypecast& e ) {
  //      m_internal_callback_connection.unblock();
  //      return NOT_HANDLED;
  //    }
    
  //    m_internal_callback_connection.unblock();

  //    return HANDLED;
  //  }


  //  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3,T_arg4 arg4)
  //  {
    
  //  }

  //};

  typedef DBusCxxPointer<signal> pointer;
  
  signal(const std::string& interface, const std::string& name):
    signal_base(interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& path, const std::string& interface, const std::string& name):
    signal_base(path, interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4>(src),
    signal_base(interface, name)
  { }

  signal(const std::string& path, const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4>(src),
    signal_base(path, interface, name)
  { }

  static pointer create(const std::string& interface, const std::string& name)
  {
    return pointer( new signal(interface, name) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  {
    return pointer( new signal(path, interface, name) );
  }

  static pointer create(const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(interface, name, src) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(path, interface, name, src) );
  }

  virtual signal_base::pointer clone()
  {
    return signal_base::pointer( new signal(*this) );
  }

  /** Returns a DBus XML description of this interface */
  virtual std::string introspect(int space_depth=0) const
  {
    std::ostringstream sout;
    std::string spaces;
    for (int i=0; i < space_depth; i++ ) spaces += " ";
    sout << spaces << "<signal name=\"" << name() << "\">\n";
    
    T_arg1 arg1;
    sout << spaces << "  <arg name=\"" << m_arg_names[1-1] << "\" type=\"" << signature(arg1) << "\"/>\n";
    T_arg2 arg2;
    sout << spaces << "  <arg name=\"" << m_arg_names[2-1] << "\" type=\"" << signature(arg2) << "\"/>\n";
    T_arg3 arg3;
    sout << spaces << "  <arg name=\"" << m_arg_names[3-1] << "\" type=\"" << signature(arg3) << "\"/>\n";
    T_arg4 arg4;
    sout << spaces << "  <arg name=\"" << m_arg_names[4-1] << "\" type=\"" << signature(arg4) << "\"/>\n";
    sout << spaces << "</signal>\n";
    return sout.str();
  }

  virtual std::string arg_name(size_t i) {
    if ( i < 4 ) return m_arg_names[i];
    return std::string();
  }

  virtual void set_arg_name(size_t i, const std::string& name) {
    if ( i < 4 ) m_arg_names[i] = name;
  }

  protected:

  friend class Interface;

  std::string m_arg_names[4];

  sigc::connection m_internal_callback_connection;

  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3,T_arg4 arg4)
  {
    // DBUS_CXX_DEBUG( "signal::internal_callback: "  << arg1 << arg2 << arg3 << arg4 );
    SignalMessage::pointer __msg = SignalMessage::create(m_path, m_interface, m_name);
    if ( not m_destination.empty() ) __msg->set_destination(m_destination);
    *__msg  << arg1 << arg2 << arg3 << arg4;
    bool result = this->handle_dbus_outgoing(__msg);
    DBUSCXX_DEBUG_STDSTR( "dbus.signal", "signal::internal_callback: result=" << result );
  }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * This class defines a subclass of the sigc::signal types and can be used
 * as its parent. The key difference is that when the signal is emitted
 * a DBus signal message is created using the parameters of the signal
 * emission and transmitted via the dbus in addition to any local
 * signal propagation that may take place.
 *
 * @ingroup signals
 *
 * @ingroup local
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5>
class signal <T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5, nil,nil>
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>, public signal_base
{
public:

  //template <class T_accumulator>
  //class accumulated
  //: public sigc::signal5<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5, T_accumulator>, public signal_base
  //{
  //public:
  //  typedef DBusCxxPointer<accumulated> pointer;
  //
  //  accumulated(const std::string& interface, const std::string& name):
  //    signal_base(interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name):
  //    signal_base(path, interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal5<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5, T_accumulator>(src),
  //    signal_base(interface, name)
  //  {}

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal5<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5, T_accumulator>(src),
  //    signal_base(path, interface, name)
  //  {}

  //  static pointer create(const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(interface, name) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(path, interface, name) );
  //  }
    
  //  static pointer create(const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(interface, name, src) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(path, interface, name, src) );
  //  }
    
  //  virtual signal_base::pointer clone()
  //  {
  //    return signal_base::pointer( new accumulated(*this) );
  //  }

  //protected:

  //  sigc::connection m_internal_callback_connection;

  //  virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
  //  {
  //    // T_return _retval;
  //      //    
  //    T_arg1 _val_1;
  //    T_arg2 _val_2;
  //    T_arg3 _val_3;
  //    T_arg4 _val_4;
  //    T_arg5 _val_5;

  //    m_internal_callback_connection.block();
    
  //    try {
  //      Message::iterator i = msg->begin();
  //      i  >> _val_1 >> _val_2 >> _val_3 >> _val_4 >> _val_5;
  //      this->emit(_val_1,_val_2,_val_3,_val_4,_val_5);
  //    }
  //    catch ( ErrorInvalidTypecast& e ) {
  //      m_internal_callback_connection.unblock();
  //      return NOT_HANDLED;
  //    }
    
  //    m_internal_callback_connection.unblock();

  //    return HANDLED;
  //  }


  //  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3,T_arg4 arg4,T_arg5 arg5)
  //  {
    
  //  }

  //};

  typedef DBusCxxPointer<signal> pointer;
  
  signal(const std::string& interface, const std::string& name):
    signal_base(interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& path, const std::string& interface, const std::string& name):
    signal_base(path, interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>(src),
    signal_base(interface, name)
  { }

  signal(const std::string& path, const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>(src),
    signal_base(path, interface, name)
  { }

  static pointer create(const std::string& interface, const std::string& name)
  {
    return pointer( new signal(interface, name) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  {
    return pointer( new signal(path, interface, name) );
  }

  static pointer create(const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(interface, name, src) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(path, interface, name, src) );
  }

  virtual signal_base::pointer clone()
  {
    return signal_base::pointer( new signal(*this) );
  }

  /** Returns a DBus XML description of this interface */
  virtual std::string introspect(int space_depth=0) const
  {
    std::ostringstream sout;
    std::string spaces;
    for (int i=0; i < space_depth; i++ ) spaces += " ";
    sout << spaces << "<signal name=\"" << name() << "\">\n";
    
    T_arg1 arg1;
    sout << spaces << "  <arg name=\"" << m_arg_names[1-1] << "\" type=\"" << signature(arg1) << "\"/>\n";
    T_arg2 arg2;
    sout << spaces << "  <arg name=\"" << m_arg_names[2-1] << "\" type=\"" << signature(arg2) << "\"/>\n";
    T_arg3 arg3;
    sout << spaces << "  <arg name=\"" << m_arg_names[3-1] << "\" type=\"" << signature(arg3) << "\"/>\n";
    T_arg4 arg4;
    sout << spaces << "  <arg name=\"" << m_arg_names[4-1] << "\" type=\"" << signature(arg4) << "\"/>\n";
    T_arg5 arg5;
    sout << spaces << "  <arg name=\"" << m_arg_names[5-1] << "\" type=\"" << signature(arg5) << "\"/>\n";
    sout << spaces << "</signal>\n";
    return sout.str();
  }

  virtual std::string arg_name(size_t i) {
    if ( i < 5 ) return m_arg_names[i];
    return std::string();
  }

  virtual void set_arg_name(size_t i, const std::string& name) {
    if ( i < 5 ) m_arg_names[i] = name;
  }

  protected:

  friend class Interface;

  std::string m_arg_names[5];

  sigc::connection m_internal_callback_connection;

  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3,T_arg4 arg4,T_arg5 arg5)
  {
    // DBUS_CXX_DEBUG( "signal::internal_callback: "  << arg1 << arg2 << arg3 << arg4 << arg5 );
    SignalMessage::pointer __msg = SignalMessage::create(m_path, m_interface, m_name);
    if ( not m_destination.empty() ) __msg->set_destination(m_destination);
    *__msg  << arg1 << arg2 << arg3 << arg4 << arg5;
    bool result = this->handle_dbus_outgoing(__msg);
    DBUSCXX_DEBUG_STDSTR( "dbus.signal", "signal::internal_callback: result=" << result );
  }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * This class defines a subclass of the sigc::signal types and can be used
 * as its parent. The key difference is that when the signal is emitted
 * a DBus signal message is created using the parameters of the signal
 * emission and transmitted via the dbus in addition to any local
 * signal propagation that may take place.
 *
 * @ingroup signals
 *
 * @ingroup local
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5,class T_arg6>
class signal <T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6, nil>
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>, public signal_base
{
public:

  //template <class T_accumulator>
  //class accumulated
  //: public sigc::signal6<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6, T_accumulator>, public signal_base
  //{
  //public:
  //  typedef DBusCxxPointer<accumulated> pointer;
  //
  //  accumulated(const std::string& interface, const std::string& name):
  //    signal_base(interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name):
  //    signal_base(path, interface, name)
  //  {
  //    m_internal_callback_connection =
  //      this->connect( sigc::mem_fun(*this, &accumulated::internal_callback) );
  //      
  //    m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &accumulated::on_dbus_incoming) );
  //  }

  //  accumulated(const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal6<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6, T_accumulator>(src),
  //    signal_base(interface, name)
  //  {}

  //  accumulated(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src):
  //    sigc::signal6<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6, T_accumulator>(src),
  //    signal_base(path, interface, name)
  //  {}

  //  static pointer create(const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(interface, name) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  //  {
  //    return pointer( new accumulated(path, interface, name) );
  //  }
    
  //  static pointer create(const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(interface, name, src) );
  //  }
    
  //  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const accumulated& src)
  //  {
  //    return pointer( new accumulated(path, interface, name, src) );
  //  }
    
  //  virtual signal_base::pointer clone()
  //  {
  //    return signal_base::pointer( new accumulated(*this) );
  //  }

  //protected:

  //  sigc::connection m_internal_callback_connection;

  //  virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
  //  {
  //    // T_return _retval;
  //      //    
  //    T_arg1 _val_1;
  //    T_arg2 _val_2;
  //    T_arg3 _val_3;
  //    T_arg4 _val_4;
  //    T_arg5 _val_5;
  //    T_arg6 _val_6;

  //    m_internal_callback_connection.block();
    
  //    try {
  //      Message::iterator i = msg->begin();
  //      i  >> _val_1 >> _val_2 >> _val_3 >> _val_4 >> _val_5 >> _val_6;
  //      this->emit(_val_1,_val_2,_val_3,_val_4,_val_5,_val_6);
  //    }
  //    catch ( ErrorInvalidTypecast& e ) {
  //      m_internal_callback_connection.unblock();
  //      return NOT_HANDLED;
  //    }
    
  //    m_internal_callback_connection.unblock();

  //    return HANDLED;
  //  }


  //  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3,T_arg4 arg4,T_arg5 arg5,T_arg6 arg6)
  //  {
    
  //  }

  //};

  typedef DBusCxxPointer<signal> pointer;
  
  signal(const std::string& interface, const std::string& name):
    signal_base(interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& path, const std::string& interface, const std::string& name):
    signal_base(path, interface, name)
  {
    m_internal_callback_connection =
      this->connect( sigc::mem_fun(*this, &signal::internal_callback) );
  }
  
  signal(const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>(src),
    signal_base(interface, name)
  { }

  signal(const std::string& path, const std::string& interface, const std::string& name, const signal& src) :
    sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>(src),
    signal_base(path, interface, name)
  { }

  static pointer create(const std::string& interface, const std::string& name)
  {
    return pointer( new signal(interface, name) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name)
  {
    return pointer( new signal(path, interface, name) );
  }

  static pointer create(const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(interface, name, src) );
  }

  static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal& src)
  {
    return pointer( new signal(path, interface, name, src) );
  }

  virtual signal_base::pointer clone()
  {
    return signal_base::pointer( new signal(*this) );
  }

  /** Returns a DBus XML description of this interface */
  virtual std::string introspect(int space_depth=0) const
  {
    std::ostringstream sout;
    std::string spaces;
    for (int i=0; i < space_depth; i++ ) spaces += " ";
    sout << spaces << "<signal name=\"" << name() << "\">\n";
    
    T_arg1 arg1;
    sout << spaces << "  <arg name=\"" << m_arg_names[1-1] << "\" type=\"" << signature(arg1) << "\"/>\n";
    T_arg2 arg2;
    sout << spaces << "  <arg name=\"" << m_arg_names[2-1] << "\" type=\"" << signature(arg2) << "\"/>\n";
    T_arg3 arg3;
    sout << spaces << "  <arg name=\"" << m_arg_names[3-1] << "\" type=\"" << signature(arg3) << "\"/>\n";
    T_arg4 arg4;
    sout << spaces << "  <arg name=\"" << m_arg_names[4-1] << "\" type=\"" << signature(arg4) << "\"/>\n";
    T_arg5 arg5;
    sout << spaces << "  <arg name=\"" << m_arg_names[5-1] << "\" type=\"" << signature(arg5) << "\"/>\n";
    T_arg6 arg6;
    sout << spaces << "  <arg name=\"" << m_arg_names[6-1] << "\" type=\"" << signature(arg6) << "\"/>\n";
    sout << spaces << "</signal>\n";
    return sout.str();
  }

  virtual std::string arg_name(size_t i) {
    if ( i < 6 ) return m_arg_names[i];
    return std::string();
  }

  virtual void set_arg_name(size_t i, const std::string& name) {
    if ( i < 6 ) m_arg_names[i] = name;
  }

  protected:

  friend class Interface;

  std::string m_arg_names[6];

  sigc::connection m_internal_callback_connection;

  T_return internal_callback(T_arg1 arg1,T_arg2 arg2,T_arg3 arg3,T_arg4 arg4,T_arg5 arg5,T_arg6 arg6)
  {
    // DBUS_CXX_DEBUG( "signal::internal_callback: "  << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 );
    SignalMessage::pointer __msg = SignalMessage::create(m_path, m_interface, m_name);
    if ( not m_destination.empty() ) __msg->set_destination(m_destination);
    *__msg  << arg1 << arg2 << arg3 << arg4 << arg5 << arg6;
    bool result = this->handle_dbus_outgoing(__msg);
    DBUSCXX_DEBUG_STDSTR( "dbus.signal", "signal::internal_callback: result=" << result );
  }

};



} /* namespace DBus */

#endif /* _DBUS_CXX_SIGNAL_H_ */
