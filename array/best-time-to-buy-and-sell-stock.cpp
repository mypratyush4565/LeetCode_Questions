class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX ;
        int maxProfit=0;
        int Profit=0;
        for(auto it=prices.begin();it!=prices.end();++it){
            minPrice=min(minPrice,*(it)) ;
           Profit=(*it)-minPrice ;
            maxProfit=max(maxProfit,Profit);
        }
        return maxProfit ;
    }
};