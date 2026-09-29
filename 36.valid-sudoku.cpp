// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  vector<char> getcoloumn(vector<vector<char>> grid, int col) {
    vector<char> coloumn;
    for (auto &row : grid) {
      coloumn.push_back(row[col]);
    }
    return coloumn;
  }
  bool isrowvalid(vector<char> any) {
    int arr[9] = {0};
    for (auto &temp : any) {
      if (arr[temp - '1'] == 1)
        return false;
      arr[temp - '1'] = 1;
    }
    return true;
  }
  bool iscoloumnvalid(vector<vector<char>> grid, int col) {
    vector<char> coloumn = getcoloumn(grid, col);
    coloumn.reserve(grid.size());
    bool status = isrowvalid(coloumn);
    return status;
  }
  bool isvalid(vector<vector<int>> grid, int x, int y) {
    int row = grid.size();
    int coloumn = grid[0].size();
    if (x >= 0 && x < row && y < coloumn && y >= 0) {
      return true;
    }
    return false;
  }
  bool is_square_valid(vector<vector<char>> grid, int x, int y) {
    int arr[9] = {0};
    for (int i = -1; i < 2; ++i) {
      for (int j = -1; j < 2; ++j) {
        char temp = grid[x + i][y + j];
        if (arr[temp - '1'] == 1)
          return false;
        arr[temp - '1'] = 1;
      }
    }
    return true;
  }
  bool isValidSudoku(vector<vector<char>> &board) {
    for (auto &temp : board) {
      if (!isrowvalid(temp))
        return false;
    }
    for (int i = 0; i < board[0].size(); ++i) {
      if (!iscoloumnvalid(board, i))
        return false;
    }
    for (int x = 1; x < 8; x += 3) {
      for (int y = 1; y < 8; y += 3) {
        if (is_square_valid(board, x, y))
          return false;
      }
    }
    return true;
  }
};
// @leet end
