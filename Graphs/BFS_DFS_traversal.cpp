#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Breadth-First Search (BFS) using a Queue
void bfs(int startNode, int V, const vector<vector<int>>& adj) {
    vector<bool> visited(V, false);
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int neighbor : adj[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

// Helper function for recursive DFS
void dfsHelper(int curr, vector<bool>& visited, const vector<vector<int>>& adj) {
    visited[curr] = true;
    cout << curr << " ";

    for (int neighbor : adj[curr]) {
        if (!visited[neighbor]) {
            dfsHelper(neighbor, visited, adj);
        }
    }
}

// Depth-First Search (DFS) using Recursion
void dfs(int startNode, int V, const vector<vector<int>>& adj) {
    vector<bool> visited(V, false);
    cout << "DFS Traversal: ";
    dfsHelper(startNode, visited, adj);
    cout << endl;
}

int main() {
    int V = 5; // Number of vertices (0 to 4)
    vector<vector<int>> adj(V);

    // Adding undirected edges
    adj[0].push_back(1); adj[1].push_back(0);
    adj[0].push_back(2); adj[2].push_back(0);
    adj[1].push_back(3); adj[3].push_back(1);
    adj[1].push_back(4); adj[4].push_back(1);
    adj[2].push_back(4); adj[4].push_back(2);

    int startNode = 0;
    bfs(startNode, V, adj);
    dfs(startNode, V, adj);

    return 0;
}
