#include <queue>
#include <vector>
using namespace std;

class Node {
 public:
  int val;
  vector<Node*> children;

  Node() {}

  Node(int _val, vector<Node*> _children) {
    val = _val;
    children = _children;
  }
};

class Solution {
 public:
  vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> result;
    if (!root) return result;
    queue<Node*> container;
    vector<int> level;
    container.push(root);
    while (!container.empty()) {
      level.clear();
      int size = container.size();
      while (size--) {
        Node* item = container.front();
        level.push_back(item->val);
        for (int i = 0; i < item->children.size(); i++) {
          if (item->children[i]) {
            container.push(item->children[i]);
          }
        }
        container.pop();
      }
      result.push_back(level);
    }
    return result;
  }
};