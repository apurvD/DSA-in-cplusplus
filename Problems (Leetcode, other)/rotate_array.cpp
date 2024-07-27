#include<bits/stdc++.h>
using namespace std;

void rotate_left(vector<int>& nums,int k)
{
    k=k%nums.size();
    vector<int>temp(k);
    int n=nums.size();
    for(int i=0;i<k;++i)
        temp[i]=nums[i];

    for(int i=0;i<n-k;++i)
    {
        nums[i]=nums[i+k];
    }
    int j=0;
    for(int i=n-k;i<n;++i)
    {
        nums[i]=temp[j];
        j++;
    }
    for(auto i:nums)
    {
        cout<<i<<" ";
    }
}
void rotate_right(vector<int>& nums,int k)
{
    vector<int>temp;
    int n=nums.size();
    // int j=0;
    // for(int i=0;i<n-k+1;++i)
    // {
    //     temp[j]=nums[i];
    //     j++;
    // }
    temp.insert(temp.begin(),nums.begin(),nums.end()-k);

    for(int i=0;i<n-k;++i)
    {
        nums[i]=nums[n-k+i];
    }
    int j=0;
    for(int i=k;i<n;++i)
    {
        nums[i]=temp[j];
        j++;
    }
    for(auto i:nums)
    {
        cout<<i<<" ";
    }

}
int main(){
    vector<int>nums={-1,-2,-5,3,1,6,2,4};
    int k=4;
    rotate_right(nums,k);
    return 0;
}