/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <queue>
#include <vector>

using namespace std;
class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> v;
    if (!root) return v;

    queue<TreeNode*> q;
    vector<int> level;
    q.push(root);

    while (!q.empty()) {
      int size = q.size();
      vector<int> level;
      while (size--) {
        TreeNode* t = q.front();
        level.push_back(t->val);
        if (t->left) q.push(t->left);
        if (t->right) q.push(t->right);
        q.pop();
      }
      v.push_back(level);
      level.clear();
    }
    return v;
  }
};