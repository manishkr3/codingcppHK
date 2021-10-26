using namespace std;
#include <bits/stdc++.h>
vector<int> ngl(int *a, int n)
{ //using stack
    stack<pair<int, int>> s;
    vector<int> v = {};
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            while (!s.empty() && s.top().first < a[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({a[i], i});
    }
    return v;
}
int main()
{
    int a[] = {100, 80, 60, 70, 60, 75, 85}; //-1,0,1,1,3,1,0
    int n = sizeof(a) / sizeof(a[0]);

    // int a[n] = {2, 5, 3, 7, 5};
    vector<int> ans;
    ans = ngl(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " " << i-ans[i];
    }

    return 0;
}
