#include <bits/stdc++.h>
using namespace std;
map<int, vector<int>> adjacencyList;

void dfs(int node,vector<bool>); 
int main()
{

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
    dfs(1,isVisited);
    return 0;
}
void dfs(int node,vector<bool> isVisited) 
{
    //preorder
    isVisited[node] = 1;
    cout << node << " ";

    //inorder
    vector<int>::iterator it;
    for (it = adjacencyList[node].begin(); it != adjacencyList[node].end();it++){
        if (isVisited[*it])
            ;
            else{
                dfs(*it,isVisited); 
            }
    }
    //postorder

}