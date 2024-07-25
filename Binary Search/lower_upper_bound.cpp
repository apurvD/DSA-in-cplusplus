#include <bits/stdc++.h>
using namespace std;
/* LOWER BOUND
Example 1:
Input Format:
arr[] = {1,2,2,3}, x = 2
Result:
 1
Explanation:
 Index 1 is the smallest index such that arr[1] >= x.

Example 2:
Input Format:
arr[] = {3,5,8,15,19}, x = 9
Result:
 3
Explanation:
 Index 3 is the smallest index such that arr[3] >= x.

Time Complexity: O(logN), where N = size of the given array.
Reason: We are basically using the Binary Search algorithm.

Space Complexity: O(1) as we are using no extra space.
*/

int lower_bound(vector<int> vec, int x)
{
    int left = 0, right = vec.size() - 1;
    int ans=0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (vec[mid] >= x)
        {
            ans=mid;
            right=mid-1;

        }
        else
            left = mid + 1;
    }
    return ans;
}

/*
Example 1:
Input Format:
arr[] = {1,2,2,3}, x = 2
Result:
 3
Explanation:
 Index 3 is the smallest index such that arr[3] > x.

Example 2:
Input Format:
arr[] = {3,5,8,9,15,19}, x = 9
Result:
 4
Explanation:
 Index 4 is the smallest index such that arr[4] > x.
 Time Complexity: O(logN), where N = size of the given array.
Reason: We are basically using the Binary Search algorithm.

Space Complexity: O(1) as we are using no extra space.
*/

int upper_bound(vector<int> vec, int x)
{
    int left = 0, right = vec.size() - 1;
    int ans=0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (vec[mid] > x)
        {
            ans = mid;
            right = mid - 1;          
        }
        else
            left = mid + 1;
    }
    return ans;
}

int main()
{
    // vector<int> v = {1,2,2,3};
    // int x = 2;
    vector<int>v={3,5,8,9,15,19};
    int x = 9;
    cout << "lower bound is :" << lower_bound(v, x) << endl;
    cout << "upper bound is :" << upper_bound(v, x) << endl;
    return 0;
}