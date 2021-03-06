//////////////////////////////////////////////////////////////////////////////
//
// (C) Copyright Ion Gaztanaga 2005-2012.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.lslboost.org/LICENSE_1_0.txt)
//
// See http://www.lslboost.org/libs/container for documentation.
//
//////////////////////////////////////////////////////////////////////////////

#ifndef BOOST_CONTAINER_DETAIL_VALUE_INIT_HPP
#define BOOST_CONTAINER_DETAIL_VALUE_INIT_HPP

#if defined(_MSC_VER)
#  pragma once
#endif

#include "config_begin.hpp"
#include <lslboost/container/detail/workaround.hpp>

namespace lslboost {
namespace container {
namespace container_detail {

template<class T>
struct value_init
{
   value_init()
      : m_t()
   {}

   operator T &() { return m_t; }

   T m_t;
};

}  //namespace container_detail {
}  //namespace container {
}  //namespace lslboost {

#include <lslboost/container/detail/config_end.hpp>

#endif   //#ifndef BOOST_CONTAINER_DETAIL_VALUE_INIT_HPP
