#include <bits/stdc++.h>
using namespace std;

// print name n timnes
void printNtimes(int N)
{
    if (N >= 1)
    {
        cout << "HII" << endl;
    }
    printNtimes(N - 1);
    return;
}
// print number from 1 to N
void print1toN(int N)
{
    // this prints N to 1
    //  if(N<1)
    //      return;

    // cout<<N<<" ";
    // print1toN(N-1);
    // prints 1 to N
    if (N < 1)
        return;
    print1toN(N - 1);
    cout << N << " ";
}
// sum of 1st N numbers:
void sumofN_parameterised(int n, int sum)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    sum += n;
    sumofN_parameterised(n - 1, sum);
}

int sumofN_functional(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumofN_functional(n - 1);
}

void generateSubsets(string s, string curr, int i = 0)
{
    if (i == s.length())
    {
        cout << curr << " ";
        return;
    }
    generateSubsets(s, curr, i + 1);
    generateSubsets(s, curr + s[i], i + 1);
}

int countSumofSubsets(int arr[],int n,int sum)
{
    if(n==0)
    {
        return (sum==0)?1:0;
    }
    return countSumofSubsets(arr,n-1,sum)+countSumofSubsets(arr,n-1,sum-arr[n-1]);
}
int SumOfDigits(int n)
{
    //Time Complexity = O(d+1)  -----d=no of digits
    //Auxilliary Space = O(d+1)    ---- since there are total d+1 calls involved
    // if (n==0)
    //     return 0;
    // return SumOfDigits(n/10) + n%10;

    //can improvise this to O(d) by using
    if (n<=9)
        return n;
    return SumOfDigits(n/10) + n%10;
}

int IterativeSumofDigits(int n)
{
    //as there are no recursive calls, there is no overhead here
    //Time Complexity = O(d)  -----d=no of digits
    //Auxilliary Space = O(1)    ----no stack calls or anything involved
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

bool palindrome(string s, int start,int end)
{
    //Time Complexity = O(n)  
    //Auxilliary Space = O(n)    ----there are total n/2 recurive calls made
    if(start>=end)
    {
        return true;
    }
    bool res=(s[start]==s[end] ) && palindrome(s,start+1,end-1);

    return res;    
}

bool palindromeEffective(string s,int i)
{
    if(i>s.length()/2)
        return true;
    if(s[i]!=s[s.length()-i-1])
        return false;
    return palindromeEffective(s,i+1);
}

//use pass by reference, else changes wont occur when called in main()
void reverseStringRecursive(string &s, int left,int right)
{
    if(left>=right)
        return;
    swap(s[left], s[right]);
    reverseStringRecursive(s,left+1,right-1);
}

void reverseStringIterative(std::string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Swap characters at left and right indices
        std::swap(s[left], s[right]);

        // Move towards the center
        left++;
        right--;
    }
}

void reverseStringEffective(string &s, int i)
{
    if(i>=s.length()/2)
        return;
    swap(s[i],s[s.length()-i-1]);
    reverseStringEffective(s,i+1);
}

void print_permutations(string s, int i=0)
{

    if(i==s.length()-1)
    {
        cout<<s<<" ";
        return;
    }
    for(int j=1;j<s.length();++j)
    {
        swap(s[i],s[j]);
        print_permutations(s,i+1);
        swap(s[i],s[j]);
    }
}


int main()
{
    // printNtimes(4);
    // print1toN(4);
    // sumofN_parameterised(10, 0);
    // cout << sumofN_functional(10);
    // string s="JODD",curr="";
    // generateSubsets(s,curr,0);
    // cout<<SumOfDigits(945);
    // cout<<IterativeSumofDigits(999);
    // cout<<palindrome("abba",0,3);
    //string str = "hello";
    // cout << "Original string: " << str << std::endl;
    //reverseStringRecursive(str, 0, str.length() - 1);
    // reverseStringIterative(str);
    // std::cout << "Reversed string: " << str << std::endl;
    //string str = "madam";
    // cout << "Original string: " << str << std::endl;
    // reverseStringEffective(str,0);
    // cout << "Reversed string: " << str << std::endl;
    // cout<<palindromeEffective(str,0);
    // int arr[4]={10,20,30,40};
    // cout<<countSumofSubsets(arr,4,50);
    //print_permutations("str",0);
    return 0;
}