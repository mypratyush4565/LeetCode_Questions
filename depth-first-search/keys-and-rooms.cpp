class Solution {
private:
    void dfs(int room, vector<vector<int>>& rooms, vector<int>& visited) {
        visited[room] = 1;
        for (auto neighbor : rooms[room]) {
            if (!visited[neighbor]) {
                dfs(neighbor, rooms, visited);
            }
        }
    }

public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n, 0);
        dfs(0, rooms, visited); 

        for (int i = 0; i < n; i++) {
            if (!visited[i]) return false;
        }
        return true;
    }
};