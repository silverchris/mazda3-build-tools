
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
#include <dbus-cxx/signal_proxy_base.h>

#ifndef DBUSCXX_SIGNALPROXY_H_
#define DBUSCXX_SIGNALPROXY_H_

namespace DBus {
  /**
   * @example signal_receiver_c.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   * 
   */

  /**
   * @example signal_receiver_raw.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */

  /**
   * @example signal_receiver.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */

  /**
   * @example signal_receiver_2.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */

  /**
   * @example signal_receiver_object.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */

  /**
   * @example signal_emitter_c.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */

  /**
   * @example signal_emitter_raw.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */
  
  /**
   * @example signal_emitter.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */

  /**
   * @example signal_emitter_2.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */

  /**
   * @example signal_emitter_3.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */
      
  /**
   * @example signal_emitter_object.cpp
   *
   * This example is part of a series of examples that demonstrate signal
   * emission/handling in a variety of ways.
   *
   * This group of examples are:
   * <ul>
   *   <li> Signal Emitters
   *   <ul>
   *     <li> @c signal_emitter_c.cpp - Signal emission with the dbus C API
   *     <li> @c signal_emitter_raw.cpp - Signal emission with a manually created message
   *     <li> @c signal_emitter.cpp - Signal emission with a DBus::signal
   *     <li> @c signal_emitter_2.cpp - Signal emission with a DBus::signal and a local connection as well
   *     <li> @c signal_emitter_3.cpp - Dispatched signal emission and a local connection
   *     <li> @c signal_emitter_object.cpp - Signal emission with a DBus::Object derived class
   *   </ul>
   *   <li> Signal Handlers
   *   <ul>
   *     <li> @c signal_receiver_c.cpp - Signal handling with the dbus C API
   *     <li> @c signal_receiver_raw.cpp - Signal handling with a manual loop similar to the C API example
   *     <li> @c signal_receiver.cpp - Signal handling with a dispatcher and raw DBus signal demarshalling
   *     <li> @c signal_receiver_2.cpp - Signal handling with a dispatcher and automatic demarshalling
   *     <li> @c signal_receiver_object.cpp - Signal handling with a DBus::ObjectProxy derived class
   *   </ul>
   * </ul>
   *
   * Here is this example:
   *
   */

  
/**
 * Subclass of the numbered sigc::signal templates.
 *
 * @ingroup signals
 * @ingroup proxy
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1 = nil,class T_arg2 = nil,class T_arg3 = nil,class T_arg4 = nil,class T_arg5 = nil,class T_arg6 = nil,class T_arg7 = nil>
class signal_proxy 
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7>, public signal_proxy_base
{
  public:

    typedef DBusCxxPointer<signal_proxy> pointer;
  
    signal_proxy(const std::string& interface, const std::string& name):
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name):
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7>(src),
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6,T_arg7>(src),
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    static pointer create(const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(interface, name) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(path, interface, name) ); }

    static pointer create(const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(interface, name, src) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(path, interface, name, src) ); }

    virtual signal_base::pointer clone()
    { return signal_base::pointer( new signal_proxy(*this) ); }

  protected:

    virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
    {
      //T_return _retval;
            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;
      T_arg4 _val_4;
      T_arg5 _val_5;
      T_arg6 _val_6;
      T_arg7 _val_7;

      try {
        
        Message::iterator i = msg->begin();
        i  >> _val_1 >> _val_2 >> _val_3 >> _val_4 >> _val_5 >> _val_6 >> _val_7;
        
        this->emit(_val_1,_val_2,_val_3,_val_4,_val_5,_val_6,_val_7);
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
    
      return HANDLED;
    }

};



/**
 * Subclass of the numbered sigc::signal templates.
 *
 * @ingroup signals
 * @ingroup proxy
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return>
class signal_proxy <T_return, nil,nil,nil,nil,nil,nil,nil>
  : public sigc::signal<T_return>, public signal_proxy_base
{
  public:

    typedef DBusCxxPointer<signal_proxy> pointer;
  
    signal_proxy(const std::string& interface, const std::string& name):
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name):
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return>(src),
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return>(src),
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    static pointer create(const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(interface, name) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(path, interface, name) ); }

    static pointer create(const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(interface, name, src) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(path, interface, name, src) ); }

    virtual signal_base::pointer clone()
    { return signal_base::pointer( new signal_proxy(*this) ); }

  protected:

    virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
    {
      //T_return _retval;
            

      try {
        
        this->emit();
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
    
      return HANDLED;
    }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * @ingroup signals
 * @ingroup proxy
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1>
class signal_proxy <T_return, T_arg1, nil,nil,nil,nil,nil,nil>
  : public sigc::signal<T_return, T_arg1>, public signal_proxy_base
{
  public:

    typedef DBusCxxPointer<signal_proxy> pointer;
  
    signal_proxy(const std::string& interface, const std::string& name):
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name):
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1>(src),
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1>(src),
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    static pointer create(const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(interface, name) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(path, interface, name) ); }

    static pointer create(const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(interface, name, src) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(path, interface, name, src) ); }

    virtual signal_base::pointer clone()
    { return signal_base::pointer( new signal_proxy(*this) ); }

  protected:

    virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
    {
      //T_return _retval;
            
      T_arg1 _val_1;

      try {
        
        Message::iterator i = msg->begin();
        i  >> _val_1;
        
        this->emit(_val_1);
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
    
      return HANDLED;
    }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * @ingroup signals
 * @ingroup proxy
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2>
class signal_proxy <T_return, T_arg1,T_arg2, nil,nil,nil,nil,nil>
  : public sigc::signal<T_return, T_arg1,T_arg2>, public signal_proxy_base
{
  public:

    typedef DBusCxxPointer<signal_proxy> pointer;
  
    signal_proxy(const std::string& interface, const std::string& name):
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name):
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2>(src),
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2>(src),
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    static pointer create(const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(interface, name) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(path, interface, name) ); }

    static pointer create(const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(interface, name, src) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(path, interface, name, src) ); }

    virtual signal_base::pointer clone()
    { return signal_base::pointer( new signal_proxy(*this) ); }

  protected:

    virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
    {
      //T_return _retval;
            
      T_arg1 _val_1;
      T_arg2 _val_2;

      try {
        
        Message::iterator i = msg->begin();
        i  >> _val_1 >> _val_2;
        
        this->emit(_val_1,_val_2);
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
    
      return HANDLED;
    }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * @ingroup signals
 * @ingroup proxy
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2,class T_arg3>
class signal_proxy <T_return, T_arg1,T_arg2,T_arg3, nil,nil,nil,nil>
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3>, public signal_proxy_base
{
  public:

    typedef DBusCxxPointer<signal_proxy> pointer;
  
    signal_proxy(const std::string& interface, const std::string& name):
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name):
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3>(src),
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3>(src),
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    static pointer create(const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(interface, name) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(path, interface, name) ); }

    static pointer create(const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(interface, name, src) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(path, interface, name, src) ); }

    virtual signal_base::pointer clone()
    { return signal_base::pointer( new signal_proxy(*this) ); }

  protected:

    virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
    {
      //T_return _retval;
            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;

      try {
        
        Message::iterator i = msg->begin();
        i  >> _val_1 >> _val_2 >> _val_3;
        
        this->emit(_val_1,_val_2,_val_3);
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
    
      return HANDLED;
    }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * @ingroup signals
 * @ingroup proxy
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4>
class signal_proxy <T_return, T_arg1,T_arg2,T_arg3,T_arg4, nil,nil,nil>
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4>, public signal_proxy_base
{
  public:

    typedef DBusCxxPointer<signal_proxy> pointer;
  
    signal_proxy(const std::string& interface, const std::string& name):
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name):
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4>(src),
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4>(src),
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    static pointer create(const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(interface, name) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(path, interface, name) ); }

    static pointer create(const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(interface, name, src) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(path, interface, name, src) ); }

    virtual signal_base::pointer clone()
    { return signal_base::pointer( new signal_proxy(*this) ); }

  protected:

    virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
    {
      //T_return _retval;
            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;
      T_arg4 _val_4;

      try {
        
        Message::iterator i = msg->begin();
        i  >> _val_1 >> _val_2 >> _val_3 >> _val_4;
        
        this->emit(_val_1,_val_2,_val_3,_val_4);
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
    
      return HANDLED;
    }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * @ingroup signals
 * @ingroup proxy
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5>
class signal_proxy <T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5, nil,nil>
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>, public signal_proxy_base
{
  public:

    typedef DBusCxxPointer<signal_proxy> pointer;
  
    signal_proxy(const std::string& interface, const std::string& name):
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name):
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>(src),
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5>(src),
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    static pointer create(const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(interface, name) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(path, interface, name) ); }

    static pointer create(const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(interface, name, src) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(path, interface, name, src) ); }

    virtual signal_base::pointer clone()
    { return signal_base::pointer( new signal_proxy(*this) ); }

  protected:

    virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
    {
      //T_return _retval;
            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;
      T_arg4 _val_4;
      T_arg5 _val_5;

      try {
        
        Message::iterator i = msg->begin();
        i  >> _val_1 >> _val_2 >> _val_3 >> _val_4 >> _val_5;
        
        this->emit(_val_1,_val_2,_val_3,_val_4,_val_5);
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
    
      return HANDLED;
    }

};


/**
 * Subclass of the numbered sigc::signal templates.
 *
 * @ingroup signals
 * @ingroup proxy
 *
 * @author Rick L Vinyard Jr <rvinyard@cs.nmsu.edu>
 */
template <class T_return, class T_arg1,class T_arg2,class T_arg3,class T_arg4,class T_arg5,class T_arg6>
class signal_proxy <T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6, nil>
  : public sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>, public signal_proxy_base
{
  public:

    typedef DBusCxxPointer<signal_proxy> pointer;
  
    signal_proxy(const std::string& interface, const std::string& name):
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name):
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>(src),
      signal_proxy_base(interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    signal_proxy(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src) :
      sigc::signal<T_return, T_arg1,T_arg2,T_arg3,T_arg4,T_arg5,T_arg6>(src),
      signal_proxy_base(path, interface, name)
    { m_signal_dbus_incoming.connect( sigc::mem_fun(*this, &signal_proxy::on_dbus_incoming) ); }

    static pointer create(const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(interface, name) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name)
    { return pointer( new signal_proxy(path, interface, name) ); }

    static pointer create(const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(interface, name, src) ); }

    static pointer create(const std::string& path, const std::string& interface, const std::string& name, const signal_proxy& src)
    { return pointer( new signal_proxy(path, interface, name, src) ); }

    virtual signal_base::pointer clone()
    { return signal_base::pointer( new signal_proxy(*this) ); }

  protected:

    virtual HandlerResult on_dbus_incoming( SignalMessage::const_pointer msg )
    {
      //T_return _retval;
            
      T_arg1 _val_1;
      T_arg2 _val_2;
      T_arg3 _val_3;
      T_arg4 _val_4;
      T_arg5 _val_5;
      T_arg6 _val_6;

      try {
        
        Message::iterator i = msg->begin();
        i  >> _val_1 >> _val_2 >> _val_3 >> _val_4 >> _val_5 >> _val_6;
        
        this->emit(_val_1,_val_2,_val_3,_val_4,_val_5,_val_6);
      }
      catch ( ErrorInvalidTypecast& e ) {
          return NOT_HANDLED;
      }
    
      return HANDLED;
    }

};



} /* namespace DBus */

#endif /* _DBUS_CXX_SIGNALPROXY_H_ */
