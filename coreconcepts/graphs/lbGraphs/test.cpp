#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    for (int i = 0; i < 9; i++)
    {
        vector<int> f;
        for (int i = 0; i < i; i++)
        {
            f.push_back(i);
        }
        for(auto x:f)
            cout << x << " ";
        cout << endl;
        v.push_back(f);
    }

    for(auto i: v){
        for(auto j: i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}
