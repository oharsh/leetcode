// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int findGCD(vector<int> &nums) {
    int ans = 0;
    auto minmax = minmax_element(nums.begin(), nums.end());
    ans = gcd(*minmax.first, *minmax.second);
    return ans;
  }
};
// @leet end
