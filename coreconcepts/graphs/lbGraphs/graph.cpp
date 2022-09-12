#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

template <typename T> // generic graph.
class Graph
{
public:
    unordered_map<T, list<T>> adjList;

    void addEdge(T u, T v, bool direction)
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
    vector<int> bfs(int V, unordered_map<T, list<T>> adjList)
    {
        vector<int>bfs;
        vector<int, bool> isVisited(V + 1);

        for (int i = 0; i < V + 1; i++)
        {
            if (!isVisited[i])
            {
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    bfs.push_back(node);

                    for (auto i : adjList[node])
                    {
                        if (!isVisited[i])
                        {
                            q.push(i);
                            isVisited[i] = 1;
                        }
                    }
                }
            }
        }
        return bfs;
    }
};
int main()
{
    Graph<int> g;
    int n, m, u, v;
    cout << "enter no. of elements n and no. of edges m followed by edge nodes" << endl;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printAdjList();

    return 0;
}