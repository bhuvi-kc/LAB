// Problem: DMFNW08
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/THAPARVECTOR/problems/DMFNW08?tab=statement
// Solved on: 2026-11-09T21:02:03.110Z

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        bool found = false;
        for (int i = 0; i < n-1; i++){
            if (v[i] == v[i+1]){
                found = true;
                break;
            }
        }
        if (found) cout<<"YES"<<" "<<endl;
        else cout<<"NO"<<" "<<endl;
    }
    return 0;
}