#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using std::cout;using std::endl;
using std::string;
using std::vector;
using std::sort;using std::stable_sort;


// Declare of function
void elimDups(vector<string>&);
bool isShorter(const string&, const string&);

// Main function
// 练习10.11 （10.3.1 向算法传递函数）
int main(){

    vector<string> storys{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    vector<string> storys2{storys.begin(), storys.end()};
    // remove duplicates
    elimDups(storys);

    // print vectors
    cout << "sorted story: " << endl;
    for(const auto &elem : storys){
        cout << elem << " ";
    }
    cout << endl;

    cout <<"unsorted story2: " << endl;
    for(const auto &elem : storys2){

        cout << elem << " ";
    }
    cout << endl;

    // sorted by  stable_sort with isShorter
    elimDups(storys2);
    stable_sort(storys2.begin(), storys2.end(), isShorter);

    cout <<"stable sorted story2 by isShorter: " << endl;
    for(const auto &elem : storys2){
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}

// implement functions
void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const string& s1, const string& s2){
    return s1.size() < s2.size();
}
