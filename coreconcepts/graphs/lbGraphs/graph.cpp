#include<bits/stdc++.h>
using namespace std;


//template <typename int> // generic graph.
class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // direction 0 for undirected graph and 1 for directed graph

        // create an edge from u to v
        adjList[u].push_back(v);
        if (direction == 0)
            adjList[v].push_back(u);
    }
    void printAdjList()
    {
        for (auto i : adjList)
        {
            cout << i.first;
            for (auto j : i.second)
                cout << "->" << j;
            cout << endl;
        }
    }
    vector<int> bfs(int V)
    {
        queue<int> q;
        vector<int> bfs;
        // map<int, bool> vis(V, 0);
        int vis[10]={0};

        q.push(0);
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            if(!vis[frontNode]){
                bfs.push_back(frontNode);
            }
            vis[frontNode] = 1;
            for(auto i:adjList[frontNode]){
                if(!vis[i])
                    q.push(i);
            }
        }

        return bfs;
    }
};
int main()
{
    Graph g;
    int n, m, u, v;
    cout << "enter no. of elements n and no. of edges m followed by edge nodes" << endl;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printAdjList();
    vector<int> ans = g.bfs(5);
    cout << "\nyour bfs is:";
    for (auto x : ans)
        cout << x << " ";

    return 0;
}