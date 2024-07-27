#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/
int majorityElement(const std::vector<int> &nums)
{
    // O(nlogn) approach, simple sorting
    //  sort(nums.begin(),nums.end());
    //  return nums[nums.size()/2];

    // O(N+NlogN) , O(N*N)Worst case, with O(N) Space complexity since we use a map
    //  int n = nums.size();
    //  unordered_map<int,int>mp;
    //  for(int i=0;i<n;++i)
    //  {
    //      mp[nums[i]]++;
    //  }
    //  for(auto it:mp)
    //  {
    //      if(it.second>(n/2))
    //          return it.first;
    //  }
    //  return -1;

    // Optimal Approach: Moore’s Voting Algorithm:
}

//if we are not guaranteed that the maximum occurence is not there, 
// then need to return -1, not the element.
int findMajorityElement(const std::vector<int> &nums)
{

    int candidate = -1;
    int count = 0;

    // Step 1: Find the candidate
    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
            count = 1;
        }
        else
        {
            if (num == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }

    // Step 2: Verify the candidate
    count = 0;
    for (int num : nums)
    {
        if (num == candidate)
        {
            count++;
        }
    }

    // Verify if the candidate is indeed the majority element
    if (count > nums.size() / 2)
    {
        return candidate;
    }
    else
    {
        return -1; // No majority element
    }
}
int main()
{
    vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};

    int el = findMajorityElement(nums);

    if (el != -1)
    {
        std::cout << "Majority Element is: " << majorityElement << std::endl;
    }
    else
    {
        std::cout << "No Majority Element found." << std::endl;
    }

    return 0;
}