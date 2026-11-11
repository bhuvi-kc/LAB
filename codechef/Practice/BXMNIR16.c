// Problem: BXMNIR16
// Platform: codechef
// Language: #include <iostream>
class Base {
public:
    Base() { std::cout << "Base Constructor "; }
    ~Base() { std::cout << "Base Destructor "; }
};

class Derived : public Base {
public:
    Derived() { std::cout << "Derived Constructor "; }
    ~Derived() { std::cout << "Derived Destructor "; }
};

int main(void) {
    Base* obj = new Derived();
    delete obj;
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND04/problems/BXMNIR16
// Solved on: 2026-11-11T15:58:29.392Z

// source not captured automatically - copy it from the editor and use Manual Push