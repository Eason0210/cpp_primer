#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    // 练习3.43 三个版本的程序，输出多维数组ia的元素
    int ia[3][4] ={
        0,1,2,3,
        4,5,6,7,
        8,9,10,11
    };

    // 1. 使用范围 for 循环，不使用 auto
    cout << "使用范围 for 循环，不使用 auto 的 ia：" << endl;
    for(const int (&row)[4] : ia)
        for(const int col : row)
            cout << col << ' ';
    cout << endl;

    // 2. 使用普通 for 循环和下标
    cout << "使用普通 for 循环和下标的 ia：" << endl;
    for (size_t i = 0; i != 3; ++i)
        for(size_t j = 0; j != 4; ++j)
            cout << ia[i][j] << ' ';
    cout << endl;

    // 3. 使用普通 for 循环和指针(可以根据需要加上 const)
    cout << "使用普通 for 循环和指针的 ia：" << endl;
    for(const int (*p)[4] = ia; p != ia + 3; ++p)
        for(const int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
    cout << endl;

    // 练习3.44 - 3. 使用普通 for 循环和指针，以及类型别名
    using int_array = int[4];

    cout << "使用类型别名，普通 for 循环和指针的 ia：" << endl;
    for(int_array *p = ia; p != ia + 3; ++p)
        for(int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
    cout << endl;
    // 练习3.45 1.使用 auto 和标准库 begin\end 关键字实现上面的程序
    cout << "使用普通 for 循环和指针,auto 以及begin标准库函数的 ia：" << endl;
    for(auto p = begin(ia); p != end(ia); ++p)
        for(auto q = begin(*p); q != end(*p) ; ++q)
            cout << *q << ' ';
    cout << endl;
    // 练习3.45 2. 使用范围 for 循环，并使用 auto（如果加 const，则每层都要加）
    cout << "使用范围 for 循环，并使用 auto 的 ia：" << endl;
    for(auto &row : ia)
        for(auto col : row)
            cout << col << ' ';
    cout << endl;
    // 总结：如果只是为了遍历二维数组的所以元素，auto+范围 for 循环的方法是最方便的
    
    return 0;
}
