class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for (int a : apple) {
            sum += a;
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        int current = 0;
        int count = 0;
        for (int c : capacity) {
            current += c;
            count++;
            if (current >= sum) {
                return count;
            }
        }
        return count;
    }
};
