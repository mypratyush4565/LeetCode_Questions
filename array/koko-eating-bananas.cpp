class Solution {
public:

int greatestelement(vector<int>&piles){
    int maxi=INT_MIN;
    int n=piles.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,piles[i]);
    }
    return maxi;
}

long long timetaken(vector<int>&piles,int hourly){
    long long total_time=0;
    int n=piles.size();
    for(int i=0;i<n;i++){
        total_time+=((long long)piles[i]+hourly - 1)/hourly;
    }
    return total_time;
}


    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=greatestelement(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long total_hours=timetaken(piles,mid);
            if(total_hours<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};