#include"commandprocess.h"
commandprocess::commandprocess(){
    nice = 1;
}
void commandprocess::printout(){
    cout << nice;
}
int main(){
    commandprocess test;
    test.printout();
}