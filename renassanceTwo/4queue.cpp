//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<queue>
#include<stack>
int main(){

    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i + 1);
    }
    cout << q.front();
    cout<<"\n"<<q.back();
    stack<int> st;
    for (int i = 0; i < 5; i++)
    {
        st.push(i + 1);
    }
    cout<<"\n"<<st.top();

    return 0;
}