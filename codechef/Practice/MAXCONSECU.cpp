// Problem: MAXCONSECU
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/MAXCONSECU
// Solved on: 2026-11-12T21:05:52.642Z

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n;
    n = nums.size();
    long long cur = 0;
    long long best = 0;
    
    for (int i = 0; i < n; i++){
        if (nums[i] == 1){
            cur++;
        }
        else{
            cur = 0;
        }
        
        best = max(best, cur);
    }
    
    return best;
}
