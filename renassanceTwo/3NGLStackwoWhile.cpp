using namespace std;
#include <iostream>
#include <stack>
#include <vector>
// #include<bits/stdc++.h>
vector<int> ngl(int *a, int n)
{ //using stack
    ios::sync_with_stdio(false);
    cin.tie(0);
    stack<int> s;
    vector<int> v = {};
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            // while (!s.empty() && s.top() < a[i])
            // {
            //     s.pop();
            // }
            // if (s.empty())
            // {
            //     v.push_back(-1);
            // }
            // else
            // {
            //     v.push_back(s.top());
            // }
            if (s.top() > a[i])
            {
                v.push_back(s.top());
                s.push(a[i]);
                continue;
            }
            else
            {
                v.push_back(-1);
                s.pop();
            }
        }
        s.push(a[i]);
    }
    return v;
}
int main()
{
    // int n = 9;

    int a[] = {5, 3, 1, 2, 7,13,12,23,45};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> ans;
    ans = ngl(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }

    return 0;
}