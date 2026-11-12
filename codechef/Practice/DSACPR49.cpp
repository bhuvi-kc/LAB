// Problem: DSACPR49
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/DSACPR49
// Solved on: 2026-11-12T17:49:18.734Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> leaders;
    int mx = INT_MIN;
    
    for (int i = n-1; i >= 0; i--){
        if (arr[i] > mx){
            leaders.push_back(arr[i]);
            mx = arr[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    for (int i = 0; i < leaders.size(); i++){
        cout<<leaders[i]<<" ";
    }
    return 0;
}
