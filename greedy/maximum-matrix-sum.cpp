class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int minabs=INT_MAX;
        int negativecount=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                int value= matrix[i][j];
             
               if(value<0) negativecount++;
             sum=sum+abs(value);

               minabs=min(minabs,abs(value));

            }
        }
if(negativecount%2==1){
    sum=sum-2*minabs;
}
        return sum;
    }
};