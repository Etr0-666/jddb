#pragma once
#include<iostream>
#include<string>
#include<regex>
using namespace std;
class commandprocess{
    public:
        commandprocess();
        commandprocess(string &str);
        void createDB();
        void createTable();
        void openDB();
        void openTable();
        void insert();
        void add();
        void update();
        void del();
        void select();
        void back();
        void help();
    private:
        bool valid;
        string input;
};