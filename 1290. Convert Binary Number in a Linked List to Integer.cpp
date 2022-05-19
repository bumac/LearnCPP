/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        std::vector<int> r;
        int result = 0;
        
        ListNode* current = head;
        r.push_back(current->val);
        while(current->next){
            current = current->next;
            r.push_back(current->val);
        }
        
        for(int i = 0; i < r.size(); i++){
            result += r[i] * std::pow(2, r.size() - 1 - i);
        }
        return result;
    }
};