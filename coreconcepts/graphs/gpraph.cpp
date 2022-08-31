#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

const int N = 1e5 + 2, MOD = 1e9 + 7;

// representation of graphs

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int noOfNodes,
        noOfEdges;
    cin >> noOfNodes >> noOfEdges;

    vvi adjacencyMatrix(noOfNodes + 1, vi(noOfNodes + 1, 0));

    rep(i, 0, noOfEdges)
    {
        int x, y; // edges from which to which element
        cin >> x >> y;
        adjacencyMatrix[x][y] = 1;
        adjacencyMatrix[y][x] = 1;
    }

    cout << "adjacency matrix of the graph is given by : \n";

    rep(i, 1, noOfNodes + 1)
    {
        rep(j, 1, noOfNodes + 1)
                cout
            << adjacencyMatrix[i][j] << " ";
        cout << endl;
    }
    cout << endl
         << endl;
    map<int, vector<int>> adjacencyList; // array of vectors with size N
    cin >> noOfNodes >> noOfEdges;

    cout << "enter the first and second vertices of graph";
    rep(i, 0, noOfEdges)
    {
        int x, y;
        cin >> x >> y;

        adjacencyList[x].push_back(y);
        adjacencyList[y].push_back(x);
    }
    cout << "Adjacency list of the above graph is given by :\n";
    rep(i, 1, noOfNodes + 1)
    {
        cout << i;
        // for (int x : adjacencyList[i])
        //     cout << "->" << x;
        vector<int>::iterator it;
        for (it = adjacencyList[i].begin(); it != adjacencyList[i].end();it++)
            cout << "->" << *it;
        cout << endl;
    }
    return 0;
}



//?why ordered takes less time in compared to unordered.