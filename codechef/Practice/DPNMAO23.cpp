// Problem: DPNMAO23
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK06/problems/DPNMAO23
// Solved on: 2026-11-10T14:11:59.736Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    for (int i = 0; i < n-1; i++){
        if (arr[i] == arr[i+1]){
            for (int j = i+1; j < n-1; j++){
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
        
    }
    
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
