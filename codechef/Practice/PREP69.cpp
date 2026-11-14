// Problem: PREP69
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/PREP69
// Solved on: 2026-11-14T20:03:47.788Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        
        int k = 0;
        
        for (int i = 1; i < n; i++){
            if (arr[i] != arr[k]){
                k++;
                arr[k] = arr[i];
            }
        }
        
        cout << k+1 << endl;
        
        for (int i = 0; i <= k; i++){
            cout << arr[i] << " ";
        }
        
        cout<<endl;
    }
    
    return 0;
}
