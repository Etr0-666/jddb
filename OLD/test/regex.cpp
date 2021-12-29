#include <regex>
#include <iostream>
#include <string>

int main() {
    std::string target = "@abc def--";
    std::regex e("(\\w+)");
    std::smatch sm; 
    std::regex_search(target, sm, e); 

    std::cout << "sm.prefix: " << sm.prefix() << std::endl;
    std::cout << sm[2] << std::endl;
    /*
    for (int i = 0; i < sm.size(); ++i) {
        std::cout << "sm[" << i << "]: " << sm[i] << std::endl;
    }   
    std::cout << "sm.suffix: " << sm.suffix() << std::endl;
    */
    return 0;
}