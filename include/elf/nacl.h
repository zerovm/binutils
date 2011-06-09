/* ix86 ELF support for BFD.
   Copyright 1998, 1999, 2000, 2002, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef _ELF_NACL_H
#define _ELF_NACL_H

/* e_flags settings for NativeClient. */
#define EF_NACL_ALIGN_MASK  0x300000	/* bits indicating alignment */
#define EF_NACL_ALIGN_32    0x200000	/* aligned zero mod 32 */ 
#define EF_NACL_ALIGN_LIB   0x000000	/* aligned to pass either way */

/* ABI version number -- increment when ABI changes are incompatible. */
#define EF_NACL_ABIVERSION  7
/* For x86-64 the version number is still zero, until a stable point. */

#endif
