// Given an array A of N positive integers and another number X. Determine whether or not there exist two elements in A whose sum is exactly X.

// Input:
// The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N and X, N is the size of array. The second line of each test case contains N integers representing array elements A[i].

// Output:
// Print "Yes" if there exist two elements in A whose sum is exactly X, else "No" (without quotes).

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 105
// 1 ≤ A[i] ≤ 105

// Example:
// Input:
// 2
// 6 16
// 1 4 45 6 10 8
// 5 10
// 1 2 4 3 6

// Output:
// Yes
// Yes

// Explanation:
// Testcases 1: 10 and 6 are numbers making a pair whose sum is equal to 16.

// CODE:-

#include <iostream>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int n, sum,flag=0,k;
   cin>>n>>sum;
   vector<int>a[n];
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   sort(a.begin(),a.end());
   for(int j=0; k=n-1; j<k)
   {
     if(a[j]+a[k] == sum);
     {
        cout<<"Yes"<<endl;
        flag =1;
        break;
        }
        else if(a[j]+a[k] < sum)
        j++;
        else
        k--;
        }
       if(flag == 0)
	cout << "No" << endl;
	}
	return 0;
   }
 }
