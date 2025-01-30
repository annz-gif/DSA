class Solution {
    vector<int> color; // Tracks bipartition colors (0/1)
    vector<vector<int>> adj; // Adjacency list
    int n; // Number of nodes

    // DFS to check bipartiteness and collect component nodes
    bool isBipartite(int node, int c, vector<int>& component) {
        color[node] = c;
        component.push_back(node);
        for (int nbr : adj[node]) {
            if (color[nbr] == c) return false; // Odd cycle detected
            if (color[nbr] == -1 && !isBipartite(nbr, 1 - c, component)) 
                return false;
        }
        return true;
    }

    // BFS to compute max depth (groups) for a component
    int maxGroupsInComponent(const vector<int>& component) {
        int maxDepth = 0;
        for (int start : component) {
            vector<int> depth(n, -1);
            queue<int> q;
            q.push(start);
            depth[start] = 0;
            while (!q.empty()) {
                int node = q.front(); q.pop();
                for (int nbr : adj[node]) {
                    if (depth[nbr] == -1) {
                        depth[nbr] = depth[node] + 1;
                        maxDepth = max(maxDepth, depth[nbr]);
                        q.push(nbr);
                    }
                }
            }
        }
        return maxDepth + 1; // Depth to groups conversion
    }

public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        this->n = n;
        color.assign(n, -1);
        adj.resize(n);
        for (auto& e : edges) {
            int u = e[0] - 1, v = e[1] - 1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<vector<int>> components;
        for (int i = 0; i < n; ++i) {
            if (color[i] == -1) {
                components.emplace_back();
                if (!isBipartite(i, 0, components.back())) 
                    return -1; // Non-bipartite component
            }
        }

        int total = 0;
        for (auto& comp : components) 
            total += maxGroupsInComponent(comp);
        
        return total;
    }
};
