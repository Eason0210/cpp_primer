#include <iostream>
#include <string>
#include <vector>
#include "PersonInfo.h"
#include <sstream>
#include <fstream>


int main(int argc, char* argv[]){
    std::string line, word;
    std::vector<PersonInfo> people;
    std::ifstream input(argv[1]);

    while (std::getline(input, line)){

        PersonInfo info;
        std::istringstream record(line);
        record >> info.name;
        while(record >> word){
            info.phones.push_back(word);
        }
        people.push_back(info);

        // if(std::getchar() == '\n') break;
    }

    for(const auto &entry : people){
        std::cout << entry.name << ": ";
        for(const auto &nums : entry.phones)
            std::cout << nums << ", ";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    return 0;
}


