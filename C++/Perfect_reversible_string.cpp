// You are given a string ‘str’, the task is to check that reverses of all possible substrings of ‘str’ are present in ‘str’ or not.

// Examples:

// Input : str = "ab"
// Output: "NO"
// all substrings are "a","b","ab" but reverse
// of "ab" is not present in str

// Input : str = "aba"
// Output: "YES"

// Input : str = "abab"
// Output: "NO"
// All substrings are "a", "b", "a", "b", "ab", 
// "ba", "ab", "aba", "bab", "abab" but reverse of
// "abab" is not present in str

//CODE:-

#include<bits/stdc++.h>
using namespace std;

bool isReversible(string str)
{
    int i=0, l=str.length()-1;
    while(i<l)
    {
        if(str[i]!=str[j])
           return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str;
    cin>>str;
    if(isReversible(str)==true)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
