/*
Exercise 7.23: Write your own version of the Screen class.
*/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;


class Screen {
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

int main() {
    Screen scr1; // Default constructor
    Screen scr2(5, 10); // Constructor with height and width
    Screen scr3(4, 8, '*'); // Constructor with height, width, and character

    scr2.display(cout);
    scr3.display(cout);

    scr2.set(2, 5, '#').display(cout);
    scr3.move(1, 1).set('@').display(cout);

    return 0;
}