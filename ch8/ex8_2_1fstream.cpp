#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Function Protocol
std::ifstream&
process_input( std::ifstream& ,
               std::vector<std::string>&);

int main(int argc, char* argv[]){

    std::ifstream input(argv[1]);
    std::vector<std::string> vcontents;

    if (input)
        process_input(input, vcontents);

    std::cout << "This file have " << vcontents.size()
              << " lines: " << std::endl;

    for(const auto &elem : vcontents){
        std::cout << elem << " ";
        if (elem[elem.size() - 1] == '.')
            std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}

// Function implement
std::ifstream&
process_input( std::ifstream& fstr,
               std::vector<std::string>& vec ){
    std::string temp;
    // while (fstr >> temp)  // input by word
    while (std::getline(fstr, temp)) // input by line
        vec.push_back(temp);
    return fstr;
}
