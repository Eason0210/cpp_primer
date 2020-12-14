// fact 的函数定义
#include "Chapter6.h"

int fact (int val){
    int rect = 1;
    while (val > 1){
        rect *= val--;
    }
    return rect;
}
