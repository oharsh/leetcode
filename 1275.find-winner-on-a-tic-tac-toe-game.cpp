// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  vector<vector<char>> grid{3, vector<char>(3, ' ')};
  bool check_row() {
    for (auto &temp : grid) {
      if (temp[0] == temp[1] && temp[1] == temp[2])
        return true;
    }
    return false;
  }
  bool check_column() {
    for (int i = 0; i < 3; ++i) {
      if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2])
        return true;
    }
    return false;
  }
  bool check_diagnol() {
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2])
      return true;
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0])
      return true;
    return false;
  }
  bool isdone() {
    if (check_column() || check_row() || check_diagnol())
      return true;
    return false;
  }
  void fill(vector<int> move, bool player) {
    int i = move[0];
    int j = move[1];
    if (player)
      grid[i][j] = 'X';
    else
      grid[i][j] = 'O';
  }
  string tictactoe(vector<vector<int>> &moves) {
    bool player = true;
    for (auto &temp : moves) {
      fill(temp, player);
      if (isdone()) {
        return (player ? "A" : "B");
      }
      player = !player;
    }
    if (moves.size() != 9)
      return "Pending";
    else
      return "Draw";
  }
};
// @leet end
