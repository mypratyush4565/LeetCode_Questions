class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0; int candidate=0;
        for(auto it=nums.begin();it!=nums.end();it++){
            if(count==0){
                count=1;
                candidate=*it;
            }
            else if(*it==candidate){
                count++ ;
            }
            else count -- ;
        }
        int count1=0 ;
        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it==candidate) count1++ ;
            if(count1>(nums.size()/2)) return *it ;
        }
        return -1 ;
    }
};