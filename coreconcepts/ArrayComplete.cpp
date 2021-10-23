#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {13, 23, 33, 54, 34};
    const int sizebysizeof = sizeof(arr) / sizeof(arr[0]);
    const int sizebyArrayArithmatic = *(&arr + 1) - arr;
    cout << "\n sizebysizeof " << sizebysizeof;
    cout << "\n sixe by array arithmatic " << sizebyArrayArithmatic;
    cout << "\n arr : " << arr;
    cout<< "\n &arr[0] : " << &arr[0]; 
    //thogh they both are the same but they have a difference
    cout << "\n &arr+1 : "<<&arr+1;
    cout << "\n &arr[0]+1 : " << &arr[0] + 1;
    cout << "\n arr+1 : " << arr + 1;
    cout << "\n &arr+1 : " << &arr + 1;
 cout << "\n arr : " << *arr;
    cout<< "\n &arr[0] : " <<*( &arr); 
    return 0;
}
/* so we conclude that arr store is the address of the first element and &arr is the addreses of the whole bunch of the
array */