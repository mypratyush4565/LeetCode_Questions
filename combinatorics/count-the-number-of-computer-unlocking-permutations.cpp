class Solution {
public:
    const long long MOD = 1e9 + 7;

    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();

        // Fenwick tree / BIT to count values less than current
        // We will compress complexities
        vector<int> comp = complexity;
        sort(comp.begin(), comp.end());
        comp.erase(unique(comp.begin(), comp.end()), comp.end());

        auto getId = [&](int x){
            return (int)(lower_bound(comp.begin(), comp.end(), x) - comp.begin()) + 1;
        };

        int m = comp.size();
        vector<long long> BIT(m+1,0);

        auto update = [&](int i){
            for(; i<=m; i+=i&-i) BIT[i]++;
        };
        auto query = [&](int i){
            long long s=0;
            for(; i>0; i-=i&-i) s+=BIT[i];
            return s;
        };

        // Check if each i>0 has at least 1 parent
        for(int i=0;i<n;i++){
            int id = getId(complexity[i]);
            long long smaller = query(id-1);
            if(i>0 && smaller == 0) 
                return 0;               // impossible
            update(id);
        }

        // all have at least one parent → answer = (n-1)!
        long long ans = 1;
        for(long long i=2; i<=n-1; i++)
            ans = (ans * i) % MOD;

        return ans;
    }
};
