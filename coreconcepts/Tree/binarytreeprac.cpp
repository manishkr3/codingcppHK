#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> q ;
    q.push(23);
    q.push(2);
    q.push(3);
    q.push(99);
    for (int  i = 0; i < 4; i++)
    {
        cout
            << q.top()<<" ";
        q.pop();
    }

    return 0;
}