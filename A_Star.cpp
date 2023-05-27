#include <bits/stdc++.h>
using ll = long long;
using namespace std;

class Graph
{
public:
    void AStar(int node, vector<pair<int, int>> adj[], int source, function<int(int, int)> heuristic)
    {
        vector<int> distTo(node + 1, INT_MAX);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        distTo[source] = 0;
        q.push({0, source});
        while (!q.empty())
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
                    int priority = distTo[next] + heuristic(next, node);
                    q.push({priority, next});
                }
            }
        }
        cout << "The distances from source, " << source << ":" << endl;
        for (int i = 1; i <= node; i++)
        {
            cout << distTo[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Graph h;

    int V, E;
    cout << "Number of nodes? ";
    cin >> V;
    cout << "Number of edges? ";
    cin >> E;

    vector<pair<int, int>> adj[V + 1];

    for (int i = 0; i < E; i++)
    {
        int u, v, wt;
        cout << "Edge " << i + 1 << " (A to B) and Weight: ";
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    int source;
    cout << "Enter Source: ";
    cin >> source;
    auto heuristic = [](int curr, int goal)
    {
        // Sample heuristic function (Euclidean distance)
        return abs(curr - goal);
    };
    h.AStar(V, adj, source, heuristic);

    return 0;
}
//  5 6   1 2 2  1 4 1  2 5 5   2 3 4  4 3 3  3 5 1  1