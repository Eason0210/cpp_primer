#include <iostream>

using namespace std;
int reused = 42; // global

int main (){
    int unique = 0; // block scope
    cout << reused << " " << unique << endl;
    int reused = 0 ;
    cout << reused << " " << unique << endl;
    cout << ::reused << " " << unique << endl;
    int reused2 = reused;
    cout << reused2 << " " << unique << endl;

    int i = 100, sum = 0;

    for (int i = 0; i != 10; ++i)
        sum += i;
    cout << i << " " << sum << endl;

    int ui, &rui = ui;
    ui = 5; rui = 10;
    cout << ui << " " << rui << endl;

    return 0;
}
