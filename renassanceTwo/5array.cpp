//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4};
    cout << arr[0] << "\n";
    cout << arr << endl;
    cout << &arr;//basically its a double pointer and 
    cout << arr + 1 << endl;
    cout << &arr + 1 << endl;
    cout << *arr;
    cout << "\nthe value of :" << arr;
    cout << "\n size of the array:" << *(&arr + 1) - arr;
    cout << "\nboom  " << &arr + 1;
    return 0;
}