#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<io.h>
#include<direct.h>
using namespace std;
class file{
    public:
        void createFolder(string folder_name);
        void deleteFolder(string folder_name);
        void renameFolder(string before_name, string after_name);
        void showFiles();
};