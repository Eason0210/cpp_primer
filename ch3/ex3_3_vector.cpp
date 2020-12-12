#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
    // 练习3.14：读入一组整数，存入一个vector
    int num;
    vector<int> numbers;
    while(cin >> num){
        numbers.push_back(num);
        if (getchar() == '\n')  break;
    }

    cout << "the size of vector is: " << numbers.size() << endl;
    cout << "the elements in the vector are: " << endl;

    for(auto v : numbers)
        cout << v << " ";
    cout << endl;

    // 练习3.15：读入一组字符串，存入一个vector
    string str;
    vector<string> text;
    while(cin >> str){
        text.push_back(str);
        if (getchar() == '\n')  break;
    }

    cout << "the size of vector is: " << text.size() << endl;
    cout << "the elements in the vector are: " << endl;

    for(auto v : text)
        cout << v << " ";
    cout << endl;

    return 0;
}
