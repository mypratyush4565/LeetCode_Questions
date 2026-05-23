class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        map<int, char> reverseMap;
        int w = 0;
        for (char c = 'z'; c >= 'a'; --c) {
            reverseMap[w++] = c;
        }
        string result = "";
                for (string &word : words) {
            int wordWeight = 0;
            for (char c : word) {
                wordWeight += weights[c - 'a'];
            }
            int modVal = wordWeight % 26; 
            result += reverseMap[modVal];  
        }
        
        return result;
    }
};