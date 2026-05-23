class Solution {
public:
int count_subarray_sum(vector<int>&nums,int k){
    int subarray=1;
    long long sum_of_elements_in_subarray=0;
    for(int i=0;i<nums.size();i++){
        if(sum_of_elements_in_subarray+nums[i]<=k){
            sum_of_elements_in_subarray+=nums[i];
        }
        else{
            subarray++;
            sum_of_elements_in_subarray=nums[i];
        }
    }
    return subarray;
}
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int needed= count_subarray_sum(nums,mid);
            if(needed>k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};