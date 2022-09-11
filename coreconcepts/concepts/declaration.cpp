#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int size = 2;
    const int value = 0;
    vector<int> v(size, value);
    for (int x : v)
        cout << x << " ";
    cout << endl;
    int a[size]={value}; // array
    for(auto x:a)
        cout << x << " ";
    //declaration is neccessary to allocate space only then we can accessit otherwise we receive sigterm error. also in case of vectors also the while push_back memory dynamically allocated. otherwise you have to declare the allocation.
    return 0;
}