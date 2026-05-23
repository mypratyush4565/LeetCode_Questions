class Solution {
public:

bool possible(vector<int> &bloomDay,int day,int m,int k){
    int cnt=0;
    int bouqets=0;
    int n=bloomDay.size();
    for(int i=0;i<=n-1;i++){
        if(bloomDay[i]<=day){
            cnt++;
        } else{
            bouqets+=(cnt/k);
        cnt=0;
        }
    }
        bouqets+=(cnt/k);
    return bouqets>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
  int n=bloomDay.size();
  int value=m*1LL*k*1LL;
  if (1LL*m*k > n) return -1;
  int mini=INT_MAX;
  int maxi=INT_MIN;      
  for(int i=0;i<n;i++){
    mini=min(mini,bloomDay[i]);
    maxi=max(maxi,bloomDay[i]);
  }
  int low=mini;
  int high=maxi;
  while(low<=high){
   int mid =low+(high-low)/2;
    if(possible(bloomDay,mid,m,k)){
        high=mid-1;
    } else{
        low=mid+1;
    }
  }
  return low;
    }
};