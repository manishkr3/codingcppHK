//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int &x,int &y){//a different way of swapping

    int temp = x;
    x = y;
    y = temp;
}
void swap2(int *x,int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){

    int a = 5, b = 6;
    cout << "\n befroe swap : "<<"a="<<a<<"b="<<b;
    swap(a, b);
    cout << "\n After swap : "
         << "a=" << a << "b=" << b;
    swap2(&a,& b);
    cout << "\n After swap2 : "
         << "a=" << a << "b=" << b;
    return 0;
}