// Problem: BXMNIR22
// Platform: codechef
// Language: #include <iostream>
using namespace std;

class Tracker {
private:
    static int objectCount;

public:
    Tracker() { objectCount++; }

    ~Tracker() { objectCount--; }

    static int getObjectCount() {
        return objectCount;
    }
};

int Tracker::objectCount = 0;

void createAndDestroy() {
    static Tracker temp1;
}

int main() {
    Tracker obj1, obj2;

    cout << "Count 1: " << Tracker::getObjectCount();

    for(int i = 0; i < 5; i++)
        createAndDestroy();

    cout << " Count 2: " << Tracker::getObjectCount() << endl;

    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-uta018-oops-cpp-2026/EPIRND04/problems/BXMNIR22
// Solved on: 2026-11-11T16:22:32.991Z

// source not captured automatically - copy it from the editor and use Manual Push