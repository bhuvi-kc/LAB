// Problem: MAJORELEM
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/MAJORELEM
// Solved on: 2026-11-12T18:39:04.298Z

class Solution {
public:
    int majorityElement(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size()/2];
    }
};
