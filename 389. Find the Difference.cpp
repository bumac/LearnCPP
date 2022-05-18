class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s.size() == 0) return t[0];
        
        std::array<int, 26> s_chars;
        std::array<int, 26> t_chars;
        
        for(int i = 0; i < s_chars.size(); ++i){
            s_chars[i] = 0;
            t_chars[i] = 0;
        }
        
        for(int i = 0; i < s.size(); ++i){
            ++s_chars[s[i] - 'a'];
        }
        
        for(int i = 0; i < t.size(); ++i){
            ++t_chars[t[i] - 'a'];
        }
        
        for(int i = 0; i < s_chars.size(); ++i){
            if (s_chars[i] != t_chars[i]){
                return 'a' + i;
            }
        }
        
        return 'a' - 1;
    }
};