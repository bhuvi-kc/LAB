// Problem: DSACPR45
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/DSACPR45
// Solved on: 2026-11-10T17:41:18.923Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    cout<<sum;
    
    return 0;
}
