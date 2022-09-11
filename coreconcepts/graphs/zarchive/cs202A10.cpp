#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>
using namespace std;
class Graph
{
    int vertices, edges;
    unordered_map<int, list<int>> vertexList;

public:
    void Insert_New_Graph(int ver, int ed)
    {
        vertices = ver;
        edges = ed;
        for (int i = 1; i <= edges; i++)
        {
            cout << "Enter the edge " << i << ": " << endl;
            cout << "\tStart Vertex: ";
            int startVertex;
            cin >> startVertex;
            if (startVertex < 1 || startVertex > vertices)
            {
                cout << "This vertex is unavailable" << endl;
                i--;
                continue;
            }
            cout << "\tEnd Vertex: ";
            int endVertex;
            cin >> endVertex;
            if (endVertex < 1 || endVertex > vertices)
            {
                cout << "This vertex is unavailable" << endl;
                i--;
                continue;
            }
            vertexList[startVertex].push_back(endVertex);
        }
        cout << "\nGraph implemented correctly..." << endl;
    }
    void Add_vertex(int con_ver, bool dir = 0)
    {
        // dir = 0 -> it is end vertex and dir = 1 -> it is start vertex
        vertices++;
        if (dir)
        {
            vertexList[vertices].push_back(con_ver);
        }
        else
        {
            vertexList[con_ver].push_back(vertices);
        }
        return;
    }
    void Add_edge(int startVertex, int endVertex)
    {
        vertexList[endVertex].push_back(endVertex);
    }
    int num_of_vertices()
    {
        return vertices;
    }
    void print(vector<int> ans)
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    void bfs(unordered_map<int, bool> &visited, vector<int> &ans, int node)
    {
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            // store frontNode into ans
            ans.push_back(frontNode);
            // traverse all neighbours of frontNode
            for (auto i : vertexList[frontNode])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
    void Dispaly_BFS()
    {
        vector<int> ans;
        unordered_map<int, bool> visited;
        for (int i = 1; i <= vertices; i++)
        {
            if (!visited[i])
            {
                bfs(visited, ans, i);
            }
        }
        print(ans);
    }
    void print(vector<vector<int>> &ans)
    {
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    void dfs(unordered_map<int, bool> &visited, vector<int> &component, int node)
    {
        component.push_back(node);
        visited[node] = 1;
        for (auto i : vertexList[node])
        {
            if (!visited[i])
            {
                dfs(visited, component, i);
            }
        }
    }
    void Display_DFS()
    {
        vector<vector<int>> ans;
        unordered_map<int, bool> visited;
        for (int i = 1; i <= vertices; i++)
        {
            if (!visited[i])
            {
                vector<int> component;
                dfs(visited, component, i);
                ans.push_back(component);
            }
        }
        print(ans);
    }
};
int main()
{
    Graph g;
    int choice;

    do
    {
        cout << "Enter your choice as given below: " << endl;
        cout << "press..." << endl;
        cout << "1. Input New Graph" << endl;
        cout << "2. Add a vertex to the graph" << endl;
        cout << "3. Add an edge to the Graph" << endl;
        cout << "4. Display Breadth First Traversal(BST) of Graph" << endl;
        cout << "5. Display Depth First Traversal (DFS) of Graph" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the no. of vertices of the graph: ";
            int vertices;
            cin >> vertices;
            cout << "Enter the number of edges of the graph: ";
            int edges;
            cin >> edges;
            g.Insert_New_Graph(vertices, edges);
            cout << endl;
        }
        else if (choice == 2)
        {
            bool to_repeat = 0;
            int conVertex;
            do
            {
                cout << "Enter the vertex to connect to: ";
                cin >> conVertex;
                if (conVertex < 1 || conVertex > g.num_of_vertices())
                {
                    cout << "This vertex is unavailable" << endl;
                    to_repeat = 1;
                }
                else
                    to_repeat = 0;
            } while (to_repeat);
            cout << "If the edge connected to the above vertex directed to the new vertex, enter 1 else enter 0 : ";
                                       bool direction;
            cin >> direction;
            g.Add_vertex(conVertex, direction);
            cout << endl;
        }
        else if (choice == 3)
        {
            bool to_repeat1 = 0;
            int startVertex, endVertex;
            do
            {
                cout << "Enter the starting vertex: ";
                cin >> startVertex;
                if (startVertex < 1 || startVertex >
                                           g.num_of_vertices())
                {
                    cout << "This vertex is unavailable" << endl;
                    to_repeat1 = 1;
                }
                else
                    to_repeat1 = 0;
            } while (to_repeat1);
            bool to_repeat2 = 0;
            do
            {
                cout << "Enter the end vertex: ";
                cin >> endVertex;
                if (endVertex < 1 || endVertex >
                                         g.num_of_vertices())
                {
                    cout << "This vertex is unavailable" << endl;
                    to_repeat2 = 1;
                }
                else
                    to_repeat2 = 0;
            } while (to_repeat2);
            g.Add_edge(startVertex, endVertex);
            cout << endl;
        }
        else if (choice == 4)
        {
            g.Dispaly_BFS();
            cout << endl;
        }
        else if (choice == 5)
        {
            g.Display_DFS();
            cout << endl;
        }
        else if (choice == 6)
        {
            cout << "Graph Program ends..." << endl;
            exit(1);
        }
        else
        {
            cout << "invalid Input...Enter again!";
        }
    } while (choice != 6);
    return 0;
}