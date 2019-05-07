#include <iostream>
#include <map>
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
  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int len = preorder.size();
    if (len == 0) return NULL;
    map<int, int> mapper;
    for (int i = 0; i < inorder.size(); i++) {
      mapper[inorder[i]] = i;
    }
    return buildTree(preorder, 0, inorder, 0, len, mapper);
  }

  TreeNode* buildTree(vector<int>& preorder, int pi, vector<int>& inorder,
                      int ii, int size, map<int, int>& mapper) {
    if (size == 0) return NULL;
    if (size == 1) return new TreeNode(preorder[pi]);
    TreeNode* root = new TreeNode(preorder[pi]);
    int left_size = mapper[preorder[pi]] - ii;
    int right_size = size - left_size - 1;
    root->left = buildTree(preorder, pi + 1, inorder, ii, left_size, mapper);
    root->right = buildTree(preorder, pi + left_size + 1, inorder,
                            mapper[preorder[pi]] + 1, right_size, mapper);
    return root;
  }
};