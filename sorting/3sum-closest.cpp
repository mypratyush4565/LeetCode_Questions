class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2]; 

        for(int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while(j < k) {
                int currentSum = nums[i] + nums[j] + nums[k];

                
                if(abs(target - currentSum) < abs(target - closestSum)) {
                    closestSum = currentSum;
                }

                if(currentSum < target) {
                    j++;
                } else if(currentSum > target) {
                    k--;
                } else { 
                    return target;
                }
            }
        }

        return closestSum;
    }
};
