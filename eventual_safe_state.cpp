class Solution {
private:
    bool dfs(int u, vector<int>& vis, vector<int>& pathVis,
             vector<vector<int>>& graph, vector<int>& check) {
        
        vis[u] = 1;
        pathVis[u] = 1;
        check[u] = 0;

        for (auto it : graph[u]) {
            if (!vis[it]) {
                if (dfs(it, vis, pathVis, graph, check)) {
                    check[u] = 0;
                    return true;
                }
            }
            else if (pathVis[it]) {
                check[u] = 0;
                return true;
            }
        }

        pathVis[u] = 0;
        check[u] = 1;
        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<int> vis(n, 0);
        vector<int> pathVis(n, 0);
        vector<int> check(n, 0);
        vector<int> safeNode;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, vis, pathVis, graph, check);
            }
        }

        for (int i = 0; i < n; i++) {
            if (check[i] == 1)
                safeNode.push_back(i);
        }

        return safeNode;
    }
};