class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        
        for (int i = 0; i < nums1.size(); i++){
            bool f = false;
            
            int j = 0;
            while (nums2[j] != nums1[i]){
                ++j;
            }
            
            
            for(; j < nums2.size(); j++){

                
                
                if (nums2[j] > nums1[i]) {
                    result.push_back(nums2[j]);
                    f = true;
                    break;
                }
            }
            
            if (!f) {
                result.push_back(-1);
                f = false;
            }
        }
        return result;
    }
};