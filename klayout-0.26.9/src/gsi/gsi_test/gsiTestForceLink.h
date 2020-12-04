
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#ifndef HDR_gsiTestForceLink
#define HDR_gsiTestForceLink

#include "tlDefs.h"

#if defined(MAKE_GSI_TEST_LIBRARY)
#  define GSI_TEST_PUBLIC DEF_INSIDE_PUBLIC
#else
#  define GSI_TEST_PUBLIC DEF_OUTSIDE_PUBLIC
#endif

/**
 *  @file Include this function to force linking of the drc module
 */

namespace gsi_test
{
  GSI_TEST_PUBLIC int _force_link_f ();
  static int _force_link_target = _force_link_f ();
}

#endif

