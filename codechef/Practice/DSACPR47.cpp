// Problem: DSACPR47
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/DSACPR47
// Solved on: 2026-11-10T19:19:47.362Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while (T--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int max = *max_element(arr, arr+n);
        cout<<max;
    }
    return 0;
}
