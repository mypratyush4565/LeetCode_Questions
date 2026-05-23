class Solution {
public:
    int countKDifference(vector<int>& nums, int k) { 
        map<int,int>mpp;
        int ans=0;
     for(int i=0;i<nums.size();i++){
        int x=nums[i];
        ans=ans+mpp[x+k] ;
        ans=ans+mpp[x-k] ;
        mpp[x]++ ;
        }
     return ans ;
     }
    } ;