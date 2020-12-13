#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    // 练习4.28 输出内置类型所占用空间的大小
    cout << "size of char: " << sizeof(char) << endl;
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of double: " << sizeof(double) << endl;
    cout << "size of string: " << sizeof(string) << endl;
    cout << "size of bool: " << sizeof(bool) << endl;
    cout << "size of short: " << sizeof(short) << endl;
    cout << "size of long: " << sizeof(long) << endl;
    cout << "size of long long: " << sizeof(long long) << endl;

    // 练习4.29 下面的结果一样吗？
    int x[10]; int *p = x;
    cout << "size of p " << sizeof(p) << endl;
    cout << "size of *p " << sizeof(*p) << endl;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
    return 0;
}
