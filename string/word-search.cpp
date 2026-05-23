class Solution {
private:
    bool dfs(vector<vector<char>> &board, string &word, vector<vector<int>>& vis, int row, int col, int idx) {
        if(idx == word.size()) return true; 
        int n = board.size();
        int m = board[0].size();
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};
        vis[row][col] = 1; 
        for(int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
               !vis[nrow][ncol] && board[nrow][ncol] == word[idx]) {
                if(dfs(board, word, vis, nrow, ncol, idx + 1))
                    return true;
            }
        }
        vis[row][col] = 0; 
        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == word[0]) {
                    if(dfs(board, word, vis, i, j, 1))
                        return true;
                }
            }
        }
        return false;
    }
};
