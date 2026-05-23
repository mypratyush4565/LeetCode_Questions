class Solution {
public:
    bool judgeSquareSum(int c) {
    for(long long a=0;a*a<=c;a++){
        long long rem=c-a*a;
        long long low=0;
        long long high=sqrt(c);
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long square=mid*mid;
              if(square==rem) return true;
              else if(square<rem) low=mid+1;
              else high=mid-1;
        }
    }
        return false;
    }
};