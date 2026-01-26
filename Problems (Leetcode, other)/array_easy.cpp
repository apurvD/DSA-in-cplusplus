/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// 1. largest and smallest in an array
void findlargest(vector <int>&arr)
{
    int largest = INT_MIN, smallest = INT_MAX;
    for(auto i:arr)
    {
        if (i > largest)
        {
            largest = i;
        }
        if(smallest > i)
        {
            smallest = i;
        }
    }
    cout<<"Largest element = "<<largest<<endl;
    cout<<"Smallest element = "<<smallest<<endl;
}

// 2. Find Second Smallest and Second Largest Element in an array
// Given an array, find the second smallest and second largest element in the array.
// Print ‘-1’ in the event that either of them doesn’t exist.
void second_largest(vector<int>&arr)
{
    int largest = INT_MIN, answer = INT_MIN;
    int n = arr.size();
    // better approach:
    // for(int i=0;i<n;++i)
    // {
    //     if ( arr [i] > largest)
    //     {
    //         answer = largest;
    //         largest = arr[i];
    //     }
    // }
    // // now that we have largest, run a loop to find answer:
    // for(int i=0;i<n;++i)
    // {
    //     if ( arr [i] > answer && arr[i]!=largest)
    //     {
    //         answer = arr[i];
    //     }
    // }
    
    //optimal: find both in the same loop:
    for(int i=0;i<n;++i)
    {
        if(arr[i] > largest)
        {
            answer = largest;
            largest = arr[i];
        }
        else if(arr[i] > answer && arr[i] !=largest)
        {
            answer=arr[i];
        }
    }
    cout<<"Largest = "<<largest<<endl;
    cout<<"Second Largest = "<<answer<<endl;
}

void second_smallest(vector<int>&arr)
{
    int smallest = INT_MAX, answer = INT_MAX;
    for(auto i:arr)
    {
        if(smallest > i)
        {
            answer = smallest;
            smallest = i;
        }
        else if(i < answer && i!=smallest)
        {
            answer = i;
        }
    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"Second Smallest = "<<answer<<endl;
}

//3. Check if an Array is Sorted
// Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. 
// If the array is sorted then return True, Else return False.
void isSorted(vector<int>&arr)
{
    int left = 0; int right = 1;
    bool flag = true;
    while(arr[right] != arr.size())
    {
        if(arr[left]>arr[right])
        {
            flag = false;
            break;
        }
            
        left++;
        right++;
    }
    if(flag == false)
        cout<<"not sorted";
    else 
        cout<<"sorted";
}

//4. remove duplicates from a sorted array: and move duplicates to the end
void remove_duplicates(vector<int>&arr)
{
    // 1. use set:
    // set<int> st (arr.begin(), arr.end());
    
    // int i = 0;
    // for(auto x:st)
    // {
    //     arr[i++] = x;
        
    // }
    // for(int i=0;i<st.size();++i)
    // {
    //     cout<<arr[i]<<endl;
    // }
    // 2. two pointer solution:
    int left = 0;
    for(int right = 1; right<arr.size();++right)
    {
        if(arr[left]!= arr[right])
        {
            left++;
            arr[left] = arr[right];
        }
    }
    for(auto i:arr)
    {
        cout<<i<<endl;
    }
}

void left_rotate_1(vector<int>&arr)
{
    int temp = arr[0];
    for(int i =1 ;i<arr.size();++i)
    {
        arr[i-1] = arr[i]; 
    }
    arr[arr.size()-1] = temp;
    
    for(auto i:arr)
    {
        cout<<i<<endl;
    }
}

 // 6.  rotate array by k places:
void rotate(vector<int>& nums, int k) 
{
        int n = nums.size();
        // vector<int> temp;
        // normalize k:
        k = k%n;

        // // copy elements to temp:
        // for(int i = (n-k); i < n  ; ++i)
        // {
        //     temp.push_back(nums[i]);
        // }
        // // copy elements to temp:
        // for(int i = 0; i < (n-k)  ; ++i)
        // {
        //     temp.push_back(nums[i]);
        // }
        // for(int i = 0; i< n;++i)
        // {
        //     nums[i] = temp[i];
        // }
        
        //right rotate
        // reverse(nums.begin(), nums.end());
        // reverse(nums.begin() + k , nums.end());
        // reverse(nums.begin(), nums.begin()+ k) ;
        //left rotate
        reverse(nums.begin() + k , nums.end());
        reverse(nums.begin(), nums.begin()+ k) ;
        reverse(nums.begin(), nums.end());
        for(auto i: nums)
        {
            cout<<i<<" ";
        }

}
void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j<nums.size();++j)
        {
            if(nums[j] != 0)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        while (i<nums.size())
        {
            nums[i]=0;
            ++i;
        }
}



int largest_subarray_sum(vector<int>&arr, int k)
{
    int l = 0, r = 0;
    int sum = 0;
    int maxlength = 0;
    while(r < arr.size())
    {
        sum += arr[r];
        while(sum > k && l<=r)
        {
            sum-=arr[l];
            l++;
        }
        if(sum == k)
        {
            maxlength = max(maxlength , r - l + 1);
        }
        r++;
    }
    return maxlength;
}
int longestSubarraySumK(vector<int>& arr, int k) 
{ 
    unordered_map<int, int> firstIndex; 
    firstIndex[0] = -1; // prefix sum 0 occurs before array starts int sum = 0; 
    int maxlen = 0, sum=0; 
    for (int i = 0; i < arr.size(); i++)
    { 
        sum += arr[i]; 
        
        // Check if we have seen prefix sum (sum - k) 
        if (firstIndex.count(sum - k)) 
        { 
            maxlen = max(maxlen, i - firstIndex[sum - k]); 
        } 
        // Store prefix sum only if first time seen 
        if (!firstIndex.count(sum)) 
        { 
            firstIndex[sum] = i; 
            
        } 
        
    } 
    return maxlen; 
}


int main()
{
    vector<int> arr = {2,1,7,4,3,5,6,9};
    vector<int> arr_duplicates = {1,1,1,2,2,3,3,3,3,4,4};
    vector<int> arr_zeroes = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    //1. findlargest(arr);
    // 2.second_largest(arr);
    // second_smallest(arr);
    //3 . isSorted(arr_sorted);
    // remove_duplicates(arr_duplicates);
    //5.  left_rotate_1(arr);
    //6.  rotate(arr , 3);
    cout<<longestSubarraySumK(nums, k);
    return 0;
}