class Solution {
public:
    string freqAlphabets(string s) {
        string result = "";
               
        for(int i = s.size() - 1; i >= 0; --i){
            if (s[i] == '#'){
                
                int k = s[i - 2] - '0';
                k = (k * 10) + (s[i - 1] - '0');
                
                result.push_back('a' + k - 1);
                i -= 2;
            }
            else{
                int k = s[i] - '1';
                result.push_back('a' + k);                
            }
        }
        
        for(int i = 0; i < result.size() / 2; ++i){
            std::swap(result[i], result[result.size() - 1 - i]);
        }
        
        return result;
    }
};