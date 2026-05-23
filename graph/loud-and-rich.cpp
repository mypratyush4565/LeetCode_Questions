class Solution {
public:
    vector<vector<int>> graph;
    vector<int> ans;
    vector<int> q;

    int dfs(int person) {
        if (ans[person] != -1)
            return ans[person];

        // assume the person itself is the quietest
        ans[person] = person;

        for (int richerPerson : graph[person]) {
            int candidate = dfs(richerPerson);

            if (q[candidate] < q[ans[person]]) {
                ans[person] = candidate;
            }
        }

        return ans[person];
    }

    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n = quiet.size();

        graph.resize(n);
        ans.assign(n, -1);
        q = quiet;

        // build graph:
        // graph[x] stores people richer than x
        for (auto &edge : richer) {
            int rich = edge[0];
            int poor = edge[1];
            graph[poor].push_back(rich);
        }

        // find answer for every person
        for (int i = 0; i < n; i++) {
            dfs(i);
        }

        return ans;
    }
};
