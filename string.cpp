#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>

bool isPalindrome(string s)
{
    // check directly using reverse function from STL
    // string rev = s;
    // reverse (rev.begin(), rev.end());
    // return rev == s;

    //use two pointer approach
    int left = 0, right = s.length()-1;
    while (left < right)
    {
        if(s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}


int main(){

    string s="abc";
    string s2 = "abba";

    if(isPalindrome(s))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not a Palindrome"<<endl;
    return 0;
}