// Problem: DMFNW05
// Platform: codechef
// Language: int sum = accumulate(v.begin(), v.end(), 0); // sum = 18, the sum of elements with initial value 0

  // we can even perform any binary operation with accumulate(), not just addition.
  int mul(int x, int y) { // custom multiplication function
   return x * y;
  }
  int product = accumulate(v.begin(), v.end(), 1, mul); 
  // product = -420. after range, 1 is initial value of product and 
  // mul is our custom binary operation function (multiplication in this case).
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/THAPARVECTOR/problems/DMFNW05
// Solved on: 2026-11-09T19:50:05.526Z

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> v1(v.size());
        partial_sum(v.begin(), v.end(), v1.begin());
        long long p = accumulate(v1.begin(), v1.end(), 1LL, multiplies<long long>());
        if (p % *min_element(v.begin(), v.end()) == 0 && p % *max_element(v.begin(), v.end()) == 0){
            cout<<p<<" YES\n";
        }
        else{
            cout<<p<<" NO\n";
        }
    }
    return 0;
}