// Problem: BXMNIR19
// Platform: codechef
// Language: #include <iostream>
class Base {
public:
    virtual void print() {
        std::cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "Derived\n";
    }
};

int main() {
    Base* b = new Derived();
    b->print();
    delete b;
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND04/problems/BXMNIR19
// Solved on: 2026-11-11T16:15:59.387Z

// source not captured automatically - copy it from the editor and use Manual Push