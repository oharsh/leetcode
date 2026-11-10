// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  bool isPerfectSquare(int num) {
    for (int i = 1; i <= num / i; ++i) {
      if (i == num / i && !(num % i))
        return true;
    }
    return false;
  }
};
// @leet end
