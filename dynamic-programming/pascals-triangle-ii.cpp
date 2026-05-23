class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int>ls;
        ls.push_back(1);
        long long ans=1;
        for(int i=1;i<=(rowIndex);i++){
     ans=ans*(rowIndex-i+1);
     ans=ans/i;
     ls.push_back(ans);
        }
        return ls;
    }
};