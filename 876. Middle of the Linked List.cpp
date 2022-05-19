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
    ListNode* middleNode(ListNode* head) {
        std::vector<ListNode*> r;
        int result = 0;

        ListNode* current = head;
        r.push_back(current);
        while(current->next){
            current = current->next;
            r.push_back(current);
        }
        
        return r[r.size() / 2];
    }
};