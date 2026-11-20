#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int primMST(int V, vector<vector<pair<int, int>>>& adj) {
    // Min-heap storing {weight, vertex}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<bool> visited(V, false);
    
    int mstWeight = 0;
    pq.push({0, 0}); // Start from vertex 0 with weight 0

    while (!pq.empty()) {
        int weight = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (visited[u]) continue;

        visited[u] = true;
        mstWeight += weight;

        for (auto& edge : adj[u]) {
            int v = edge.first;
            int edgeWeight = edge.second;
            if (!visited[v]) {
                pq.push({edgeWeight, v});
            }
        }
    }
    return mstWeight;
}

int main() {
    int V = 4;
    vector<vector<pair<int, int>>> adj(V);

    // Undirected weighted edges: adj[u].push_back({v, weight})
    adj[0].push_back({1, 10}); adj[1].push_back({0, 10});
    adj[0].push_back({2, 6});  adj[2].push_back({0, 6});
    adj[0].push_back({3, 5});  adj[3].push_back({0, 5});
    adj[1].push_back({3, 15}); adj[3].push_back({1, 15});
    adj[2].push_back({3, 4});  adj[3].push_back({2, 4});

    cout << "Minimum Spanning Tree Weight (Prim's): " << primMST(V, adj) << endl;
    return 0;
}
