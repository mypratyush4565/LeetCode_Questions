class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
           vector<int>ans;
           int n=nums.size();
            for(int i=0;i<n;i++){
                if(nums[i] == 0) {
                ans.push_back(nums[i]);
                continue;
            }
                if(nums[i]>0){
                    int p=(i+nums[i])%n;
                    if(p<0) p += n;
                    ans.push_back(nums[p]);
                }
                if(nums[i]<0){
                int next_index = (i+nums[i]) % n;
                if(next_index < 0)next_index += n;
                ans.push_back(nums[next_index]);
                }
            }
            return ans;
    }
};