//adjacency list is one of the method to store the graph in a data structure
#include<iostream>
#include<vector>
#define vi vector<int>
using namespace std;
//int adj[20][21];//declaring the array at the top initializes automatically all elements
//to 0, but then problem arises of size intake.

int main(){

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(m+1,vi(n+1,0));
    // because indexing is from 0 and we need nth indexing
    // for (int j = 0; j < m + 1; j++)
    // {
    //     for (int k = 0; k < n + 1; k++)
    //     {
    //          adj[j][k]=0;
    //     }
    //     cout << endl;
    // }
    for (int  i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;  
    }
    for (int j = 0; j < m+1; j++)
    {
        for (int k = 0; k < n+1; k++)
        {
            cout << adj[j][k] << " ";
        }
        cout << endl;
    }

    return 0;
}