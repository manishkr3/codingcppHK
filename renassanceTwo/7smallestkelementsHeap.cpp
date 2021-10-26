#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//vector<int> klargest(int*a,int k)
int main()
{
    priority_queue<int> pq; //min heap
    vector<int> ans;
    // if n<k condition
  
    int n = 9;
    for (int i = 0; i < 3; i++)
    {
        pq.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < pq.top())
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
    int b[5] = {3, 5, 6, 7, 8};
}