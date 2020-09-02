// C++ program to implement *max_element algorithm

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{   
    int arr[]={5,6,9,2,4,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    //initializing the values with array values
    vector<int> vect(arr,arr+size);
    
    for(i=0;i<size;i++)
    {
       cout<<vect[i]<<" ";
    }
    
    //Find the maximum element
    int a = *max_element(vect.begin(),vect.end());
    cout<<"\nMax element "<<a<<endl;

    //Find the minimum element
    int b = *min_element(vect.begin(),vect.end());
    cout<<"Min element"<<b<<endl;

    return 0;
}