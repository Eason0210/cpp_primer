#include <iostream>
#include <string>

// Function Protocol
std::istream&
process_input( std::istream& is );


int main(){
    auto old_state = std::cin.rdstate();
    std::cin.clear();
    process_input(std::cin);
    std::cin.setstate(old_state);

    return 0;
}


// Function implement
std::istream&
process_input( std::istream& is ){
    std::string input;
    is >> input;
    std::cout << "Your input is: " << input;
    return is;
}
