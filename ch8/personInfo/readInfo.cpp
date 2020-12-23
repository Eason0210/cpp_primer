#include <iostream>
#include <string>
#include <vector>
#include "PersonInfo.h"
#include <sstream>


int main(){
    std::string line, word;
    std::vector<PersonInfo> people;

    while (std::getline(std::cin, line)){


        PersonInfo info;
        std::istringstream record(line);
        record >> info.name;
        while(record >> word){
            info.phones.push_back(word);
        }
        people.push_back(info);

        if(std::getchar() == '\n') break;
    }

    for(const auto &item : people){
        std::cout << item.name << ": ";
        for(const auto &phone : item.phones)
            std::cout << phone << ", ";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
