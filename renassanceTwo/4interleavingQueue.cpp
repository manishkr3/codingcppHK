#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;
#include<bits/stdc++.h>
vector<int> interleavingQueue(int *a, int n)
{ //to input 1,2,3,4,5,6, and output 1,4,2,5,3,6
    //condition is to use stack and queue only to demonstrate it
    //assume that u can only acces the front of the queue and only top of the stack
    ios::sync_with_stdio(false);
    cin.tie(0);
    stack<int> st;
    vector<int> v;
    queue<int> q;
    for (int i = 0; i <n; i++)
    {
        q.push(a[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "\n your queue is" << q.front();
    //     q.pop();
    // }

    /*approach make the first half of the queue in the stack such that first element is at top
    by double pushing it in the stack 
    then opt top of the stack and front of the queue one by one and save it in the vector or cout
     this is your desired output */

    //it must be even numbered so
    for (int j = 0; j < n / 2; j++)
    {
        st.push(q.front());
        q.pop();
    }
    for (int k = 0; k < n/2; k++)
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n/2; i++)
    {
        q.push(q.front());
        q.pop();
    }
    
    for (int j = 0; j < n / 2; j++)
    {
        st.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n / 2; i++)
    {
        v.push_back(st.top());
        st.pop();
        v.push_back(q.front());
        q.pop();
    }

    return v;
}
int main()
{

    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> ans;
    ans = interleavingQueue(a, n);
    // reverse(ans.begin(), ans.end());//for reverse u have to use bits/std++.h

    for (int i = 0; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }

    return 0;
}