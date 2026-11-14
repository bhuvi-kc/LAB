// Problem: REMOVEDUPLIC
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK07/problems/REMOVEDUPLIC
// Solved on: 2026-11-14T18:36:58.593Z

int removeDuplicates(vector<int>& nums) {
   int n = nums.size();
   
   for (int i = 0; i < n-1; i++){
       if (nums[i] == nums[i+1]){
           int posToDel = i+1;
           for (int j = posToDel; j < n-1; j++){
               nums[j] = nums[j+1];
           }
           n--;
           i--;
       }
   }
   
//   cout<<n<<endl;
//   for (int i = 0; i < n; i++){
//       cout<<nums[i]<<" ";
//   }
   
   return n;
}
