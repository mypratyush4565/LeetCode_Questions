class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            string prefix=strs[0] ;
        for(auto it=strs.begin()+1;it!=strs.end(); ++it){
            while(it->find(prefix)!=0){
                prefix.pop_back() ;
                }
                if(prefix.empty())return "" ;
        }
        return prefix ;
    }
};