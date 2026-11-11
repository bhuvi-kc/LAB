// Problem: BXMNIR18
// Platform: codechef
// Language: #include <iostream>
void increment(int* x) { (*x)++; }
void increment(int& x) { ++x; }

int main(void) {
    int a = 5;
    increment(a);
    std::cout << "a:" << a << std::endl;
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND04/problems/BXMNIR18
// Solved on: 2026-11-11T16:12:26.987Z

// source not captured automatically - copy it from the editor and use Manual Push