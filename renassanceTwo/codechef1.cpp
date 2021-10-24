//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    vector<int> v;
    while (n = 42)
    {
        cout << "\n enter the number : ";
        cin >> n;
        v.push_back(n);
    }
    for (auto i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}