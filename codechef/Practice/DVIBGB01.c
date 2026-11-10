// Problem: DVIBGB01
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK06/problems/DVIBGB01
// Solved on: 2026-11-10T13:36:10.059Z

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}

