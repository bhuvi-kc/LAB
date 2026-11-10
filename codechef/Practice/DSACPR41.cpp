// Problem: DSACPR41
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK06/problems/DSACPR41
// Solved on: 2026-11-10T12:49:46.073Z

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[100] = {4, 5, 3, 10, 12, 18}; // Initial array
                     // Current size of the array

    int newPosition = 5; // Index where you want to insert the new element
    int newElement = 7; // Element to be inserted
    int size = 6;
    // Shift elements to make space for the new element
    for (int i = size-1; i >= newPosition; i--){
        arr[i+1] = arr[i];
    }



    // Insert the new element at the specified position
    arr[newPosition] = newElement;

    // Update the size of the array
    size++;
    // Print the updated array
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}