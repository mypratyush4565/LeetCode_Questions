class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int max_len = 0;

        for(int l = 0; l < n; l++) {
            unordered_map<int,int> even_count;
            unordered_map<int,int> odd_count;

            for(int r = l; r < n; r++) {
                if(nums[r] % 2 == 0) even_count[nums[r]]++;
                else odd_count[nums[r]]++;

                if(even_count.size() == odd_count.size()) {
                    max_len = max(max_len, r - l + 1);
                }
            }
        }

        return max_len;
    }
};
