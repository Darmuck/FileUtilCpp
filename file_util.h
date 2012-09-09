/*
 * =====================================================================================
 *
 *       Filename:  file_util.h
 *
 *    Description:  file_utilのヘッダファイル
 *
 *        Version:  1.0
 *        Created:  2012/09/10 00時41分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Akira MIDOUCHI (am), a083747@edu.tut.ac.jp
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

#define MAX_FILE_NUM 10000

void createSerialNumberedFilenames (int numFiles, std::string filename, std::string path, std::string delim, std::string ext, std::vector<std::string> &numberedFiles);
