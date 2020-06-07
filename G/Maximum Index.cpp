// Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].

// Input:
// The first line contains an integer T, depicting total number of test cases.  Then T test case follows. First line of each test case contains an integer N denoting the size of the array. Next line contains N space separated integeres denoting the elements of the array.

// Output:
// Print the maximum difference of the indexes i and j in a separtate line.

// Constraints:
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 103
// 0 ≤ A[i] ≤ 1018

// Example:
// Input:
// 1
// 9
// 34 8 10 3 2 80 30 33 1

// Output:
// 6

// Explanation:
// Testcase 1:  In the given array A[1] < A[7] satisfying the required condition(A[i] <= A[j]) thus giving the maximum difference of j - i which is 6(7-1).

// CODE:-

#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t-->0)
  {
     int max=-1,h;
     int s;
     cin>>s;
     int a[s]
     for(int i=0; i<s; i++)
     {
       cin>>a[i];
       
    }
    for(int j=0; j<s; j++)
    {
     for(int k=s-1; k>=j; k--)
     { 
        if(a[j]<= a[k])
        {
          h=k-j;
          break;
      }
      }
      if(h>=max){
        max=h;
      }
      h=0;
      }
      cout<<max<<endl;
      }
      return 0;
      }
      
      
      
