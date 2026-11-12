// Problem: DSACPR50
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/DSACPR50
// Solved on: 2026-11-12T20:39:37.942Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int n;
        cin>>n;
        vector<long long> nums(n);
        for (int i = 0; i < n; i++){
            cin>>nums[i];
        }
        
        long long cur = nums[0];
        long long best = nums[0];
        
        for (int i = 1; i < n; i++){
            cur = max(nums[i], cur+nums[i]);
            best = max(best, cur);
        }
        
        cout<<best<<"\n";
    }
return 0;
}