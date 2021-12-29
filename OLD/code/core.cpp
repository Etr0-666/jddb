#include"core.h"
void core::process(string &cmd){
    cmdp.setInput(cmd);
    cmdp.process();
    if(cmdp._valid()){
        string temp=cmdp.getKeyword();
        if(temp=="createDB"){createDB(cmdp.getParameter()[0]);}
    }
}
void core::createDB(string name){
    fileio.createFolder(name.c_str());
}