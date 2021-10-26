#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//vector<int> klargest(int*a,int k)
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq; //min heap
    vector<int> ans;
    // if n<k condition
   int  a[6] = {
        2,
        1,
        3,
        4,
        5,
        6,
    };
    int n = 6;
    for (int i = 0; i < 3; i++)
    {
        pq.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > pq.top())
        {
            pq.pop();
            pq.push(a[i]);
        }
    }
    cout << pq.top();
    pq.pop();
    cout << pq.top();
    pq.pop();
    cout << pq.top();
    pq.pop();
 
}