// bfs
#include <iostream>
#include <vector>
#include<queue>
using namespace std;
const int N = 1e5 + 2;
bool vis[N];
vector<int> adj[N];
int main()
{
    cout << "Hello World";
    for (int i = 0; i <= N; i++)
        vis[i] = 0; // initialize vis to 0
    int n, m;       // no. of nodes and number of edges
    cin >> n >> m;
    // now input edges
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    vis[1] = true;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    return 0;
}