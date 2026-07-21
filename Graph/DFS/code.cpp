void DFS(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    if (visited[node]) return;
    visited[node] = true;
    cout << node << " ";
    
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, adj, visited);
        }
    }
}
