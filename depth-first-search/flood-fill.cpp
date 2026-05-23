class Solution {
public:
void dfs(int row, int col, vector<vector<int>>& image,vector<vector<int>>& ans,int iniColor, int newColor){
    int n= image.size();
    int m=image[0].size();
int delrow[]={-1,0,1,0};
int delcol[]={0,1,0,-1};
ans[row][col]=newColor;
for(int i=0;i<4;i++){
    int nrow=row+delrow[i];
    int ncol=col+delcol[i];
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == iniColor && ans[nrow][ncol] != newColor){
        dfs(nrow, ncol, image, ans, iniColor, newColor);
    }
}
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor = image[sr][sc];
        vector<vector<int>>ans=image;
        if(iniColor == color) return image;
        dfs(sr, sc, image, ans, iniColor, color);
        return ans;
    }
};