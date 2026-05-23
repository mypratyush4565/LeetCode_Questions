class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //     int n=nums.size();
    //     int max_pro=INT_MIN;
    //     int pro=1;
    //     for(int i=0;i<n;i++){
    //   pro*=nums[i];
    //   max_pro=max(max_pro,pro);
    //   if(pro<0) pro=1;
    //     }
    //     return max_pro;
    int n=nums.size();
    int prev=1;
    int suff=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(prev==0) prev=1;
        if(suff==0) suff=1;
        prev=prev*nums[i];
        suff=suff*nums[n-i-1];
        ans=max(ans,max(prev,suff));
    }
    return ans;
    }
};