#include<bits/stdc++.h>
using namespace std;


int binarySearchIterative(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Target found at index mid
        }
        if (arr[mid] < target) {
            left = mid + 1;  // Search in the right half
        } else {
            right = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Target not found
}
/* iterative analysis

Space Complexity	O(1)
Time Complexity	    O(logn)
Generally better than recursive
more efficient memory usage
no risk of stack overflow
large datasets

*/

int binarySearchRecursive(const std::vector<int>& arr, int target, int left, int right) {
    if (left > right) {
        return -1;  // Target not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;  // Target found at index mid
    }
    if (arr[mid] < target) {
        return binarySearchRecursive(arr, target, mid + 1, right);  // Search in the right half
    } else {
        return binarySearchRecursive(arr, target, left, mid - 1);  // Search in the left half
    }
}
// TC O(logn)
// SC O(logn)
//risk of overflow

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 7;

    int result = binarySearchIterative(arr, target);
    if (result != -1) {
        std::cout << "Target found at index " << result << std::endl;
    } else {
        std::cout << "Target not found" << std::endl;
    }

    return 0;
}