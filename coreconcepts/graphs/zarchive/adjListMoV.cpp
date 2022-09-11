#include <bits/stdc++.h>
using namespace std;
int main()
{
    int noOfNodes,
        noOfEdges;
    cin >> noOfNodes >> noOfEdges;
    map<int, vector<int>> adjacencyList;//map because element can be 333 also and we do'nt want to create useless space.       
    cout << "enter the first and second vertices of graph";
    for (int i = 0; i < noOfEdges+1; i++)
    {
        int x, y;
        cin >> x >> y;
        adjacencyList[x].push_back(y);
        adjacencyList[y].push_back(x);
    }
    cout << "Adjacency list of the above graph is given by :\n";

    for (auto it1 = adjacencyList.begin(); it1 != adjacencyList.end(); it1++)
    {
        cout << it1->first;
        for (auto it=it1->second.begin(); it != it1->second.end();it++)
        {
            cout << "->" << *it;
        }
        cout << endl;
    }

    return 0;
}
