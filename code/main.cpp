#include"commandprocess.h"
#include"core.h"
int main(){
    string cmd;
    core db;
    while(getline(cin,cmd)){
        db.process(cmd);
    }
    return 0;
}