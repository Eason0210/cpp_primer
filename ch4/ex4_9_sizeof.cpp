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

    // 练习5.3 使用逗号运算符改写 while 循环为 for 循环
    // 观察可读性是提高了，还好是降低了。
    int sum = 0;

    for(int i = 1; i != 11; ++i)
        sum += i;
    cout << "sum of 1 .. 9 = " << sum << endl;

    return 0;
}
