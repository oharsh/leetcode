// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  bool isUgly(int n) {
    vector<int> factor;
    for (int i = 2; i < n / i; ++i) {
      while (n % i == 0) {
        if (i != 2 && i != 3 && i != 5)
          return false;
        n = n / i;
        factor.push_back(i);
      }
    }
    return true;
  }
};
// @leet end
