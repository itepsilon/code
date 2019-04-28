#include <string>
#include <unordered_map>

using namespace std;

class TrieNode {
 public:
  unordered_map<char, TrieNode*> children;
  bool isCompleteWord;
  TrieNode(bool complete = false) { isCompleteWord = complete; }
};

class Trie {
 public:
  /** Initialize your data structure here. */
  Trie() { root = new TrieNode(); }

  /** Inserts a word into the trie. */
  void insert(const string& word) {
    if (word.size() <= 0) return;
    if (root == NULL) root = new TrieNode(false);

    TrieNode* temp = root;
    for (int i = 0; i < word.length(); i++) {
      if (temp->children.find(word[i]) == temp->children.end()) {
        temp->children[word[i]] = new TrieNode();
      }
      temp = temp->children[word[i]];
    }

    temp->isCompleteWord = true;
  }

  /** Returns if the word is in the trie. */
  bool search(const string& word) {
    if (word.size() <= 0) return false;

    TrieNode* temp = root;
    for (int i = 0; i < word.length(); i++) {
      if (temp->children.find(word[i]) == temp->children.end()) return false;
      temp = temp->children[word[i]];
    }

    return temp->isCompleteWord;
  }

  /** Returns if there is any word in the trie that starts with the given
   * prefix. */
  bool startsWith(const string& prefix) {
    if (prefix.size() <= 0) return false;

    TrieNode* temp = root;
    for (int i = 0; i < prefix.length(); i++) {
      if (temp->children.find(prefix[i]) == temp->children.end()) return false;
      temp = temp->children[prefix[i]];
    }

    return true;
  }

 private:
  TrieNode* root;
};