/**
 * @file file_util.h
 * @brief C++用のファイル入出力ユーティリティヘッダファイル
 * @author Akira MIDOUCHI
 * @version 0.1
 * @date 2012-09-10
 */

/* Copyright (C) 
 * 2012 - Akira MIDOUCHI
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
// ファイル数の最大値
#define MAX_FILE_NUM 10000

void createSerialNumberedFilenames (int numFiles, std::string filename, std::string path, std::string delim, std::string ext, std::vector<std::string> &numberedFiles);
