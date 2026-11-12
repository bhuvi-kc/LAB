// Problem: DSACPR49
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/DSACPR49
// Solved on: 2026-11-12T13:26:07.939Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++){
        if (i == n-1 || arr[i] > *max_element(arr+i+1, arr+n)){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
