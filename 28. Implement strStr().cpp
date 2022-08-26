class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;
        
        int firstIndex = 0;
        bool noContained;
        
        for(int i = 0; i < haystack.size(); ++i){
            if (haystack[i] == needle[0]){
                firstIndex = i;
                noContained = false;
                for(int j = 1; j < needle.size(); ++j){
                    if (haystack[i + j] != needle[j]){
                        noContained = true;
                        break;
                    }
                }
                
                if (!noContained) return firstIndex;
            }
        }
        
        return -1;
    }
};