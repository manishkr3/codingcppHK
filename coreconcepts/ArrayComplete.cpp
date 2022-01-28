#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
// cin >> n; a type of dynamic array
    // int *a = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    int arr[5] = {13, 23, 33, 54, 34};
    const int sizebysizeof = sizeof(arr) / sizeof(arr[0]);
    const int sizebyArrayArithmatic = *(&arr + 1) - arr;
    /* arr is itself a pointer at respective address and therefore *(&arr+1) is address of pointer
    at the size step ahead to the arr; just like a arr2 at thaat address. */
    //  int sizebymathfunc = arr.size(); stl for array<int,5> myarray{2,3,4,5,3,} type array

    cout << "\n sizebysizeof " << sizebysizeof;
    cout << "\n sixe by array arithmatic " << sizebyArrayArithmatic;
    cout << "\n arr : " << arr;
    cout<< "\n &arr[0] : " << &arr[0]; 
    //thogh they both are the same but they have a difference
    cout << "\n &arr+1 : "<<&arr+1;
    cout << "\n *(&arr+1) : "<<*(&arr+1);
    cout << "\n &arr[0]+1 : " << &arr[0] + 1;
    cout << "\n arr+1 : " << arr + 1;
    cout << "\n &arr+1 : " << &arr + 1;
 cout << "\n arr : " << *arr;
    cout<< "\n &arr[0] : " <<*( &arr); 
    cout<<"\n"<<&arr<<"\n";//address of address
    cout <<"calculation"<< 0x61fe14 - 0x61fe00<<"\n";
    cout << "calculation 2 :" << *(&arr + 1) - arr<<"\n";
    

    //its coming out to be 20 and divided by 4(single size) it is 5. this means while subtracting
    //in the formula some internal casting is happening whilch doing all this automatically.
    return 0;
}
/* so we conclude that arr store is the address of the first element and &arr is the addreses of the whole bunch of the
array */