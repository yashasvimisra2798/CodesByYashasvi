// Given two unsorted arrays arr1[] and arr2[].
// They may contain duplicates. For each element in arr1[] 
// count elements less than or equal to it in array arr2[].

// CODE:-

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void countNumber(int arr1[], int arr2[], int a, int b)
{
    int i,j,c=0;
    for(i=0;i<a;i++)
    {
        for(j=0; j<b; j++)
        {
           if(arr2[j]<= arr1[i])
            c++;
        }
        cout<<c<<" ";
    }
}
int main()
{
    int arr1[20], arr2[20],a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    for(int j=0; j<b; j++)
    {
        cin>>arr2[j]
    }

    countNumber(arr1,arr2,a,b);
    return 0;
}