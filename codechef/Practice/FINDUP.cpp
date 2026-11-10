// Problem: FINDUP
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK06/problems/FINDUP
// Solved on: 2026-11-10T17:27:12.928Z

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 0; i < n + 1; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + (n+1));
        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[i + 1]) {
                cout << arr[i + 1] << endl;
            }
        }
    }   
    
    return 0;
}