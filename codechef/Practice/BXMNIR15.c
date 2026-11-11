// Problem: BXMNIR15
// Platform: codechef
// Language: #include <iostream>
class A {
    int x;
public:
    A(int x) : x(x) {}
    int getX() const { return x; }
};

int main(void) {
    A* obj = nullptr;
    std::cout << obj->getX() << std::endl;
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND04/problems/BXMNIR15
// Solved on: 2026-11-11T15:32:36.592Z

// source not captured automatically - copy it from the editor and use Manual Push