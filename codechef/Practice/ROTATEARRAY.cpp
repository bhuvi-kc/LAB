// Problem: ROTATEARRAY
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/ROTATEARRAY
// Solved on: 2026-11-10T18:49:10.522Z

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
       
       reverse(nums.begin(), nums.end());
       reverse(nums.begin(), nums.begin()+k);
       reverse(nums.begin()+k, nums.end());
        
    }
};
