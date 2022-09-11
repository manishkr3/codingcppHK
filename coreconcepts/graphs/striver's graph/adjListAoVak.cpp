#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 1e5 + 2;
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
    queue<int> q;
            

    return 0;
}