/* Hari */
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
class Graph
{
public:
    void Dijkstra(int node, int edges, vector<pair<int, int>> adj[], int source)
    {
        vector<int> distTo(node + 1, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        distTo[source] = 0;
        q.push({0, source});
        while (q.empty() == false)
        {
            int dist = q.top().first;
            int prev = q.top().second;
            q.pop();
            for (auto it : adj[prev])
            {
                int next = it.first;
                int nextDist = it.second;
                if (distTo[next] > distTo[prev] + nextDist)
                {
                    distTo[next] = distTo[prev] + nextDist;
                    q.push({distTo[next], next});
                }
            }
        }
        cout << "The distances from source, " << source << endl;
        for (int i = 1; i <= node; i++)
        {
            cout << distTo[i] << " ";
        }
    }
};

signed main()
{
    Graph h;

    int V, E;
    cout << "Node?  and  Edges ? " << endl;
    cin >> V >> E;
    // vector<pair<int, int>> g[V + 1]; // assuming 1 based indexing of graph
    // // Constructing the graph
    // g[1].push_back({2, 2});
    // g[1].push_back({4, 1});
    // g[2].push_back({1, 2});
    // g[2].push_back({5, 5});
    // g[2].push_back({3, 4});
    // g[3].push_back({2, 4});
    // g[3].push_back({4, 3});
    // g[3].push_back({5, 1});
    // g[4].push_back({1, 1});
    // g[4].push_back({3, 3});
    // g[5].push_back({2, 5});
    // g[5].push_back({3, 1});
    vector<pair<int, int>> adj[V + 1];

    for (int i = 0; i < E; i++)
    {
        int u, v, wt;
        cout << "A to B and Weight" << endl;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    int source;
    cout << "Enter Source " << endl;
    cin >> source;

    h.Dijkstra(V, E, adj, source);
}

// Graph 
// 5 6   1 2 2  1 4 1  2 5 5   2 3 4  4 3 3  3 5 1  1