// Problem: DMFNW07
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/THAPARVECTOR/problems/DMFNW07
// Solved on: 2026-11-09T20:26:21.637Z

#include<bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int m;
    cin >> n >> m;
    vector < int > v1(n);
    for (int i = 0; i < v1.size(); i++) {
        cin >> v1[i];
    }
    // *min_element(v1.begin(), v1.end());
    vector < int > v2(m);
    for (int i = 0; i < v2.size(); i++) {
        cin >> v2[i];
    }
    // *min_element(v2.begin(), v2.end());
    if (is_sorted(v1.begin(), v1.end()) && is_sorted(v2.begin(), v2.end())) {
        vector<int> v(n + m);
        merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
    }
    else if (n>m){
        reverse(v1.begin(), v1.end());
    }
    else{
        reverse(v2.begin(), v2.end());
    }
    return 0;
}