#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
const long long BASE_WEIGHT = 200000;
struct Edge { int to, id, status; };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<vector<Edge>> adj(n + 1);
    vector<pair<pair<int, int>, int>> all_edges(m + 1);
    for (int i = 1; i <= m; i++) {
        int u, v, z;
        cin >> u >> v >> z;
        adj[u].push_back({v, i, z});
        adj[v].push_back({u, i, z});
        all_edges[i] = {{u, v}, z};
    }
    vector<long long> dist(n + 1, INF);
    vector<int> parent_node(n + 1, 0);
    vector<int> parent_edge(n + 1, 0);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    dist[1] = 0;
    pq.push({0, 1});
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue;
        for (auto& edge : adj[u]) {
            long long cost = BASE_WEIGHT + (edge.status == 0 ? 1 : 0);
            if (dist[u] + cost < dist[edge.to]) {
                dist[edge.to] = dist[u] + cost;
                parent_node[edge.to] = u;
                parent_edge[edge.to] = edge.id;
                pq.push({dist[edge.to], edge.to});
            }
        }
    }
    vector<bool> on_path(m + 1, false);
    int current_city = n;
    while (current_city != 1) {
        on_path[parent_edge[current_city]] = true;
        current_city = parent_node[current_city];
    }
    vector<pair<pair<int, int>, int>> operations;
    for (int i = 1; i <= m; i++) {
        int u = all_edges[i].first.first;
        int v = all_edges[i].first.second;
        int z = all_edges[i].second;
        if (on_path[i] && z == 0) operations.push_back({{u, v}, 1});
        if (!on_path[i] && z == 1) operations.push_back({{u, v}, 0});
    }
    cout << operations.size() << "
";
    for (auto& op : operations) {
        cout << op.first.first << " " << op.first.second << " " << op.second << "
";
    }
    return 0;
}