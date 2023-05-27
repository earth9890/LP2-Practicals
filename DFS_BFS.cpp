/* Hari */
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
class Graph
{
public:
    void dfs(int vertex, vector<int> adj[], vector<bool> &visited)
    {
        visited[vertex] = 1;
        cout << vertex << " ";
        for (auto it : adj[vertex])
        {
            if (visited[it] == false)
            {
                dfs(it, adj, visited);
            }
        }
    }
    void bfs(vector<int> adj[], queue<int> &q, vector<bool> &visited)
    {
        if (q.empty())
        {
            return;
        }

        int v = q.front();
        q.pop();
        cout << v << " ";

        for (int u : adj[v])
        {
            if (!visited[u])
            {
                visited[u] = true;
                q.push(u);
            }
        }

        bfs(adj, q, visited);
    }

public:
    void dfsOfGraph(int V, vector<int> adj[])
    {
        vector<bool> vis(V, false);
        int start = 0;
        vector<int> ls;
        for (auto i = 0; i < V; i++)
        {
            if (vis[i] == false)
            {
                dfs(i, adj, vis);
            }
        }
    }

    void bfsofGraph(int V, vector<int> adj[])
    {
        vector<bool> vis(V, false);
        queue<int> q;
        q.push(0);
        vis[0] = true;
        for (auto i = 0; i < V; i++)
        {
            if (vis[i] == false)
            {
                vis[i] = true;
                q.push(i);
                bfs(adj, q, vis);
            }
        }
    }
};

signed main()
{
    Graph h;

    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << "DFS -> ";

    h.dfsOfGraph(V, adj);
    cout << endl;
    cout << "BFS -> ";
    h.bfsofGraph(V, adj);
    cout << endl;
}

// Connected Graph
//  5 6 0 2 0 1 2 4 2 1 4 3 3 1 DFS 0 2 4 3 1 BFS 0 2 1 4 3

// Disconnected Graph
// 7 7 0 1 0 2 1 2 1 3 2 3 4 5 4 6
// DFS -> 0 1 2 3 4 5 6
//  BFS->0 1 2 3 4 5 6