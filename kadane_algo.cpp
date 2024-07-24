/*
Kadane's Algorithm : Maximum Subarray Sum in an Array
Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.
 arr = [-2,1,-3,4,-1,2,1,-5,4]
Output:
 6
Explanation:
 [4,-1,2,1] has the largest sum = 6.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // brute force approach, O(N*N*N) time complexity
    //  O(1) sapce complexity
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // vector<int> vec = {-1, -4, -3, -2};
    int maxsum = INT_MIN;
    // for(int i=0;i<vec.size();++i)
    // {
    //     for(int j=i;j<vec.size();++j)
    //     {
    //         int sum=0;
    //         for(int k=i;k<=j;++k)
    //         {
    //             sum+=vec[k];
    //         }
    //         maxsum=max(maxsum,sum);
    //     }
    // }
    // cout<<maxsum;

    // better solution, Time complexity = O(N*N)       ..dont need 3 for loops
    // space complexity again is O(1)
    //  for(int i=0;i<vec.size();++i)
    //  {
    //      int sum=0;
    //      for(int j=i;j<vec.size();++j)
    //      {
    //          sum+=vec[j];
    //          maxsum=max(maxsum,sum);
    //      }

    // }
    // cout<<maxsum;

    // optimal solution:
    //  is called Kadane's algo. : The intuition of the algorithm is not to consider the subarray as a part of the answer if its sum is less than 0.
    //  A subarray with a sum less than 0 will always reduce our answer and so this type of subarray cannot be a part of the subarray with maximum sum.
    //  TC = O(N), SC = O(1)
    int sum = 0;
    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (sum == 0)
            start = i;

        sum += vec[i];

        if (sum > maxsum)
        {
            maxsum = sum;

            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "The maximum subarray sum is: " << maxsum << endl;
    // printing the subarray:
    cout << "The subarray is: [ ";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << vec[i] << " ";
    }
    cout << "]";

    return 0;
}