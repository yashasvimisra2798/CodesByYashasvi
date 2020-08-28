// C++ Program to demostrate sorting using STL algorithms

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int i;
    int arr[] = {2,3,8,9,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);

    for(i=0;i<n;i++)
    {
        cout<<v[i];
    }

    // Sorting the vector
    sort(v.begin(),v.end());

    // Printing the vector after sorting

    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}