#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main(){
    string input;
    regex rule("createDB\\s(\\S*)");
    smatch command;
    while(getline(cin,input)){
        if(!regex_match(input,command,rule)){
        cout << "input invalid" << endl;
        }
        else{
            cout << command[1] << endl;
        }
    }
}