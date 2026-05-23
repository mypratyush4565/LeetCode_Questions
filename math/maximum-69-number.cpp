class Solution {
public:
    int maximum69Number (int num) {
        string num1= to_string(num) ;
        for(auto it=num1.begin();it!=num1.end();++it){
            if(*it=='6') 
            { *it='9' ;
            break ;
            }
            }
        return stoi(num1) ; 
    }
};