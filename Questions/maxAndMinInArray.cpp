//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int arr[] = {2, 4, 5, 6, 7, 1, 44, 56, 3};
    int min = INT_MIN;
    int max = INT_MAX;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>min)
            min = arr[i];
        if(arr[i]<max)
            max = arr[i];
    }
    cout << "minimum is" << max << "\n"
         << " and the max is" << min;

    return 0;
}