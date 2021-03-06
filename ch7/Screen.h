#include <string>

class Screen {
    friend class Window_mgr;
public :
    using pos = std::string::size_type;
    Screen() = default;

    Screen(pos ht, pos wd, char c): height(ht), width(wd),
                                    contents(ht * wd, c) {}

    char get() const {return contents[cursor];}
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);

    void some_member() const;

    Screen &set(char);
    Screen &set(pos, pos, char);

    // 根据对象是否是 Const 重载了 display 函数
    Screen &display(std::ostream &os)
        { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const
        { do_display(os); return *this; }

    // 练习7.33 添加size 成员
    pos size() const;

private:
    pos cursor = 0;
    pos height =0, width = 0;
    std::string contents;

    mutable size_t access_ctr;

    //显示 Screen 的内容
    void do_display(std::ostream &os) const {os << contents;}
};

inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const{
    pos row = r * width;
    return contents[row+c];
}

void Screen::some_member() const{
    ++access_ctr; // 保存一个计数值，用于记录成员函数被调用的次数
    // 该成员函数可能还会做别的事情
}

inline Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch){
    contents[r*width + col] = ch;
    return *this;
}


// 练习7.33 添加 size 成员
Screen::pos
Screen::size() const{
    return height * width;
}
