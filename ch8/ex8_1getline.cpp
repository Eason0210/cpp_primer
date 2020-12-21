#include <iostream>
#include <string>

int main(){
    std::string line;
    std::cout <<"Please input strings and \"EXIT\" to quit: "<< std::endl;
    while (std::getline(std::cin, line)){
        if (line == "EXIT") {
            std::cout <<"The Program have been quick!"<< std::endl;
            break;
        }
        std::cout <<"Line: " << line << std::endl;
    }

    return 0;
}
