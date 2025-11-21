/*
Exercise 7.32: Define your own versions of Screen and Window_mgr
in which clear is a member of Window_mgr and a friend of Screen.
*/

#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    ScreenIndex addScreen(const Screen &s) {
        screens.push_back(s);
        return screens.size() - 1;
    }
private:
    vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i) {
    if(i >= screens.size()) {
        throw std::out_of_range("Screen index out of range");
    }
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}


class Screen {
    friend void Window_mgr::clear(ScreenIndex);
    public:
        using pos = string::size_type;
        Screen() = default;
        Screen(pos ht, pos wd) : Screen(ht,wd,' ') {}
        Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
        
        char get() const {
            return contents[cursor];
        }
        
        inline char get(pos r, pos c) const;
        
        Screen &move(pos r, pos c);
        Screen &set(char);
        Screen &set(pos, pos, char);
        Screen &display(std::ostream &os) {
            do_display(os);
            return *this;
        }
        const Screen &display(std::ostream &os) const {
            do_display(os);
            return *this;
        }

        void check(pos &r, pos &c) const {
            if(r >= height || c >= width) {
                throw std::out_of_range("Row or Column out of range");
            }
        }
        
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        string contents;
        
        void do_display(std::ostream &os) const {
            os << contents;
        }
};

Screen &Screen::move(pos r, pos c) {
    check(r, c);
    cursor = r * width + c;
    return *this;
}

inline char Screen::get(pos r, pos c) const {
    check(r, c);
    pos row = r * width;
    return contents[row + c];
}

Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

Screen &Screen::set(pos r, pos c, char ch) {
    check(r, c);
    contents[r * width + c] = ch;
    return *this;
}