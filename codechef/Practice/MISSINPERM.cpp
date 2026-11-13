// Problem: MISSINPERM
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/MISSINPERM
// Solved on: 2026-11-13T19:55:38.195Z

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n; 
        n = nums.size();
        
        int expSum;
        int actSum;
        
        expSum = ((n)*(n+1))/2;
        actSum = 0;
        for (int i = 0; i < n; i++){
            actSum += nums[i];
        }
        
        int output = expSum - actSum;
        
        return output;
    }
};
