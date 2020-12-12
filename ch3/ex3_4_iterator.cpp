#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(){
    //练习3.22 将text的第一段全部改成大写，在输出
    vector<string> text{"hello world!","","I start to learn C++!"};
    for(auto it = text.cbegin();
        it != text.cend() && !it->empty(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    unsigned spcnt = 0;
    for(auto it = text.begin();
        it != text.end(); ++it){

        if (it->empty())
            ++ spcnt;

        if(!it->empty() && spcnt != 1){
            for(auto &s : *it)
                s = toupper(s);

        }

        cout << *it << " ";
    }
    cout << endl;

    //练习3.23 将元素的值变成原来的2倍
    vector<int> numbs(10,10);
    for(auto it = numbs.begin();
        it != numbs.end(); ++it){
        *it = 2* (*it);
        cout << *it << " ";
    }
    cout << endl;

    // 练习3.24：读入一组整数，存入一个vector
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

    auto beg = numbers.begin(), end = numbers.end();
    auto mid = numbers.begin() + (end - beg)/2;
    --end;
    while(beg < mid){
        cout << (*beg)+(*end) << " ";
        ++ beg;
        -- end;
    }
    cout << endl;

    // 以10分为分数段统计成绩的数量：0~9,10~19,...,90~99,100 (通过迭代器实现)
    vector<unsigned> scores(11,0);
    unsigned grade;
    auto beg = scores.begin();
    while(cin >> grade){
        if(grade <= 100){
            // ++scores[grade/10];
            decltype(scores.size()) dis = grade / 10;
            ++(*(beg+dis));
        }

        if (getchar() == '\n')  break;
    }

    cout << "the size of scores is: " << scores.size() << endl;
    cout << "the elements in the scores are: " << endl;

    for(auto v : scores)
        cout << v << " ";
    cout << endl;


    return 0;
}
