// Given an array of integers. Check whether it contains a triplet that sums up to zero. 

// Input:
// The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. The first line of each test case contains an integer N, denoting the number of elements in array. The second line of each test case contains N space separated values of the array.

// Output:
// For each test case, output will be 1 if triplet exists else 0.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the boolean function findTriplets() which takes the array arr[] and the size of the array (n) as inputs and returns True if the given array has a triplet with zero sum and False otherwise. 

// Expected Auxiliary Space: O(1)
// Expected Time Complexity: O(n2)

// Constrains:
// 1 <= T <= 100
// 1 <= N <= 104
// -106 <= Ai <= 106

// Example:
// Input:
// 2
// 5
// 0 -1 2 -3 1
// 3
// 1 2 3
// Output:
// 1
// 0

CODE:-

#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(findTriplets(arr,n))
            cout<<"1"<<endl;
            else 
            cout<<"0"<<endl;
        }
    }
    return 0;
}

bool findTriplets(int arr[], int n)
{
    int i,j,p,q=0,k;
    sort(arr, arr+n);
    if(n<3)
    {
        q++;
        return false;
    }
    else 
    {
        for(k=0;k<n-3;k++)
        {
            p=0-arr[k];
            i=k+1,j=n-1;
            while(i<j)
            {
                if(p==(arr[i]+arr[j]))
                    {  
                        q++;  
                        return true;
                    }
                    else if(p>(arr[i]+arr[j]))
                        i++;
                    else
                        j--;
            }
        }
    }
    if(q==0)
      return false;
}