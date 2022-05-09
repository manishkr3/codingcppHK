#include<bits/stdc++.h>
using namespace std;
map<int, vector<int>> adjacencyList;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int noOfNodes, noOfEdges;
    cin >> noOfNodes >> noOfEdges;
    vector<bool> isVisited(noOfNodes);

    int x, y;
    for (int i = 0; i < noOfEdges; i++)
    {
        cin >> x >> y;
        adjacencyList[x].push_back(y);
        adjacencyList[y].push_back(x);

    }

    queue<int> q;
    q.push(1);
    isVisited[1] = true;
    while (!q.empty())
    {
        int node = q.front();

        q.pop();
        cout << node << endl;

        vector<int>:: iterator it;
        for (it = adjacencyList[node].begin(); it != adjacencyList[node].end();it++)
        {
            if (!isVisited[*it])
            {
                isVisited[*it] = true;
                q.push(*it);
            }
        }
    }
}