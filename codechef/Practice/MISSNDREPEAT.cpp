// Problem: MISSNDREPEAT
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/MISSNDREPEAT
// Solved on: 2026-11-14T18:09:24.020Z

class Solution {
public:
    vector<int> findRepeatingAndMissing(const vector<int>& arr) {
        long long n = arr.size();
        
        long long expSum = (n*(n+1))/2;
        long long expSqrSum = (n*(n+1)*((2*n)+1)) / 6;
        
        long long actualSum = 0;
        long long actSqrSum = 0;
        
        for (int i = 0; i < n; i++){
            actualSum += arr[i];
            actSqrSum += 1LL * arr[i] * arr[i];
        }
        
        long long sumDiff = actualSum - expSum;
        long long sqrDiff = actSqrSum - expSqrSum;
        
        long long sumRM = sqrDiff / sumDiff;
        
        long long repeating = (sumDiff + sumRM) / 2;
        long long missing = sumRM - repeating;
        
        return {(int)repeating, (int)missing};
    }
};
