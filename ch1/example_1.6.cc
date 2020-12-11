#include <iostream>
#include "Sales_item.h"
using namespace std;

int main (){
    Sales_item total; //保存下一条记录的变量

    if (cin >> total){
        Sales_item trans;
        while (cin >> trans){
            if (total.isbn() == trans.isbn()){
                total += trans;
            }else{
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }else{
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
