/*
 * stubby
 *
 * Copyright (c) 2020 Cisco Systems, Inc. <pmoore2@cisco.com>
 *
 * This file was originally copied from systemd under the LGPL-2.1+ license
 * and that license has been preserved in this project.  The systemd source
 * repository can be found at https://github.com/systemd/systemd.
 *
 */

/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#ifndef __STUBBY_PE_H
#define __STUBBY_PE_H

EFI_STATUS pe_memory_locate_sections(CHAR8 *base, CHAR8 **sections,
				     UINTN *addrs, UINTN *offsets,
				     UINTN *sizes);
EFI_STATUS pe_file_locate_sections(EFI_FILE *dir, CHAR16 *path,
				   CHAR8 **sections, UINTN *addrs,
				   UINTN *offsets, UINTN *sizes);

#endif
