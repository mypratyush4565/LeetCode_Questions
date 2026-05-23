class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        int m = edges.size(); 
        int n = m + 1;
        vector<int> degree(n + 1, 0);
        for (auto &it : edges) {
            int u = it[0];
            int v = it[1];
            degree[u]++;
            degree[v]++;
        }
        for (int i = 1; i <= n; i++) {
            if (degree[i] == n-1)
                return i;
        }
        return -1; 
    }
};