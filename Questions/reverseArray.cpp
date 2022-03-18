//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    int n = sizeof(arr) / sizeof(arr[0])-1;
    while (i<n)
    {
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        i++;
        n--;
    }cout << "\n reversed array is : "<<"\n";
    for(int x:arr)
        cout << x << " ";

    return 0;
}