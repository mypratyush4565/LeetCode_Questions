class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto it=digits.end()-1 ;
        if(*it<9){
            (*it)++ ;
            return digits ;
        }
        for(int i = digits.size() - 1; i >= 0; i--){
            if(digits[i]==9) digits[i]=0;
        else{
            digits[i]++ ;
            return digits ;
        }
        }
    digits.insert(digits.begin(),1) ;
    return digits ;
    }

};