#include <stack>
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
  vector<int> preorder(Node* root) {
    vector<int> result;
    if (!root) return result;
    stack<Node*> container;
    container.push(root);
    while (!container.empty()) {
      Node* item = container.top();
      result.push_back(item->val);
      container.pop();
      for (auto it = item->children.rbegin(); it != item->children.rend();
           it++) {
        container.push(*it);
      }
    }
    return result;
  }
};