#include <fstream>
#include <iostream>
#include <string>
#include "TextQuery.h"
#include "QueryResult.h"


//Function Protocol
void runQueries( std::ifstream& );

int main(int argc, char*argv[]){
    std::ifstream input(argv[1]);
    runQueries(input);
    return 0;
}


// Function implement

void runQueries( std::ifstream &infile){
    TextQuery tq(infile);
    while (true){
        std::cout << "Enter word to look for, or q to quit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout, tq.query(s)) << std::endl;
    }
}
