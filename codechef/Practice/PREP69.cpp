// Problem: PREP69
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/PREP69
// Solved on: 2026-11-14T19:01:02.187Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        
        for (int i = 0; i < n-1; i++){
            if (arr[i] == arr[i+1]){
                int posToDel = i+1;
                for (int j = posToDel; j < n-1; j++){
                    arr[j] = arr[j+1];
                }
                n--;
                i--;
            }
        }
        
        cout<<n<<endl;
        for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
