/* Copyright (C) 2018-2019 Rocket Software
   This file is part of the GNU C Library.
   Contributed by Giancarlo Frix <gfrix@rocketsoftware.com>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include <sys/types.h>
#include <sysdep.h>

/* Get the effective user ID of the calling process.  */
uid_t
__geteuid (void)
{
  /* TODO: Avoid this stack frame.  */
  return INLINE_SYSCALL_CALL (geteuid);
}
libc_hidden_def (__geteuid)
weak_alias (__geteuid, geteuid)