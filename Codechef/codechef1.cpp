//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    vector<int> v;
    while (n != 42)
    {
        cout << "\n enter the number : ";
        cin >> n;
        v.push_back(n);
    }
    // for (auto j = 0; j < 3; ++j)
    // {
    //     cout << v[j] << " ";//here *i not works because its not a pointer its just a integer
    // }
    cout << "\n the values you entered are : ";
    for (auto i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " "; //heree i is a pointer
    }
    cout << "\n  : ";
    int k, sum;
    cin >> k;
    while (k != 0)
    {
        sum += v[k - 1];
        k--;
    }
    cout << sum << "\n";

    return 0;
}
