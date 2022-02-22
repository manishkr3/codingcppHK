#include<iostream>
using namespace std;
int main(){

    int a = 45;
    int *p = &a;
    cout << "p : " << p << "*p " << *p<<"\n";
    int b = 56;
    int *pt = &b;
    cout << "pt " << pt<<"*pt "<<*pt<<"\n";
    *pt = *p;
    cout << "pt " << pt << "*pt " << *pt << "\n";
    pt = p;
    cout << "pt " << pt << "*pt " << *pt << "\n";
    //!remember a pointer stores address not the value.
    return 0;
}