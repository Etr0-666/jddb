#include"file.h"
void file::createFolder(string folder_name){
    _mkdir(folder_name.c_str());
}