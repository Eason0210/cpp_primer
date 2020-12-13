#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    // 练习3.31 设置数组每个元素的值为其下标
    int num[10] = {};
    unsigned index = 0;

    for(auto &arr : num){
        arr = index;
        ++index;
    }

    for(auto arr : num){
        cout << arr << " ";
    }
    cout << endl;

    // 练习3.32 拷贝数组的值给另一个数组 
    int num2[10];
    index = 0;
    for(auto &arr : num2){
        arr = num[index];
        ++index;
    }

    for(auto arr : num2){
        cout << arr << " ";
    }
    cout << endl;

    return 0;
}
