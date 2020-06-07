// Given an integer,n , perform the following conditional actions:

// If n  is odd, print Weird
// If n is even and in the inclusive range of 2 to 5 , print Not Weird
// If n is even and in the inclusive range of 6 to 20, print Weird
// If n is even and greater than 20 , print Not Weird

// Input Format

// A single line containing a positive integer,n .

// Sample Input 0

// 3
// Sample Output 0

// Weird

// CODE:-

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if( N%2 == 1 || (N > 5 && N < 21))
    {
        cout<<"Weird"<<endl;
    }
    else if(N>20)
    {
        cout<<"Not Weird"<<endl;
    }
    return 0;
}
