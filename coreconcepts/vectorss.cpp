// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    for (int i = 0; i <= 5; i++)
    {
        v.push_back(i + 1);
    }
    for (auto j = v.begin(); j < v.end(); j++)
    {
        cout << *j<<"\n";
    }

    return 0;
}