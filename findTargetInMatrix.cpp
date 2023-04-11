#include <bits/stdc++.h>

#include <vector>
using namespace std;

bool findTargetInMatrix(vector< vector<int> > arr, int M, int N, int target){
    int left = 0;
    int right = M * N - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        int midVal = arr[mid / N][mid % N];
        
        if (midVal == target) return true;
        else if (midVal < target)    left = mid + 1;
        else right = mid - 1;
    }

	return false;
}

// Time Complexity
// Binary Search - O(Log N)

// Memory Consumed - 4347 kB
