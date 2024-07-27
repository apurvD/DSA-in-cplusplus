#include<bits/stdc++.h>
using namespace std;
/*
Sort an array of 0s, 1s and 2s | Dutch National Flag problem
Given an array A[] consisting of only 0s, 1s, and 2s. 
The task is to sort the array, i.e., put all 0s first, then all 1s and all 2s in last.
*/
int main(){
    vector<int> nums = {0,2,2,1,2,0,0,1,2,0,2,1,2,1,0,1,2,1};
    //approach is to use 3 pointers: low,mid,high
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1)
            mid++;
        else    //nums[mid==2]
        {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    for(auto i:nums)
        cout<<i<<" ";
    return 0;
}