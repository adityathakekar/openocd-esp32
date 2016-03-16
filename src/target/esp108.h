/***************************************************************************
 *   Copyright (C) 2015 by Angus Gratton                                   *
 *   gus@projectgus.com                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.           *
 ***************************************************************************/

#ifndef XTENSA_H
#define XTENSA_H

#include <jtag/jtag.h>
#include "breakpoints.h"

enum xtensa_state {
	XT_NORMAL,
	XT_OCD_RUN,
	XT_OCD_HALT,
};

struct esp108_common {
//	struct jtag_tap *tap;
	enum xtensa_state state;
	struct reg_cache *core_cache;
	struct target *target;

//	uint32_t num_brps; /* Number of breakpoints available */
//	uint32_t free_brps; /* Number of free breakpoints */
//	struct breakpoint **hw_brps;
};


#endif /* XTENSA_H */
