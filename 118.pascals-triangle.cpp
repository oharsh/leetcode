// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    ans.reserve(numRows);
    ans.push_back(vector<int>(1, 1));
    for (int i = 0; i < numRows - 1; ++i) {
      vector<int> temp = ans[i];
      temp.insert(temp.begin(), 0);
      temp.insert(temp.end(), 0);
      vector<int> tempans(0);
      tempans.reserve(temp.size() - 1);
      for (int i = 0; i < temp.size() - 1; ++i) {
        tempans.push_back(temp[i] + temp[i + 1]);
      }
      ans.push_back(tempans);
    }
    return ans;
  }
};
// @leet end
