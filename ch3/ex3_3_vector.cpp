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

    // 以10分为分数段统计成绩的数量：0~9,10~19,...,90~99,100
    vector<unsigned> scores(11,0);
    unsigned grade;
    while(cin >> grade){
        if(grade <= 100)
            ++scores[grade/10];
        if (getchar() == '\n')  break;
    }

    cout << "the size of scores is: " << scores.size() << endl;
    cout << "the elements in the scores are: " << endl;

    for(auto v : scores)
        cout << v << " ";
    cout << endl;
    // 练习3.16 检验3.13 的结果

    // vector<int> v1{10}; // 在c++98 不合法，在c++11 以上是合法的
    // 可以在编译时加入参数指定C++ 的标准：g++ -std=c++2a -o ex3_3_vector ex3_3_vector.cpp
    // -std=c++11 11标准
    // -std=c++17 17标准
    // =std=c++2a 20标准
    // vector<int> v1 {10,42}; 同上
    vector<int> v1 {10,42};
    cout << "the size of vector: " << v1.size() << endl;
    cout << "the elements of vector are: " << endl;
    for(auto v : v1)
        cout << v << " ";
    cout << endl;

    // 练习3.18 检验语法
    vector<int> ivec;
    // ivec[0] = 42;
    ivec.push_back(42);

    for(auto v : ivec)
        cout << v << " ";
    cout << endl;

    return 0;
}
