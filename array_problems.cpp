#include <bits/stdc++.h>
using namespace std;

template <typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N])
{
    return N;
}
int largest_in_array(int arr[], int n)
{
    // brute force: directly sort and return arr[n-1]
    //  sort(arr,arr+n);
    //  return arr[n-1];
    //  this is a O(nLogn) solution, with Space comp=O(1)

    // optimal approach
    // assume that 1st element is the largest, keep updating whenever you
    // get a new larger element till you reach n-1
    int largest = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
    // this is O(n) time, better than O(nLogn)
}

int second_largest_without_sorting(int arr[], int n)
{
    // a good approach to do this, using 2 iterations over n:
    // int res=-1,largest=arr[0];
    // for(int i=1;i<n;++i)
    // {
    //     if(arr[i]>largest)
    //         largest=arr[i];
    // }
    // for(int j=0;j<n;++j)
    // {
    //     if(arr[j]!=largest && arr[j]>res)
    //         res=arr[j];
    // }
    // return res;

    // an even better approach to do this in only 1 iteration'
    int slargest = INT_MIN, largest = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

bool check_if_array_sorted(int arr[], int n)
{
    // bool flag=0;
    // int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= arr[i - 1])
        {
            continue;
        }
        else
            return false;
    }
    return true;
}

void remove_duplicates_from_array(int array[], int n)
{
    // brute_force
    // use a set, use extra space.
    //  set<int>s;
    //  for(int i=0;i<n;++i)
    //  {
    //      s.insert(arr[i]);
    //  }
    //  int index=0;
    //  for(auto it:s)
    //  {
    //      arr[index]=it;
    //      index++;
    //  }
    //  for(int i=0;i<index;++i)
    //  {
    //      cout<<arr[i]<<" ";
    //  }
    // Time complexity= O(NlogN)+O(N)
    // space complexity=O(N)   ..... since using set

    // optimal approach.... 2 pointer approach
    // 1st element will always be unique... 1st pointer = 1st element
    //  keep checking from index=1, if you get an unique element then change second pointer at this index
    //  Two pointers technique
    int uniqueIndex = 0; // Points to the position of the next unique element

    for (int i = 1; i < n; ++i)
    {
        // If the current element is different from the last unique element
        if (array[i] != array[uniqueIndex])
        {
            uniqueIndex++;
            array[uniqueIndex] = array[i];
        }
    }

    // Update the size of the array to the number of unique elements
    n = uniqueIndex + 1;
    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }

    // time complexity = O(n)
    // space complexity = O(1)
}

void rotate_array_left_by_k(int arr[], int k, int n)
{
    // using extra space: space complexity O(n-k)
    // brute force --- TC= O(n-k)
    //  k = k % n;
    //  int temp[k];
    //  for (int i = 0; i < k; i++)
    //  {
    //      temp[i] = arr[i];
    //  }
    //  for (int i = 0; i < n - k; i++)
    //  {
    //      arr[i] = arr[i + k];
    //  }
    //  for (int i = n - k; i < n; i++)
    //  {
    //      arr[i] = temp[i - n + k];
    //  }
    //  for (int i = 0; i < n; i++)
    //  {
    //      cout << arr[i] << " ";
    //  }
    // optimal approach, O(2N) time, O(1) space
    reverse(arr, arr + k);     // O(n-k)
    reverse(arr + k, arr + n); // O(k)
    reverse(arr, arr + n);     // O(n)
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int find_missing_number(int arr[], int n)
{
    // brute force = O(n*n) TC, O(1) SC
    //  int i;
    //  for (i=1;i<=n;++i)
    //  {
    //      bool flag = 0;
    //      for(int j=0;j<n;++j)
    //      {
    //          if(arr[j]==i)
    //          {
    //              flag=1;
    //              break;
    //          }
    //      }
    //      if(flag==0)
    //          return i;
    //  }

    // better solution: use hashing
    // TC O(2N), SC (N)
    //  int hash[n+1]={};
    //  for(int i=0;i<n-1;++i)
    //  {
    //      hash[arr[i]]++;
    //  }
    //  for(int i=1;i<n;++i)
    //  {
    //      if(hash[i]==0)
    //          return i;
    //  }

    // optimal solution: add all numbers in array, missing number=sum(n)-sum(array)
    // TC O(n)
    // SC O(1)
    int sum = (n + 1) * (n + 2) / 2; // Sum of first (n+1) natural numbers
    int s2 = 0;                     // Variable to store the sum of elements in the array

    // Loop through the array to calculate the sum of elements
    for (int i = 0; i < n; ++i)
    {
        s2 += arr[i]; // Add each element of the array to s2
    }

    return sum - s2; // Return the missing element
}
int main()
{
    //int arr[5] = {1, 2, 3, 5, 6};
    // cout<<largest_in_array(arr,6);
    // cout<<second_largest_without_sorting(arr,6);
    // cout << check_if_array_sorted(arr, 6);
    // remove_duplicates_from_array(arr,6);
    // rotate_array_left_by_k(arr, 2, 6);
    int arr[5] = {1, 2, 3, 5, 6};
    cout << "Missing number: " << find_missing_number(arr, 5) << endl;
    return 0;
}