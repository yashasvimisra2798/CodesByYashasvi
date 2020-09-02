// to implement count and find algorithms in C++

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int a[]={3,9,8,8,26,78,12};
    int n = sizeof(a)/sizeof(a[0]);
    //initializing the vector with array values

    vector<int> v(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    // count function
    int c = count(v.begin(),v.end(),8);
    cout<<"\n"<<c<<endl;

    //Find function
    find(v.begin(),v.end(),9) != v.end()?
        cout<<"Found":
        cout<<"not found";
    

    return 0;
}