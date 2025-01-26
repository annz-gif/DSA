class Solution {
public:
    int maximumInvitations(vector<int>& favorites) {
        int n = favorites.size();
        vector<int> inDegree(n, 0), chainLengths(n, 0);
        vector<bool> visited(n, false);

        for (int fav : favorites) {
            inDegree[fav]++;
        }

        queue<int> q;
        for (int i = 0; i < n; ++i) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            visited[node] = true;

            int next = favorites[node];
            chainLengths[next] = chainLengths[node] + 1;
            if (--inDegree[next] == 0) {
                q.push(next);
            }
        }

        int maxCycle = 0, totalChains = 0;
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                int current = i, cycleLength = 0;
                while (!visited[current]) {
                    visited[current] = true;
                    current = favorites[current];
                    cycleLength++;
                }

                if (cycleLength == 2) {
                    totalChains += 2 + chainLengths[i] + chainLengths[favorites[i]];
                } else {
                    maxCycle = max(maxCycle, cycleLength);
                }
            }
        }

        return max(maxCycle, totalChains);
    }
};
