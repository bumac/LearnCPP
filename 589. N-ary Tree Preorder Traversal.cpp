/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        if (!root) return {};
        
        vector<int> result;
        std::stack<Node*> node_stack;

        node_stack.push(root);
        

        while(!node_stack.empty()){
            auto current = node_stack.top();
            node_stack.pop();
            
            result.push_back(current->val);
        
            for(int i = current->children.size() - 1; i >= 0; i--){
                node_stack.push(current->children[i]);
            }
        }
        
        return result;
    }
};