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
    {//!errored code 
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
    
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
        s.push(a[i]);/*here when we reach 2 in the array ,at the time of 1  3 got popped and for
        2 top element is 1 and in this wrong algo we are only targetting the top elements only 
        thereforeits errored */
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