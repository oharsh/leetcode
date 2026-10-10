// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int islandPerimeter(vector<vector<int>> &grid) {

    int n = grid.size();
    int m = grid[0].size();
    int ans{0};
    for (int i{0}; i < n; ++i) {
      for (int j{0}; j < m; ++j) {
        if (grid[i][j] == 1) {
          ans += 4;
          if (i >= 1 && grid[i - 1][j] == 0)
            ans -= 2;
          if (j >= 1 && grid[i][j - 1] == 0)
            ans -= 2;
        }
      }
    }
    return ans;
  }
};
// @leet end
