/* Copyright (C) 2019 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

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

#include <sys/wait.h>
#include <sysdep.h>
#include <sysdep-cancel.h>

/* Wait until a child PID has changed state */
__pid_t
__waitpid (__pid_t pid, int *stat_loc, int options)
{
  return SYSCALL_CANCEL (waitpid, pid, stat_loc, options);
}
libc_hidden_def (__waitpid)
weak_alias (__waitpid, waitpid)