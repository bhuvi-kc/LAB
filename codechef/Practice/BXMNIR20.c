// Problem: BXMNIR20
// Platform: codechef
// Language: #include <iostream>
class Base {
public:
    virtual void show() {
        std::cout << "A\n";
    }

    void display() {
        std::cout << "Display A\n";
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "B\n";
    }

    void display() {
        std::cout << "Display B\n";
    }
};

int main() {
    Base* b = new Derived();
    b->show();
    b->display();
    delete b;
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND04/problems/BXMNIR20
// Solved on: 2026-11-11T16:18:24.587Z

// source not captured automatically - copy it from the editor and use Manual Push