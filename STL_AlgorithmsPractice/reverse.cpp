// Program to show reverse function in vectors using c++

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main()
{
    int i;
    int a[]={1,3,4,5,6}
    int n = sizeof(a)/sizeof(a[0]);

    // initializing vetor with array values
    vector<int> v(arr,arr+n)

    for(i=0;i<n;i++)
    {
        cout<<v[i];
    }

    //reversing the vector

    reverse(v.begin(),v.end())
     
    // Printing after reversing 
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
