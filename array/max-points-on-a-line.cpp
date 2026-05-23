class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n;

        int result = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<long double, int> slopeCount;
            int overlap = 0, currMax = 0;

            for (int j = i + 1; j < n; j++) {
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                if (dx == 0 && dy == 0) {
                    overlap++;  
                } else {
                    long double slope;
                    if (dx == 0) {
                        slope = numeric_limits<long double>::infinity(); 
                    } else {
                        slope = (long double)dy / (long double)dx;
                    }
                    slopeCount[slope]++;
                    currMax = max(currMax, slopeCount[slope]);
                }
            }

            result = max(result, currMax + overlap + 1); 
            
        }

        return result;
    }
};
