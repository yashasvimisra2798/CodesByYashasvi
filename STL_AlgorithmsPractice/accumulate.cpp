// C++ program to implement accumulate algorithm

#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> // for accumulate operation

using namespace std;

int main()
{
    int ar[] ={5,6,7,19,45,67};
    int n = sizeof(ar)/sizeof(ar[0]);

    vector<int> v(ar,ar+n);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    // accumlate function implementation
     int s= accumulate(v.begin(),v.end(),0);
     cout<<"\n"<<s;

    return 0;
}