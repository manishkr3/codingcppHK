#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a, i < b, i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5 + 2, MOD = 1e9 + 7;

// representation of graphs

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int noOfNodes,
        noOfEdges;
    cin >> noOfNodes >> noOfEdges;

    vvi adjacencyMatrix(noOfNodes + 1, vi(noOfNodes + 1, 0));
    int l = 54;
    cin >> l;
    int m = l + 54;
    cout << m;

    return 0;
}