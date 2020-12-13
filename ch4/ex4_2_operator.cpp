#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    // 练习4.6 判断输入的数字是奇数还是偶数
    int num;
    cout << "Please enter numbers and Enter to exit: " << endl;
    while (cin >> num){
        if (num % 2 == 0)
            cout << num << " is an even number!" << endl;
        else
            cout << num << " is an odd number!" << endl;

        if (getchar() == '\n') break;
    }

    // 练习4.7 什么是溢出？
    short short_val = 32767;
    short_val += 1;
    cout << "short_val: " << short_val << endl;

    // 练习4.15
    double dval;
    int ival;
    int *pi;
    // dval = ival = pi = 0; // 无法将指针pi赋值给ival
    // pi = 0;
    ival =0;
    dval = 0;
    pi = nullptr;


    cout << "dval: " << dval << ' ';
    cout << "ival: " << ival << ' ';
    // cout << "pi: " << *pi << ' ';
    cout << endl;

    // 练习4.27 其表达式的结果
    // ul1 = 0000 0011, ul2 = 0000 0111
    // ul1 & ul2 = 0000 0011 = 3
    // ul1 | ul2 = 0000 0111 = 7
    // ul1 && ul2 = 1(true)
    // ul1 || ul2 = 1(true)
    unsigned long ul1 = 3, ul2 = 7;
    cout << (ul1 & ul2) << endl;
    cout << (ul1 | ul2) << endl;
    cout << (ul1 && ul2) << endl;
    cout << (ul1 || ul2) << endl;

    return 0;
}
