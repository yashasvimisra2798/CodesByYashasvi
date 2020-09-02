// CPP program to implement 
// Binary Search in  
// Standard Template Library (STL)

#include <iostream>
#include <algorithm>

using namespace std;

void show(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout <<arr[i]<<" ";
    }
}

int main()
{
    int a[]={1,4,6,7,19,2,9,56};
    int n;
    n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    show(a,n);
    cout<<"\nFinding 4"<<endl;
   if (binary_search(a,a+n,4))
    cout<<"Found";
   else
     cout<<"Not Found";
   
}