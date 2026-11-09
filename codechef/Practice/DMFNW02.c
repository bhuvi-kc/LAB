// Problem: DMFNW02
// Platform: codechef
// Language: vector<int> v;
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/THAPARVECTOR/problems/DMFNW02
// Solved on: 2026-11-09T18:48:55.937Z

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (n % 2 != 0 && n % 3 == 0) {
            int mid = n / 2;
            cout << v[mid] << endl;
        }
        else if (n % 2 == 0 && n % 3 == 0) {
            cout << v[0] << " " << v[n-1] << endl;
        }
        else {
            cout << v[0] + v[n - 1] << endl;
        }
    }
    return 0;
}