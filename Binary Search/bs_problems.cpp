/* Striver's A2Z DSA playlist
Binary Search Problems:

Whenever the word “sorted” or other similar terminologies are used in an array question, BINARY SEARCH can be one of the approaches.
lot of problems can be solved using the lower and upper bound concepts as well.
Initially consider the start=0 and the end=n-1 pointers and the result as -1.
*/
#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &vec, int x)
{
    int left = 0, right = vec.size() - 1;
    int ans = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (vec[mid] >= x)
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return ans;
}

int upper_bound(vector<int> vec, int x)
{
    int left = 0, right = vec.size() - 1;
    int ans = 0;
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

/*
Q1)Search Insert Position

Problem Statement: You are given a sorted array arr of distinct values and a target value x.
You need to search for the index of the target value in the array.
If the value is present in the array, then return its index.
Otherwise, determine the index where it would be inserted in the array while maintaining the sorted order.
Example 1:
Input Format: arr[] = {1,2,4,7}, x = 6
Result: 3
Explanation: 6 is not present in the array. So, if we will insert 6 in the 3rd index(0-based indexing), the array will still be sorted. {1,2,4,6,7}.

Example 2:
Input Format: arr[] = {1,2,4,7}, x = 2
Result: 1
Explanation: 2 is present in the array and so we will return its index i.e. 1.

this is basically asking us to find the lower bound. (return index of the position)
*/
int search_insert_position(vector<int> nums, int x)
{
    int left = 0, right = nums.size() - 1;
    int ans = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= x)
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return ans;
}

/*
Q2)
Floor and Ceil in Sorted Array

Problem Statement: You're given an sorted array arr of n integers and an integer x.
Find the floor and ceiling of x in arr[0..n-1].
The floor of x is the largest element in the array which is smaller than or equal to x.
The ceiling of x is the smallest element in the array greater than or equal to x.

Example 1:
Input Format: arr[] ={3, 4, 4, 7, 8, 10}, x= 5
Result: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

Example 2:
Input Format: arr[] ={3, 4, 4, 7, 8, 10}, x= 8
Result: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.

so, ceil is basically the lower bound.
there is no such algo for floor.
Time Complexity: O(logN), where N = size of the given array.
Reason: We are basically using the Binary Search algorithm.

Space Complexity: O(1) as we are using no extra space.

*/
int floor(vector<int> nums, int x)
{
    int ans = -1;
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + right - left / 2;
        if (nums[mid] <= x)
        {
            ans = nums[mid];
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return ans;
}
int ceil(vector<int> nums, int x)
{
    int ans = -1;
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= x)
        {
            ans = nums[mid];
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return ans;
}

/*
Q3)
First and Last occurrence in a sorted array
Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key.
If the target is not found then return -1.
Note: Consider 0 based indexing

Example 1:
Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
Output: 4
Explanation: As the target value is 13 , it appears for the first time at index number 2, and last time at the index number 4

Example 2:
Input: N = 7, target=60, array[] = {3,4,13,13,13,20,40}
Output: -1
Explanation: Target value 60 is not present in the array

need to use binary search so that TC=O(logN) and SC=O(1)
*/
int first_occurence(vector<int> nums, int x)
{
    int left = 0, right = nums.size() - 1;
    int first = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == x)
        {
            first = mid;
            right = mid - 1;
        }
        else if (nums[mid] < x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return first;
}
int last_occurence(vector<int> nums, int x)
{
    int left = 0, right = nums.size() - 1;
    int last = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == x)
        {
            last = mid;
            left = mid + 1;
        }
        else if (nums[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return last;
}

pair<int, int> first_last_occurence(vector<int> nums, int x)
{
    int first = -1, last = -1;
    int lb = lower_bound(nums, x);
    int ub = upper_bound(nums, x);
    if (lb == nums.size() || nums[lb] != x)
        return make_pair(first, last);
    else
    {
        first = lb;
        last = ub - 1;

        return make_pair(first, last);
    }
}

/*
Q4)
Count Occurrences in Sorted Array

Problem Statement:
You are given a sorted array containing N integers and a number X,
you have to find the occurrences of X in the given array.

Example 1:
Input:
X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
Output: 4
Explanation:
 3 is occurring 4 times in
the given array so it is our answer.

Example 2:
Input:
 X = 2 , array[] = {1, 1, 2, 2, 2, 2, 2, 3}
Output: 5
Explanation:
 2 is occurring 5 times in the given array so it is our answer.
*/
// number of occurences= (last_occurrence - first occurrence + 1)th index 
int count_occurrences(vector<int> &arr, int x)
{
    pair<int, int> ans = first_last_occurence(arr, x);
    if (ans.first == -1)
        return 0;
    return (ans.second - ans.first + 1);
}

int main()
{
    vector<int> nums = {3, 4, 4, 4, 4, 7, 8, 10};
    int x = 4;
    // int x=6,y=4;
    // cout<<search_insert_position(nums,x)<<endl;
    // cout<<search_insert_position(nums,y)<<endl;
    // cout<<floor(nums,x)<<endl;
    // cout<<ceil(nums,x)<<endl;
    // cout << first_occurence(nums, x) << endl;
    // cout << last_occurence(nums, x) << endl;
    // pair<int,int>ans=first_last_occurence(nums,x);
    // cout<<ans.first<<endl<<ans.second<<endl;
    cout << count_occurrences(nums, x);
    return 0;
}