class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, int> minRowY, maxRowY;
        unordered_map<int, int> minColX, maxColX;
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            if (minRowY.find(x) == minRowY.end()) minRowY[x] = y;
  minRowY[x] = min(minRowY[x], y);
  maxRowY[x] = max(maxRowY[x], y);
if (minColX.find(y) == minColX.end()) minColX[y] = x;
minColX[y] = min(minColX[y], x);
maxColX[y] = max(maxColX[y], x);
        }
        int covered = 0;
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            bool left  = (minRowY[x] < y);
            bool right = (maxRowY[x] > y);
            bool up    = (minColX[y] < x);
            bool down  = (maxColX[y] > x);
            if (left && right && up && down) covered++;
        }
        return covered;
    }
};