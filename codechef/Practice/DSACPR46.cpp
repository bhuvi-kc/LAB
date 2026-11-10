// Problem: DSACPR46
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/DSACPR46
// Solved on: 2026-11-10T18:00:22.541Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin>>n>>x;
    
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    bool found = false;
    
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            found = true;
            break;
        }
    }
    
    if (found)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}
