/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int tryRob(TreeNode* root, map<TreeNode, int> M){
        if(root == NULL) return 0;
        if(M.find(root) != NULL){
            val = M.find(root)->second;
        }
        int val = 0;
        
        if(root->left != NULL){
            val += tryRob(root->left->left, M) + tryRob(root->left->right);
        }
        if(root->right != NULL){
            val += tryRob(root->right->right, M) + tryRob(root->right->left);
        }
        val = max(val + root->val, tryRob(root->left) + tryRob(root->right));
        M.insert(pair<TreeNode, int>(root, val));
        
        return val;
    }
    
    int rob(TreeNode* root) {
        map<root, int> M;
        return tryRob(root, M);
    }
    
};