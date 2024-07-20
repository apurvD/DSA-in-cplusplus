#include <bits/stdc++.h>

using namespace std;

void countOccurrencesInArray(int arr[], int length)
{
    unordered_map<int, int> mp;
    
    for (int i = 0; i < length; ++i)
    {
        mp[arr[i]]++;
    }
    
    for (auto pr : mp)
    {
        cout << pr.first << " occurs " << pr.second << " times !!" << endl;
    }
}

//using array as a hash table
//in array, the index is to be used as the KEY
void numberHashingusingArray(int arr[])
{

}
void countOccurencesofCharacters(string s)
{
    unordered_map<char,int>mp;
    // Count occurrences of each character in the string
    for (size_t i = 0; i < s.length(); ++i) 
    {
        char c = s[i];
        mp[c]++;
    }

    // Print the counts
    for (auto& pair : mp) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}
int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 1, 3, 2, 4, 5, 6, 1, 2, 4, 1};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate array length
    //countOccurrencesInArray(arr, length);
    string s="abcedabceabcd";
    countOccurencesofCharacters(s);
    
    return 0;
}
