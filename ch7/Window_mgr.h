#include <vector>
#include "Screen.h"

class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    //向窗口添加一个 Screen ,返回它的编号
    ScreenIndex addScreen(const Screen&);


private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};

};

void Window_mgr::clear(ScreenIndex i){
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

// 首先处理返回类型，之后才能进行 Windows_mgr 类的作用域
Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen &s){
    screens.push_back(s);
    return screens.size() -1;
}
