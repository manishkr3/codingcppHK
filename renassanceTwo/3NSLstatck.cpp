// #include <bits/stdc++.h>
//**Nearest Small Left to every element
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nSL(int *a, int n)
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
            while (!s.empty() && s.top() > a[i])
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
    // int n = 5;
    // cin >> n;
    // int *a = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    int a[] = {2, 5, 3, 7, 5};//-1,2,2,3,3
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> ans;
    ans = nSL(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }

    return 0;
}