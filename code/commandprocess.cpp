#include"commandprocess.h"
commandprocess::commandprocess(){
    valid=true;
}
commandprocess::commandprocess(string &str){
    valid=true;
    input=str;
}
void commandprocess::process(){
    regex rule("(\\S+)\\s*.*");
    smatch command;
    if(!regex_match(input,command,rule)){
        valid=false;
        cout << "input invalid" << endl;
        help(0);
    }
    else{
        valid=true;
        keyword=command[1];
        if(keyword=="createDB"){createDB();}
        else if(keyword=="createTable"){createTable();}
        else{cout << "input invalid" << endl;
        help(0);}
    }
}
void commandprocess::createDB(){
    cout << "commandprocess::createDB()" << endl;
    regex rule("createDB\\s(\\S+)");
    smatch name;
    if(!regex_match(input,name,rule)){
        valid=false;
        cout << "input invalid" << endl;
        help(1);
    }
    else{
        Parameter.push_back(name[1]);
        cout << Parameter[0] << endl;
    }
}
void commandprocess::createTable(){

}
void commandprocess::useDB(){

}
void commandprocess::useTable(){
    
}
void commandprocess::insert(){

}
void commandprocess::add(){

}
void commandprocess::update(){

}
void commandprocess::del(){

}
void commandprocess::select(){

}
void commandprocess::back(){

}
void commandprocess::help(int i){
    switch (i)
    {
    case 0:
        cout << "Please enter the following keyword:" << endl;
        cout << "createDB" <<endl;
        cout << "createTable" << endl;
        cout << "useDB" << endl;
        cout << "useTable" << endl;
        cout << "insert" << endl;
        cout << "add" << endl;
        cout << "update" << endl;
        cout << "del" << endl;
        cout << "select" << endl;
        cout << "back" << endl;
        break;
    case 1:
        cout << "usage: createDB <Database NAME>" << endl;
    default:
        break;
    }
}
string& commandprocess::getKeyword(){
    return keyword;
}
void commandprocess::setInput(string &cmd){
    input=cmd;
}
bool commandprocess::_valid(){
    return valid;
}
vector<string>& commandprocess::getParameter(){
    return Parameter;
}