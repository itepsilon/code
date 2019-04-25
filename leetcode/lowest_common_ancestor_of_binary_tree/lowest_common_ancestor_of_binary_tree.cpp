/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <stack>
#include <unordered_map>
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
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    unordered_map<TreeNode*, TreeNode*> parent;
    unordered_map<TreeNode*, int> level;

    stack<TreeNode*> s;
    parent[root] = NULL;
    level[root] = 0;
    s.push(root);

    while (!s.empty()) {
      TreeNode* current = s.top();
      s.pop();
      if (current->left) {
        parent[current->left] = current;
        level[current->left] = level[current] + 1;
        s.push(current->left);
      }
      if (current->right) {
        parent[current->right] = current;
        level[current->right] = level[current] + 1;
        s.push(current->right);
      }
    }

    TreeNode* p_ancestor = p;
    TreeNode* q_ancestor = q;

    while (p_ancestor != q_ancestor) {
      if (level[p_ancestor] > level[q_ancestor]) {
        p_ancestor = parent[p_ancestor];
      } else if (level[p_ancestor] < level[q_ancestor]) {
        q_ancestor = parent[q_ancestor];
      } else {
        p_ancestor = parent[p_ancestor];
        q_ancestor = parent[q_ancestor];
      }
    }
    return p_ancestor;
  }
};