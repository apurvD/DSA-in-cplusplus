#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>


void reprint(int count)
{
    if (count==5)
        return; 
    
    reprint(count+1);
    cout<<"a"<<endl;
}
int main(){
    
    // program to count number of digits in a number
    // int count = 0;
    // string reverse = "";
    // while(n>0)
    // {
    //     int lastdigit= n%10;
    //     reverse += to_string(lastdigit);
    //     count++;
    //     n=n/10;
    // }

    // cout<<count<<endl;

    //code snippet to reverse a number and ignore the trailing zeros:

    // string reverse = "";
    // int rev = 0;
    // while (n)
    // {
    //     int lastdigit = n % 10;
    //     n = n / 10;
    //     if (lastdigit != 0)
    //     {
    //         reverse += to_string(lastdigit);
    //         rev = rev * 10 + lastdigit;
    //     }

    // }
    // cout << rev << endl;


    //press ctrl+shift+b to run and get output..

    //armstrong number program

    // int x;
    // cin >> x;

    // int original = x;
    // int sum = 0;

    // // Count digits
    // int digits = 0;
    // int t = x;
    // while (t) {
    //     digits++;
    //     t /= 10;
    // }

    // // Compute Armstrong sum
    // t = x;
    // while (t) {
    //     int lastdigit = t % 10;
    //     sum += static_cast<int>(pow(lastdigit, digits));
    //     t /= 10;
    // }

    // if (sum == original)
    //     cout << "Armstrong Number\n";
    // else
    //     cout << "Not an Armstrong Number\n";

    int count = 0;
    reprint(count);

    return 0;
} 
