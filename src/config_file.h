/* Copyright (c) 2016 Daniel Molkentin
   Author: Daniel Molkentin <dmolkentin@suse.com>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation in version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, see <http://www.gnu.org/licenses/>. */

#include "rebootmgr.h"
#include "calendarspec.h"

#ifndef __CONFIG_FILE_H__
#define __CONFIG_FILE_H__

void save_config (RM_CTX *ctx);
void load_config (RM_CTX *ctx);
char *get_file_content (const char *fname);

#endif /* __CONFIG_FILE_H__ */
