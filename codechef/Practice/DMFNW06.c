// Problem: DMFNW06
// Platform: codechef
// Language: vector<int> v = {2, 3, 5, 6, 3};
 replace(v.begin(), v.end(), 3, 8); // now, v = {2, 8, 5, 6, 8} as all old values 3 get replaced with 8
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/THAPARVECTOR/problems/DMFNW06
// Solved on: 2026-11-09T20:02:09.129Z

#include<bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int x;
    cin>>n>>x;
    // for(int i = 0; i < n; i++){
    //     cout<<i<<" "<<endl;
    // }
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    replace(v.begin(), v.end(), x, (x+1));
    for (int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}