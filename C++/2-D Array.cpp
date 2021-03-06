// Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

// Input Format

// There are 6 lines of input, where each line contains 6 space-separated integers describing 2D Array A; 
// every value in A will be in the inclusive range of -9 to 9 .

// Constraints
//  -9<= A[i][j] <=9
//  -5<= i,j <=5
 

// Output Format

// Print the largest (maximum) hourglass sum found in A .

// Sample Input

// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 2 4 4 0
// 0 0 0 2 0 0
// 0 0 1 2 4 0

// Sample Output

// 19

// CODE:-

#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int  i,j, arr[6][6];

    long temp_sum = 0, MaxSum = LONG_MIN;
    for ( i = 0; i < 6; i++) 
    {
        for ( j = 0; j < 6; j++) 
        {
            cin >> arr[i][j];
        }
    }
    
    for(i=0; i<6;++i)
    {
        for(j=0;j<6;++j)
        {
            if (j + 2 < 6 && i + 2 < 6) {
                temp_sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                if (temp_sum >= MaxSum) {
                    MaxSum = temp_sum;
                }
            }
        }
    }
    cout<<MaxSum;
    return 0;
}
