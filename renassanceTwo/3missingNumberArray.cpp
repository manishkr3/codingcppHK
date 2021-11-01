#include<iostream>
using namespace std;
int arr1[10]={1,3,2,4,5,6,7,8,9};

int main(){
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int sumshouldbe = n*(n + 1) / 2;
    int butsumis;
    for (int i = 0; i < n; i++)
    {
        butsumis += arr1[i];
    }
    cout << "\n your missing number is  : "<<sumshouldbe-butsumis;
    
    return 0;
}