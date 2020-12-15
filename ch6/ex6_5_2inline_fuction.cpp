#include <iostream>
#include <string>
#include <cassert>
#include <vector>

using namespace std;

// 内联函数版本
inline const string &
shorterString(const string &s1, const string &s2){
    return s1.size() <= s2.size() ? s1 : s2;
}

void f(){
    cout << "I am f()" << endl;

}

void f(int i){
    cout << "I am f(int)" << endl;

}

void f(int i, int j){
    cout << "I am f(int, int)" << endl;

}

void f(double i, double j){
    cout << "I am f(double, double)" << endl;

}

//练习6.54 and 6.65 函数指针类型的向量
int addValue(int a, int b){
    return a + b;
}

int mulValue(int a, int b){
    return a * b;
}

int main(){

    string s1{"Hello"};
    string s2{"world!"};

    cout << shorterString(s1, s2) << endl;
    assert(shorterString(s1, s2) == "Hello");
    f(42);

    //练习6.54 and 6.65 函数指针类型的向量
    vector<int (*)(int, int)> vec{addValue};

    vec.push_back(mulValue);
    cout << "vec[0](10,15) = " << vec[0](10,15) << endl;
    cout << "vec[1](10,15) = " << vec[1](10,15) << endl;

    return 0;
}
