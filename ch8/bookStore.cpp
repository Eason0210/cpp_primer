#include <iostream>
#include <string>
#include "Sales_data.h"
#include <fstream>

using namespace std;

ifstream &read(ifstream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ofstream &print(ofstream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
//练习8.7 书店程序，从文件输入销售记录，并输出到文件中
// ex. 从 salesfile 输入, 输出到 outputfile 中
int main(int argc, char* argv[]){
    ifstream input(argv[1]);
    ofstream output(argv[2]);
    // append 模式，将会把输入文件追加到文件末尾
    // ofstream output(argv[2],ofstream::app);
    Sales_data total;
    if (read (input, total)){
        Sales_data trans;
        while(read(input,trans)){
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else{
                print(output, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    }else{
        cerr << "No data?!" << endl;
    }
    return 0;
}
