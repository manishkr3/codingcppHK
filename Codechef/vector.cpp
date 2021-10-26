#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i + 1);
    }
    vector <int> b;
    b[0] = v[0];
    for (int i = 0; i < 5; i++)
    {
        b[i] = b[i - 1] + v[i];
}

    for (auto j = v.begin(); j < v.end(); j++)
    {
        /* code */ cout << "\n"
                        << *j;
    }

    return 0;
}