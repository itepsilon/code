#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
 public:
  vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    helper(root, result);
    return result;
  }

  void helper(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;
    helper(root->left, result);
    result.push_back(root->val);
    helper(root->right, result);
  }
};