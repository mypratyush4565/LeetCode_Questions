class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1,1e9);
        vector<int> parent(n+1);
        vector<pair<int,int>>adj[n+1];
        for(auto it: times){
            adj[it[0]].push_back({it[1],it[2]});
        }
        for(int i=1;i<=n;i++){
             parent[i]=i;}
            dist[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
            pq.push({0,k});
           
            while(!pq.empty()){
                auto it=pq.top();
                int node=it.second;
                int dis=it.first;
                pq.pop();
                for(auto it: adj[node]){
                    int adjnode=it.first;
                    int edgeW=it.second;
                    if(dis+edgeW<dist[adjnode]){
                        dist[adjnode]=dis+edgeW;
                        pq.push({dis+edgeW,adjnode});
                        parent[adjnode]=node;
                    }
                }

            }
         
           int ans = 0;
for (int i = 1; i <= n; i++) {
    if (dist[i] == 1e9) return -1;
    ans = max(ans, dist[i]);
}
return ans;
        }
    };