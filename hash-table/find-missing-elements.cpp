class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        if (nums.empty()) return ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            int curr = nums[i];
            int next = nums[i + 1];
            if (next > curr + 1) {
                for (int val = curr + 1; val < next; val++) {
                    ans.push_back(val);
                }
            }
        }
        return ans;
    }
};
