#include <bits/stdc++.h>
using namespace std;
/*
Q1)Rearrange Array Elements by Sign

Problem Statement:

There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
Without altering the relative order of positive and negative elements,
you must return an array of alternately positive and negative values.

Example 1:

Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5

Explanation:

Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

Example 2:
Input:
arr[] = {1,2,-3,-1,-2,-3}, N = 6
Output:
1 -3 2 -1 3 -2
Explanation:

Positive elements = 1,2,3
Negative elements = -3,-1,-2
To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3.
Also, -3 should come before -1, and -1 should come before -2.
*/

void solve1(vector<int> &nums)
{
    // brute force, use 2 arrays to filter positive and negative
    //     also has SC= O(n) , TC= O(2N)
    // int n = nums.size();
    // vector<int> pos;
    // vector<int> neg;
    // for (auto i : nums)
    // {
    //     if (i > 0)
    //         pos.push_back(i);
    //     else
    //         neg.push_back(i);
    // }

    // nums.clear();
    // int temp = pos.size();
    // while (temp!=0)
    // {
    //     nums.push_back(pos.front());
    //     nums.push_back(neg.front());
    //     pos.erase(pos.begin());
    //     neg.erase(neg.begin());
    //     temp--;
    // }
    // for(auto i:nums)
    //     cout<<i<<" ";

    //somewaht better approach, TC= O(N), SC=O(N)
    int n=nums.size();
    // Define array for storing the ans separately.
    vector<int> ans(n, 0);

    // positive elements start from 0 and negative from 1.
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {

        // Fill negative elements in odd indices and inc by 2.
        if (nums[i] < 0)
        {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }

        // Fill positive elements in even indices and inc by 2.
        else
        {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    for(auto i:ans)
        cout<<i<<" ";
}
int main()
{
    vector<int> nums = {1, 2, -3, -1, -2, 3};
    solve1(nums);
    return 0;
}