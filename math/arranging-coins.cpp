class Solution {
public:
    int arrangeCoins(int n) {
        int low=1;
        int high=n;
        int count=0;
        while(low<=high){
       long long mid=low+(high-low)/2;
       long long coins=mid*(mid+1)/2;
       if(coins<=n) {
        count=mid;
        low=mid+1;
       } else{
        high=mid-1;
       }
        }
        return count;
    }
};