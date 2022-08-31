#include <iostream>
#include <list>
#include<map>
#include<vector>
#include<queue>

using namespace std;
int makeGraph(int &noOfNodes, int &noOfEdges, map<int, vector<int>> &adjacencyList)
{

    cin >> noOfNodes >> noOfEdges;
    cout << "enter the first and second vertices of graph";
    for (int i = 0; i < noOfEdges; i++)
    {
        int x, y;
        cin >> x >> y;
        adjacencyList[x].push_back(y);
        adjacencyList[y].push_back(x);
    }
    cout << "Adjacency list of the above graph is given by :\n";
    for (int i = 1; i < noOfEdges + 1; i++)
    {
        cout << i;
        vector<int>::iterator it;
        for (it = adjacencyList[i].begin(); it != adjacencyList[i].end(); it++)
            cout << "->" << *it;
        cout << endl;
    }
    return 0;
}
int bfs(map<int, vector<int>> adjacencyList)
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

    queue<int> q;
    q.push(1);
    isVisited[1] = true;
    while (!q.empty())
    {
        int node = q.front();

        q.pop();
        cout << node << endl;

        vector<int>::iterator it;
        for (it = adjacencyList[node].begin(); it != adjacencyList[node].end(); it++)
        {
            if (!isVisited[*it])
            {
                isVisited[*it] = true;
                q.push(*it);
            }
        }
    }

    return 0;
}
void dfs(int node, map<int, vector<int>> adjacencyList)
{
    vector<bool> isVisited(100);
    // preorder
    isVisited[node] = 1;
    cout << node << " ";

    // inorder
    vector<int>::iterator it;
    for (it = adjacencyList[node].begin(); it != adjacencyList[node].end(); it++)
    {
        if (isVisited[*it])
            ;
        else
        {
            dfs(*it, adjacencyList);
        }
    }
    // postorder
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int noOfNodes,noOfEdges;
    map<int, vector<int>> adjacencyList;
start:
    cout << "enter the choice from Menu :\n1. Input New Graph \n2. Add a vertex to the graph \n3. Add an edge to the graph \n4. Display Breadth First Traversal of Graph \n5. Display Depth First Traversal of Graph \n6. Exit \n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "1.Input new graph\n ";
        makeGraph(noOfNodes, noOfEdges,adjacencyList);

        break;
    case 2:
        cout << "2.Add a vertex to the graph\n ";
        break;
    case 3:
        cout << "3.Add an edge to the graph\n ";
        break;
    case 4:
        cout << "4.Display Breadth First Traversal of graph\n ";
        bfs(adjacencyList);
        break;
    case 5:
        cout << "5.Display Depth First Traversal of graph\n ";
        dfs(1, adjacencyList);
        break;
    case 6:
        cout << "6.exit\n ";
        break;
    default:
        break;
    }
    if(choice!=6)
        goto start;
    cout << "\nexiting.......\n";
    return 0;
}
