// @leet imports start
#include <bits/stdc++.h>
#include <set>
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
          if (!(sudokoset.insert(string("row") + char(i) + "has" + board[i][j])
                    .second) ||
              !(sudokoset.insert(string("column") + char(j) + "has" +
                                 board[i][j]))
                   .second ||
              !(sudokoset.insert(string("box") + static_cast<char>(i / 3) +
                                 static_cast<char>(j / 3) + board[i][j]))
                   .second)
            return false;
        }
      }
    }
    return true;
  }
};
// @leet end
