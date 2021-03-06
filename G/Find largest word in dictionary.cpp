// Giving a dictionary and a string ‘str’, your task is to find the longest string in dictionary of size x which can be formed by deleting some characters of the given ‘str’.

// Examples:

// Input : dict = {"ale", "apple", "monkey", "plea"}   
//         str = "abpcplea"  
// Output : apple

// Input  : dict = {"pintu", "geeksfor", "geeksgeeks", 
//                                         " forgeek"} 
//          str = "geeksforgeeks"
// Output : geeksgeeks


// Input:
// The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains an integer x denoting the no of words in the dictionary. Then in the next line are x space separated strings denoting the contents of the dictionary.  Then in the next line is a string 'str'.

// Output:
// For each test case in a new line print the required output.

// Constraints:
// 1<=T<=100
// 1<=x, length of str<=1000

// Example:
// Input:
// 2
// 4
// ale apple monkey plea
// abpcplea
// 4
// pintu geeksfor geeksgeeks forgeek
// geeksforgeeks
// Output:
// apple
// geeksgeeks

// CODE:-

#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<iterator>
#include<cstring>
#include<climits>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  string v[n];
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }
  string str;
  cin>>str;
  string res;
  int resize=0;
  for(int i=0; i<n;i++)
  {
    int size=v[i].size();
    if(resize<size)
    { 
    int k=0,j;
    for(int j=0; j<n; j++)
    { 
          char ch=v[i][j];
          for(;str[k]!='\0';k++)
             {
                if(ch==str[k])
                break;
             }
          if(str[k]=='\0')
          break;
     }
     if(j==size)
                {
                    ressize=size;
                    res=v[i];
                }
    
    }
  }
  cout<<res<<endl;
}
return 0;
}
