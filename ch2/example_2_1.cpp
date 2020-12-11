#include <iostream>

using namespace std;
std::string global_str;
int global_int;

int main(){

    // bool b = 42;
    // cout << "bool b = 42, and the b is " << b << endl;
    // int i = b;
    // cout << "int i = b, and the value of i is " << i << endl;
    // i = 3.14;
    // cout << "int i = 3.14, and the value of i is " << i << endl;
    // double pi = i;
    // cout << "double pi = i, and the value of pi is " << pi << endl;
    // unsigned char c = -1; // 超出范围，显示不正确结果
    // cout << "unsigned char c = 1; and the c is " << c << endl;
    // signed char c2 = 256; // 类型转换时溢出
    // cout << "signed char c2 = 256; and the c2 is " << c2 << endl;
    cout << "-------------------------------------" << endl;
    unsigned u = 10, u2 = 42;
    cout << u2 -u << endl;
    cout << u - u2 << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    int i = 10 , i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;
    cout << "a really, really long string\n literal "
        "that span2.!" << endl;
    cout << "---------------------------------------" << endl;
    cout << "2\tM\n";

    int intValue = 3.14;
    // int intValue2 = {3.1415}
    cout << intValue << endl;
    int local_int;
    string local_str;
    cout << "global_str =" << global_str << endl;
    cout << "global_int =" << global_int << endl;
    cout << "local_str =" << local_str << endl;
    cout << "local_int =" << local_int << endl;    
    return 0;

}
