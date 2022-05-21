class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        std::array<int, 2> arr;
        int counter = 0;
        for (int i = 0; i < s1.size(); ++i){
            if (s1[i] != s2[i]) {
                if (counter == 2) return false;
                arr[counter++] = i;
            }
            
        }
        
        if (counter == 0) return true;
        if (counter == 1) return false;
        
        return (s1[arr[0]] == s2[arr[1]] && s2[arr[0]] == s1[arr[1]]);
    }
};