/**
 * @file file_util.cpp
 * @brief C++用のファイル入出力ユーティリティ
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

#include "file_util.h"

/**
 * @brief 連番ファイル名を作成する関数
 *
 * @param numFiles 作成するファイル名の数（仕様上、現在MAX_NUM_FILE個まで）
 * @param filename 連番の前につけるファイル名
 * @param path ファイル名の前につけるパス名
 * @param delim ファイル名と連番の間に入れる区切り文字
 * @param ext 連番の後ろにつくファイル拡張子名
 * @param numberedFiles 作成した連番ファイル名を格納する配列
 */
void createSerialNumberedFilenames (int numFiles, std::string filename, std::string path, std::string delim, std::string ext, std::vector<std::string> &numberedFiles)
{
    // 配列の初期化
    // numberedFiles.clear();
    
    // ファイル数のバリデーション
    if(numFiles <= 0 || numFiles > MAX_FILE_NUM){
        std::cerr << "Incorrect number of files. It should be 0 < numFiles <= MAX_NUM_FILE"<< std::endl;
        return;
    }
    
    for(int i = 0; i < numFiles; ++i){
        // ファイルへのフルパス作成
        std::stringstream fileFullPath;
        fileFullPath << path << filename << delim << std::setw(4) << std::setfill('0') << i << "." << ext;
        // 配列へ格納
        numberedFiles.push_back(fileFullPath.str());
    }
    
    return;
}
