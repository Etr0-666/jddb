#include <regex>
#include <iostream>
#include <string>
using namespace std;
int main(){
    

    //regex e("(\\w)\\W(\\w)(\\W)(\\w)\\W(\\w)");
    //regex rule2("(abc)\\W(def)");
    //string str2="abc def";
    string str="createDB dasdas";
    regex rule("(\\S+)\\s*.*");
    smatch sm;
    if(!regex_match(str,sm,rule)) cout << "1" << endl;
    cout << sm.size() << endl;
    cout << sm[1] << endl;
}