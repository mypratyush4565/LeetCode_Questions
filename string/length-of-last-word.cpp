class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

        while (i >= 0) {
            if (s[i] == ' ') {
                if (length > 0) break;  
            } else {
                length++;              
            }
            i--;
        }

        return length;
    }
};