// Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer denoting 
// the maximum number of consecutive 1's in n's binary representation.

// Input Format

// A single integer, n.

// Output Format

// Print a single base-10 integer denoting the maximum number of consecutive 1's in the binary representation of n.

// Sample Input 1

// 5
// Sample Output 1

// 1
// Sample Input 2

// 13
// Sample Output 2

// 2

// CODE:-

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,s=0,t=0,r=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0)
    {
      r=n%2;
      n=n/2;
      if(r==1){
          s++;
        if(s>=t)
          t=s;
      }
      else {
         s=0;
      }
    }
    cout<<t;
    return 0;
}
