#include <bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<int, list<int>> adj;
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[0].push_back(4);
    cout<<adj.
    for(auto x:adj[0])
        cout << x <<" ";

    return 0;
}