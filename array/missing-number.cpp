#include<stdio.h>
using namespace std ;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size() ;
        int sum1 =(n*(n+1))/2 ;
        int sum=0;
        for(auto it=nums.begin();it!=nums.end();++it){
             sum=sum+*it ;
        }
        return sum1-sum ;

    }
};