#include <iostream>
#include "Window_mgr.h"

using namespace std;

int main(){
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";

    cout << "The size of myScreen is: " << myScreen.size() << endl;

    return 0;
}
