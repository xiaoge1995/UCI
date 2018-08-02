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
    map<TreeNode, int> M;
    void findHeight(TreeNode *node, int depth, int &height, int &res){
        if(node == NULL)
            return;
        if(depth>height){
            res = node->val;
            height = depth;
        }
        findHeight(node->left, depth+1, height, res);
        findHeight(node->right, depth+1, height, res);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int height = 0;
        int res = 0;
        findHeight(root, 1, height, res);
        return res;
    }
};