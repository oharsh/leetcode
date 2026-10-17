// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  set<string> sudokoset;
  bool isValidSudoku(vector<vector<char>> &board) {
    for (int i{0}; i < board.size(); ++i) {
      for (int j{0}; j < board[0].size(); ++j) {
        if (board[i][j] != '.') {
          if (!sudokoset.insert(::))
        }
      }
    }
  }
};
// @leet end
