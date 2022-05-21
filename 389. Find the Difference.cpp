class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s.size() == 0) return t[0];
        
        char res = 0;
        
        for(int i = 0; i < s.size(); ++i){
            res ^= s[i];
        }
        for(int i = 0; i < t.size(); ++i){
            res ^= t[i];
        }
        return res;
    }
};