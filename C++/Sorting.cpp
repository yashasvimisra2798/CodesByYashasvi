// Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above.
// Once sorted, print the following 3 lines:

// Array is sorted in numSwaps swaps.
// where numSwaps is the number of swaps that took place.
// First Element: firstElement
// where firstElement is the first element in the sorted array.
// Last Element: lastElement
// where lastElement is the last element in the sorted array.

// Sample Input 0

// 3
// 1 2 3
// Sample Output 0

// Array is sorted in 0 swaps.
// First Element: 1
// Last Element: 3

// CODE:-

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,a[100],i;
    cin >> n;
    int numberOfSwaps = 0;
    for ( i = 0; i < n; i++){
        cin>>a[i];
    }
    for ( i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    if (numberOfSwaps == 0) {
        break;
    }
}
cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}
