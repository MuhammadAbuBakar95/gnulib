/* Test the Unicode character Arabic joining type functions.
   Copyright (C) 2011 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2011.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "unictype.h"

#include <string.h>

#include "macros.h"

int
main ()
{
  ASSERT (uc_joining_type_byname ("U") == UC_JOINING_TYPE_U);
  ASSERT (uc_joining_type_byname ("T") == UC_JOINING_TYPE_T);
  ASSERT (uc_joining_type_byname ("C") == UC_JOINING_TYPE_C);
  ASSERT (uc_joining_type_byname ("L") == UC_JOINING_TYPE_L);
  ASSERT (uc_joining_type_byname ("R") == UC_JOINING_TYPE_R);
  ASSERT (uc_joining_type_byname ("D") == UC_JOINING_TYPE_D);
  ASSERT (uc_joining_type_byname ("X") < 0);
  ASSERT (uc_joining_type_byname ("") < 0);

  return 0;
}