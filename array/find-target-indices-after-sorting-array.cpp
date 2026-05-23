class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int first_occurence=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int last_occurence=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        for(int i=first_occurence;i<last_occurence;i++){
            ans.push_back(i);
        }        
        return ans;
    }     
    
};