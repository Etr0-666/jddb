#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main(){
    std::regex reg("\\s+(\\S+)");
    std::smatch match;
    const std::string& input = "createDB aaa dda";
    string::const_iterator bg = input.begin();
    std::string::const_iterator ed = input.end();
    std::regex_search(bg, ed, match, reg);
    std::string command = match[1];
    std::cout << command << std::endl;
    bg=match[0].second;
    std::regex_search(bg, ed, match, reg);
    command = match[1];
    std::cout << command << std::endl;
    std::cout << match.size();
}