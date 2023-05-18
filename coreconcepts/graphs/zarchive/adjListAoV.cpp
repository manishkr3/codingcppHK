#include <bits/stdc++.h>
using namespace std;
int main()
{
    int noOfNodes,
        noOfEdges;
    cin >> noOfNodes >> noOfEdges;
    vector<int> adjacencyList[noOfNodes + 1];
    //vectorof vector initialization mangta h.
    cout << "enter the first and second vertices of graph";
    for (int i = 0; i < noOfEdges + 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adjacencyList[x].push_back(y);
        adjacencyList[y].push_back(x);
    }
    cout << "Adjacency list of the above graph is given by :\n";
    for (int i = 0; i < noOfEdges+1; i++)
    {
        cout << i;
        vector<int>::iterator it;
        for (it = adjacencyList[i].begin(); it != adjacencyList[i].end(); it++)
            cout << "->" << *it;
        cout << endl;
    }


    return 0;
}
