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
        void useDB();
        void useTable();
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
        vector<string> Parameter;
};