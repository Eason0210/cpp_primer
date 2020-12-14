#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 练习6.2 修改程序中的错误
string f() {
    string s = "hello!";
    return s;
}

void f2 (int i){
    cout << i << endl;
}

double squre (double x){
    return x * x;
}

// 练习6.3 编写 fact 函数

int fact (int val){
    int rect = 1;
    while (val > 1){
        rect *= val--;
    }
    return rect;
}

// 练习6.4 编写交互函数，要求用户输入一个数字，并生成阶乘。
int ifact (){
    int ival;
    int rect = 1;
    cout << "Please in put an Integer number: " << endl;
    if(cin >> ival){
        while (ival > 1)
            rect *= ival--;

    }else{
        cout << "You must input an integer." << endl;
    }
    return rect;
}

// 同上，但这里通过直接调用 fact 函数实现
int i2fact (){
    int ival;
    int rect = 1;
    cout << "Please in put an Integer number: " << endl;
    if(cin >> ival)
        rect = fact(ival);
    else
        cout << "You must input an integer." << endl;
    return rect;
}

// 练习6.10 使用指针形参交换两个整数的值
void changeValue (int *ia, int *ib){
    int temp;
    temp = *ia;
    *ia = *ib;
    *ib = temp;
}

int main(){
    cout << f() << endl;
    f2(10);
    cout << squre(5.1) << endl;
    cout << fact(10) << endl;
    cout << i2fact() << endl;

    // 练习6.10 使用指针形参交换两个整数的值
    int ia = 10, ib =1;

    cout << "ia = " << ia << " " << "ib = " << ib << endl;
    changeValue(&ia, &ib);
    cout << "after calling changeValue function: " << endl;
    cout << "ia = " << ia << " " << "ib = " << ib << endl;
    
    return 0;
}
