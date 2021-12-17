#pragma once
#include<iostream>
#include<string>
#include<regex>
using namespace std;
class commandprocess{
    public:
        commandprocess();
        commandprocess(string &str);
        void process();
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
        void help(int i);
        string& getKeyword();
        void setInput(string &cmd);
        bool _valid();
        vector<string>&getParameter();
    private:
        bool valid;
        string input;
        string keyword;
        vector<string> Parameter;
};