class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {

        int n = nums.size();
        if(n == 1) return 0;

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        int left = 0;
        int maxLen = 0;

        // Step 2: Sliding window
        for(int right = 0; right < n; right++) {

            // If condition breaks, move left pointer
            while(nums[right] > (long long)k * nums[left]) {
                left++;
            }

            // Update maximum valid window
            maxLen = max(maxLen, right - left + 1);
        }

        // Step 3: removals = total - kept elements
        return n - maxLen;
    }
};
