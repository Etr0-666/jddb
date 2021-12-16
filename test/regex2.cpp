#include <regex>
#include <iostream>
#include <string>
using namespace std;
int main(){
    

    //regex e("(\\w)\\W(\\w)(\\W)(\\w)\\W(\\w)");
    //regex rule2("(abc)\\W(def)");
    //string str2="abc def";
    string str="createDB test";
    regex rule("(?!createDB)\\s(\\S+)");
    smatch sm;
    if(!regex_match(str,sm,rule)) cout << 0 << endl;

    //regex_search(str2,sm,rule2);
    //cout << sm.prefix() << endl;
    cout << sm[1] << endl;
}