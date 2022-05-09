#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> adjacencyList;
void dfs(int node, vector<bool> &isVisited);

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int noOfNodes, noOfEdges;
    cin >> noOfNodes >> noOfEdges;

    int x, y;
    for (int i = 0; i < noOfEdges; i++)
    {
        cin >> x >> y;
        adjacencyList[x].push_back(y);
        adjacencyList[y].push_back(x);
    }
    vector<bool> isVisited(100, 0);
    dfs(1,isVisited);
    return 0;
}
void dfs(int node,vector<bool>&isVisited)
{
    // preorder
    isVisited[node] = 1;
    cout << node << " ";

    // inorder
    // vector<int>::iterator it;
    // for (it = adjacencyList[node].begin(); it != adjacencyList[node].end(); it++)
    // {
    //     if (isVisited[*it])
    //         ;
    //     else
    //     {
    //         dfs(*it);
    //     }
    // }
    for(int a :adjacencyList[node])
    {
        if(isVisited[a])
        {}
        else
        {
            dfs(a,isVisited);
        }
    }
    // postorder
}