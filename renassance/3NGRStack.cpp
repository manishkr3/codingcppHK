using namespace std;
#include <bits/stdc++.h>
vector<int> ngR(int *a, int n)
{
    stack<int> s;
    vector<int> v = {};
    for (int i = n-1; i >-1; i--)
    {
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            while (!s.empty() && s.top() < a[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
    return v;
}
int main()
{
    int n=5;
    // cin >> n;
    // int *a = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    int a[n] = {2, 5, 3, 7, 5};
    vector<int> ans;
    ans = ngR(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "  " << ans[i];
    }

    return 0;
}