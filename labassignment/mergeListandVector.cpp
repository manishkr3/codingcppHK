#include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <list>
// #include <cmath>
// #include <iterator>
// #include <algorithm>
// #define ll long long
// #define endl "\n"

using namespace std;

int main()
{
    vector<int> even{2, 4, 6, 8, 10};
    list<int> odd{1, 3, 5, 7, 9};
    vector<int> arr(10);
    merge(even.begin(), even.end(), odd.begin(), odd.end(), arr.begin());
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}