#include"commandprocess.h"
commandprocess::commandprocess(){
    valid=true;
}
commandprocess::commandprocess(string &str){
    valid=true;
    input = str;
}
void commandprocess::createDB(){
    regex rule("(?!createDB)\\s(\\S*)");
    smatch name;
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
void commandprocess::help(){

}