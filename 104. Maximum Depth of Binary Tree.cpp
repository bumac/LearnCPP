/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        std::stack<std::pair<TreeNode*, int>> nodes;
        int max = 0;
        TreeNode* current = root;
        int current_layer = 1;

        nodes.push(std::pair(current, current_layer));
        
            while(nodes.size() > 0){
                auto c = nodes.top();
                current = c.first;
                current_layer = c.second;
                
                nodes.pop();
                
                if (!current) continue;
                
                max = std::max(max, current_layer);
            
                if (current->left){
                    nodes.push(std::pair(current->left, current_layer + 1));
                }                
                    
                if (current->right){
                    nodes.push(std::pair(current->right, current_layer + 1));
                }
            }
        
        return max;
    }
};