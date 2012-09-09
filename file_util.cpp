/*
 * =====================================================================================
 *
 *       Filename:  file_util.cpp
 *
 *    Description:  C++用のファイル入出力向けユーティリティ関数群
 *
 *        Version:  1.0
 *        Created:  2012/09/10 00時04分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Akira MIDOUCHI (am), a083747@edu.tut.ac.jp
 *   Organization:  
 *
 * =====================================================================================
 */
#include "file_util.h"

/* 
 * ===  FUNCTION  ======================================================================
 *  Name:  createFilenameStrings
 *  Description:  連番ファイル名を作成する関数
 *  \param numFiles 作成するファイル名の数（仕様上、現在は１万個まで）
 *  \param filename ファイル名
 *  \param path ファイル名の前につけるパス名
 *  \param delim ファイル名と連番の間に入れる区切り文字
 *  \param ext 連番の後ろにつくファイル拡張子名
 *  \param numberedFiles 作成した連番ファイル名を格納する配列
 * =====================================================================================
 */
void createSerialNumberedFilenames (int numFiles, std::string filename, std::string path, std::string delim, std::string ext, std::vector<std::string> &numberedFiles)
{
	// 配列の初期化
	numberedFiles.clear();

	// ファイル数のバリデーション
	if(numFiles <= 0 || numFiles > MAX_FILE_NUM){
		std::cerr << "Incorrect number of files. It should be 0 < numFiles <= MAX_NUM_FILE"<< std::endl;
		return;
	}

	for(int i = 0; i < numFiles; ++i){
		// ファイルへのフルパス作成
		std::stringstream fileFullPath;
		fileFullPath << path << filename << delim << std::setw(4) << std::setfill('0') << i << ext;
		// 配列へ格納
		numberedFiles.push_back(fileFullPath.str());
	}

	return;
}		/* -----  end of function createSerialNumberedFilenames  ----- */
