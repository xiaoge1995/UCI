class Solution {
public:
    string tree2str(TreeNode* t) {
        return !t ? "" : to_string(t->val) + (t->left ? "(" + tree2str(t->left) + ")" : t->right ? "()" : "")
                                           + (t->right ? "(" + tree2str(t->right) + ")" : "");
    }
};