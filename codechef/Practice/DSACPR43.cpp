// Problem: DSACPR43
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK06/problems/DSACPR43
// Solved on: 2026-11-10T13:18:30.464Z

#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr1[100] = {2, 4, 6}; // First array
    int size1 = 3;

    int arr2[100] = {8, 10, 12, 14}; // Second array
    int size2 = 4;

    // Update the code below to solve the problem
    
    int arr[200];
    for (int i = 0; i < size1; i++){
        arr[i] = arr1[i];
    }
    
    for (int i = 0; i < size2; i++){
        arr[size1+i] = arr2[i];
    }
    
    int mergedSize = size1 + size2;
    
    
    
    
    // Print the merged array
    for(int i=0 ; i<mergedSize ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}