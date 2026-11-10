// Problem: DPNMAO23
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK06/problems/DPNMAO23
// Solved on: 2026-11-10T14:31:40.523Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    unordered_set<int> s;
    
    for (int i = 0; i < n; i++){
        if (s.count(arr[i]) == 0){
            s.insert(arr[i]);
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
