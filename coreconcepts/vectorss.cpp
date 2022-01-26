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
        cout << *j << " ";
        
    }
        cout << "\n";
    vector<int> v1(5, 9); //vector with 5 elements all 9, and it is still dynamic
                          // v1.clear();//this clear will make vector empty.
    v1.push_back(33);
    for (int x : v1)
        cout << x << " ";
    cout << "\n";
    cout << v1[0]<<v[0];
    return 0;
}