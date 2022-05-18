class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int count_1 = 0;
        int count_2 = 0;
        int max_size = std::max(word1.size(), word2.size());
        for(int i = 0; i < max_size; ++i){
            if (count_1 < word1.size()){
                result.push_back(word1[count_1++]);
            }
            if (count_2 < word2.size()){
                result.push_back(word2[count_2++]);
            }
        }
        return result;
    }
};