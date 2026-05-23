class Solution {
public:
    bool isPerfectSquare(int num) {
        int  low=1;
        int high=num;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long value = 1LL*mid*mid;
            if(value==num) return true;
            else if (value<num) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};