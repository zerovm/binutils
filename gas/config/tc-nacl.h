/* tc-nacl.h -- Header file for tc-nacl.c
   Copyright 1989, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000,
   2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009
   Free Software Foundation, Inc.

   This file is part of GAS, the GNU Assembler.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to the Free
   Software Foundation, 51 Franklin Street - Fifth Floor, Boston, MA
   02110-1301, USA.  */

#ifndef TC_NACL
#define TC_NACL 1

#include "tc-i386.h"

#undef ELF_TARGET_FORMAT
#define ELF_TARGET_FORMAT "elf32-nacl"

#undef ELF_TARGET_FORMAT64
#define ELF_TARGET_FORMAT64 "elf64-nacl"

#define elf_tc_final_processing nacl_elf_final_processing
extern void nacl_elf_final_processing PARAMS ((void));

#endif /* TC_NACL */
