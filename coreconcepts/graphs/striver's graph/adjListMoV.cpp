//*ye MoV wali adj bahot freedom deti h bas no. of edges specify karo tum or baki sam ye dekh legi :) 
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){

    int nodes, edges;
    map<int, vector<int>> adjList;
    // cout << "please enter the data" <<endl;
    cin >> nodes >> edges;
    for (int i = 0; i < edges+1; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (auto it = adjList.begin(); it != adjList.end();it++)
    {
        cout << it->first;//(*it).first
        for (auto it1 = it->second.begin(); it1 != it->second.end();it1++)
        {
            cout << "->" << *it1;
        }
        cout << endl;
    }
        return 0;
}