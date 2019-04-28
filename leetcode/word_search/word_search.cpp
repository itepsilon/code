#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  bool exist(const vector<vector<char>>& board, const string& word) {
    int rows = board.size();
    int cols = board[0].size();
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board[0].size(); j++) {
        if (dfs(board, word, i, j, 0, visited)) {
          return true;
        }
      }
    }
    return false;
  }

  bool dfs(const vector<vector<char>>& board, const string& word, int i, int j,
           int k, vector<vector<bool>>& visited) {
    int rows = board.size();
    int cols = board[0].size();
    if (i < 0 || j < 0 || i >= rows || j >= cols || visited[i][j] ||
        board[i][j] != word[k]) {
      return false;
    }

    visited[i][j] = true;
    if (k == word.size() - 1) {
      return true;
    } else {
      bool result = dfs(board, word, i - 1, j, k + 1, visited) ||
                    dfs(board, word, i + 1, j, k + 1, visited) ||
                    dfs(board, word, i, j - 1, k + 1, visited) ||
                    dfs(board, word, i, j + 1, k + 1, visited);
      visited[i][j] = false;
      return result;
    }
  }
};