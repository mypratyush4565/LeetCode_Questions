class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        map<int,int> mpp;
        int n =row.size();
        for(int i =0 ;i<n;i++){
            mpp[row[i]]=i;
        }
        int swaps =0;
        for (int i = 0; i < n; i += 2) {
            int first = row[i];
            int partner =first^1;
        if(row[i+1]==partner) continue;
            int partnerposition=mpp[partner];
  mpp[row[i+1]]  =partnerposition;
            mpp[partner]=i+1;
                swap(row[i+1],row[partnerposition]);
                swaps++;
            
   }
        return swaps;
        
}};
