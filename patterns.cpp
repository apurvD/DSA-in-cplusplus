#include <bits/stdc++.h>
using namespace std;

void pattern1(int N) // NxN matrix of N stars
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // This is the inner loop which here, loops for the columns
        // as we have to print a rectangular pattern.
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }

        // As soon as N stars are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

void pattern2(int N) // simple triangle
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int N)
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int N)
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int N)
// * * * * *
// * * * *
// * * *
// * *
// *
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 0; j < N - i + 1; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int N)
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N - i + 1; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int N)
{
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < (N - i - 1); ++j)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i + 1); ++k)
        {
            cout << "*";
        }
        for (int s = 0; s < (N - i - 1); ++s)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int N) // reverse of pattern 7
{
    // ***********
    //  *********
    //   *******
    //    *****
    //     ***
    //      *

    for (int i = 0; i <= N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * N - 2 * i + 1); ++k)
        {
            cout << "*";
        }
        for (int s = 0; s < i; ++s)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int rows)
{

    // Loop through each row
    for (int i = 0; i < rows; i++)
    {
        // Print spaces before stars
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        // Move to the next line after each row
        cout << endl;
    }
}

void pattern10(int N)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < (N - i - 1); ++j)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i + 1); ++k)
        {
            cout << "*";
        }
        for (int s = 0; s < (N - i - 1); ++s)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i <= N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * N - 2 * i + 1); ++k)
        {
            cout << "*";
        }
        for (int s = 0; s < i; ++s)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern11(int N)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    for (int i = 1; i <= (2 * N - 1); ++i)
    {
        int stars = i;
        if (i > N)
        {
            stars = 2 * N - i;
        }
        for (int j = 0; j < stars; ++j)
        {

            cout << "* ";
        }
        cout << endl;
    }
}

void pattern12(int N)
{
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    for (int i = 1; i <= N; i++)
    {
        int start;
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 0; j <= i-1; ++j)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern13(int N)
{
    // 1        1
    // 12      21
    // 123    321
    // 1234  4321
    // 1234554321
    int space = 2 * (N - 1);
    for (int i = 0; i < N; ++i)
    {
        for (int j = 1; j <= i + 1; ++j)
        {
            cout << j;
        }
        for (int k = 1; k <= space; ++k)
        {
            cout << " ";
        }
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void pattern14(int N)
{
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15

    int cnt = 1;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << cnt << " ";
            cnt += 1;
        }
        cout << endl;
    }
}

void pattern15(int N)
{
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    for (int i = 0; i < N; ++i)
    {
        for (char ch = 'A'; ch <= 'A' + i; ++ch)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    // A B C D E
    // A B C D
    // A B C
    // A B
    // A
    for (int i = 0; i < n; ++i)
    {
        for (char j = 'A'; j <= 'A' + (n - i - 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    // E
    // D E
    // C D E
    // B C D E
    // A B C D E
    for (int i = 0; i < n; ++i)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    //     A
    //    ABA
    //   ABCBA
    //  ABCDCBA
    // ABCDEDCBA
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; ++j)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        cout << endl;
    }
}

void pattern19(int n)
{
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
    int spc = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int k = 0; k < spc; k++)
        {
            cout << " ";
        }
        // stars
        for (int s = 1; s <= n - i; s++)
        {
            cout << "*";
        }
        spc += 2;
        cout << endl;
    }
    int lspc=2*n -2;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <=  i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int k = 0; k < lspc; k++)
        {
            cout << " ";
        }
        // stars
        for (int s = 1; s <=  i; s++)
        {
            cout << "*";
        }
        lspc -= 2;
        cout << endl;
    }
}

void pattern20(int n)
{
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;++i)
    {
        int stars=i;
        if(i>n)
            stars=2*n-i;

        //stars
        for(int j=1;j<=stars;++j)
        {
            cout<<"*";
        }
        //spaces
        for(int j=0;j<spaces;++j)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;++j)
        {
            cout<<"*";
        }
        if(i<n)
            spaces-=2;
        else
            spaces+=2;
        cout<<endl;
    }
}

void pattern21(int n)
{
// *         * 
// * *       * *
// * * *     * * *
// * * * *   * * * *
// * * * * * * * * * *
// * * * *   * * * *
// * * *     * * *
// * *       * *
// *         *
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;++i)
    {
        int stars=i;
        if(i>n)
            stars=2*n-i;

        //stars
        for(int j=1;j<=stars;++j)
        {
            cout<<"* ";
        }
        //spaces
        for(int j=0;j<spaces;++j)
        {
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;++j)
        {
            cout<<"* ";
        }
        if(i<n)
            spaces-=2;
        else
            spaces+=2;
        cout<<endl;
    }
}

void pattern22(int n)
{
// * * * * * 
// *       *
// *       *
// *       *
// * * * * *
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;++j)
        {
            if(i==0 || i==n-1 || j==0 ||j==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    
}

void pattern23(int n)
{
// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
    for(int i=0;i<2*n-1;++i)
    {
        for(int j=0;j<2*n-1;++j)
        {
            int top=i
            ,left=j
            ,right=(2*n-2)-j
            ,down=(2*n-2)-i;

            cout<<(n-min(min(top,down),min(left,right)));

        }
        cout<<endl;
    }    
}

int main()
{
    // below format for test cases
    //  int t;
    //  cin>>t;
    //  while(t--)
    //  {
    //      int n;
    //      cin>>n;
    //      pattern1(n);
    //  }
    int N = 5;

    // pattern1(N);
    // pattern2(N);
    // pattern3(N);
    // pattern4(N);
    // pattern5(N);
    // pattern6(N);
    // pattern7(N);
    // pattern8(N);
    // pattern9(N);
    // pattern10(N);
    // pattern11(N);
    // pattern12(N);
    // pattern13(N);
    // pattern14(N);
    // pattern15(N);
    // pattern16(N);
    // pattern17(N);
    // pattern18(N);
    // pattern19(N);
    // pattern20(N);
    // pattern21(N);
    // pattern22(N);
    // pattern23(N);
    return 0;
}
