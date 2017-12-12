// { dg-do compile }
// 1999-09-20 bkoz

// Copyright (C) 1999-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.


// 27.6.2.1 basic_ostream
// NB: This file is for testing ostream with NO OTHER INCLUDES.

#include <ostream>
#include <testsuite_hooks.h>
#include <testsuite_character.h>

namespace std
{
  using __gnu_test::pod_char;
  typedef short type_t;
  template class basic_ostream<type_t, char_traits<type_t> >;
  template class basic_ostream<pod_char, char_traits<pod_char> >;
} // test
