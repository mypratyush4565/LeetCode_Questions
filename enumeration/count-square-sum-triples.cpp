class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int k2 = i * i + j * j;
                int k = sqrt(k2);

                if (k <= n && k * k == k2) count++;
                
            }
        }

        return count;
    }
};
