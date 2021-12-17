#pragma once
#include<iostream>
#include<ctime>
#include"commandprocess.h"
using namespace std;
class core{
    public:
        //core();
        //~core();
        void process(string &cmd);
        void createDB(string name);
        void useDB(string name);
        void back();
    private:
        commandprocess cmdp;
};