#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 50;
bool vis[N];
vector<int> adjList[N];
int main()
{
    for (int i = 0; i < N;i++)
        vis[N] = 0;
    int n, m;
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < n + 1; i++)
    {
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
        
    }
    for (int i = 0; i < n;i++)
    {
        cout << i;
        for(auto j:adjList[i])
            cout << "->"<<j;
        cout << endl;
    }

    return 0;
}