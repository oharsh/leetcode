// @leet imports start
#include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;
// @leet imports end

// @leet start
class Solution {
public:
  bool isUgly(int n) {
    if (n == INT_MIN)
      return false;
    vector<int> factor;
    int original = abs(n);
    for (int i = 2; i <= original / i; ++i) {
      while (n % i == 0) {
        if (i != 2 && i != 3 && i != 5)
          return false;
        n = n / i;
        factor.push_back(i);
      }
    }
    if (n <= 5)
      return true;
    return false;
  }
};
// @leet end
