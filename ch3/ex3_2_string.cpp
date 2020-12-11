#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
// using std::cout;using std::endl;using std::cin;
// using std::string;

int main(){
    string str("Some string!!!");
    // 通过范围 for 统计字符串中标点符号的个数
    decltype(str.size()) punct_cnt = 0;
    for (auto c : str)
        if (ispunct (c))
            ++punct_cnt;
    cout << punct_cnt
         << " punctuation characters in \""
         << str << "\"" << endl;

    // 通过范围 for 改变字符串中的字符
    for (auto &c : str)
        c = toupper(c);
    cout << str << endl;

    if (!str.empty())
        str[0] = tolower(str[0]);
    cout << str << endl;

    // 通过范围 for 将字符串中的第一个单词转为小写（或大写）字符
    for (decltype(str.size()) index = 0;
         index != str.size() && !isspace(str[index]); ++index)
        str[index] = tolower(str[index]);
    cout << str << endl;

    // // 使用下标执行随机访问
    // const string hexdigits = "0123456789ABCDEF";
    // cout << "Enter a series of numbers between 0 and 15"
    //      << " separated by space. Hit ENTER when finished: "
    //      << endl;
    // string result;
    // string::size_type n;
    // while (cin >> n)
    //     if (n < hexdigits.size())
    //         result += hexdigits[n];
    // cout << "Your hex number is: " << result << endl;

    // 练习3.6：使用范围 for 语句将字符串内所有字符用 X 代替
    for (auto &c : str)
        c = 'X';
    cout << str << endl;


    // 练习3.7：将循环变量类型设置为 char 类型，会发生什么？
    for (char &c : str)
        c = 'a';
    cout << str << endl;

    // 获取每个字符的类型
    for (auto &c : str)
        cout << typeid(c).name();
    cout << endl;
    // 3.9: 下面的程序合法吗？如果不合法，为什么？答：在C++17 中是合法的。
    string s;
    cout << s[0] << endl;

    // 3.10 去除字符串中的标点符号
    string sp("he,llo!!!");
    for(auto &c : sp){
        if (ispunct(c))
            c = ' ';
    }
    cout << sp << endl;

    // 3.11 下面的范围 for 合法吗？如果合法， c 的类型是什么？
    // 答：合法，c 的类型是 const char&
    const string sc = "Keep out!";
    for (auto &c : sc){
        cout << c;
        // c = 'x';// 如果尝试修改字符的值，将会报错。因为c 是常量引用。
    }
    cout << endl;

    return 0;
}
