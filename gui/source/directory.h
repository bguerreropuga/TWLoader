/*  This file is part of Checkpoint
>	Copyright (C) 2017 Bernardo Giordano
>
>   This program is free software: you can redistribute it and/or modify
>   it under the terms of the GNU General Public License as published by
>   the Free Software Foundation, either version 3 of the License, or
>   (at your option) any later version.
>
>   This program is distributed in the hope that it will be useful,
>   but WITHOUT ANY WARRANTY; without even the implied warranty of
>   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
>   GNU General Public License for more details.
>
>   You should have received a copy of the GNU General Public License
>   along with this program.  If not, see <http://www.gnu.org/licenses/>.
>   See LICENSE for information.
*/

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <3ds.h>
#include "stringutil.h"
#include <codecvt>
#include <locale>
#include <string>
#include <vector>

class Directory
{
public:
	Directory(FS_Archive archive, std::u16string root);
	Result getError(void);
	bool getLoaded(void);
	std::u16string getItem(size_t index);
	bool isFolder(size_t index);
	size_t getCount(void);

private:
	std::vector<FS_DirectoryEntry> list;
	Result error;
	bool loaded;
};

#endif