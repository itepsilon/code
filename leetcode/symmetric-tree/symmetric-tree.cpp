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
        bool isMirror(TreeNode* left, TreeNode* right) {
            if(left == NULL && right == NULL) return true;
            if(left != NULL && right != NULL) {
                if(left->val != right->val) return false;
                return isMirror(left->left, right->right) && isMirror(left->right, right->left );
            } else {
                return false;
            }
        }
        bool isSymmetric(TreeNode* root) {
            if(root == NULL) return true;
            if(root->left == NULL && root->right == NULL) return true;
            if(root->left && root->right) {
                return isMirror(root->left, root->right);
            }
            return false;
        }
};