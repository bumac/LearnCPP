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
    int sumOfLeftLeaves(TreeNode* root) {
        std::stack<TreeNode*> nodes;
        int sum = 0;
        TreeNode* current = root;

        nodes.push(current);
        
        while(nodes.size()){
            current = nodes.top();
            nodes.pop();

            if (!current) continue;

            if (current->left){
                if (!current->left->left && !current->left->right){
                    sum += current->left->val;
                }
                else{
                    nodes.push(current->left);                    
                }
            }                

            if (current->right){
                nodes.push(current->right);
            }
        }
        
        return sum;
    }
};