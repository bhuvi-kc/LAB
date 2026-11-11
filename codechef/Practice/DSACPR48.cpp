// Problem: DSACPR48
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/DSACPR48
// Solved on: 2026-11-11T15:01:13.758Z

class Solution {
    public: int countNonMinimum(vector < int > & nums) {
        int n = nums.size();
        int M = * min_element(nums.begin(), nums.end());

        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > M) {
                count++;
            }
        }
        return count;
    }
};