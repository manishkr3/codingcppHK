#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#define endln "\n"
#define ll long long
using namespace std;

int main()
{
    vector<int> even{2, 4, 6, 8, 10};
    list<int> odd{1, 3, 5, 7, 9};
    vector<int> v(10);

    // cout << "\n size : " << even.size();
    // cout << endln << "what it this";a
    merge(even.begin(), even.end(), odd.begin(), odd.end(), v.begin());
    for(auto x: v)
        cout << x << " ";

    return 0;
}