#include <iostream>
#include <string>

int main(){
    std::string line;
    std::cout <<"Please input strings and \"EXIT\" to quit: "<< std::endl;
    while (std::getline(std::cin, line)){
        if (line == "EXIT") break;
        std::cout <<"Line: " << line << std::endl;
    }

    return 0;
}
