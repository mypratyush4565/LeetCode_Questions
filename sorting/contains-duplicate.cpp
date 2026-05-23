class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n=nums.size() ;
        int i;
        map<int,int>mpp;
        for( i=0;i<n;i++){
            mpp[nums[i]]++ ;
        if(mpp[nums[i]]>1) return true ;
        }
     return false ;
    }
};