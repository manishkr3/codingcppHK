//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void checker(int arr[], int n)
{
    arr[0] = 34;
    arr[1] = 666;
}
int main()
{

    int arr[5]{3, 4, 5, 6, 6};
    int check = 5;
    checker(arr, check);
    for (int x : arr)
        cout << x << " ";
    cout << "\n  : " << check;
    cout << "\narray : " << arr << "      " << arr;
    return 0;
}