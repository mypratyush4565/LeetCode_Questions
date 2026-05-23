class Solution {
public:
    int maxFrequencyElements(vector <int>& v) {
        map<int,int>mpp;
        for(int i=0;i<v.size();i++){
            mpp[v[i]]++;
        }
        int maxfreq=0;
        for(auto it:mpp){
            maxfreq=max(maxfreq,it.second) ;
        }
             int sum = 0;
        for(auto it : mpp){
            if(it.second == maxfreq)
                sum += it.second;
        }
        return sum;
    }
};