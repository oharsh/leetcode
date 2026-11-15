// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int smallestEvenMultiple(int n) {
    // fast check for even
    return n << (n & 1);
    if (n % 2 == 0)
      return n;
    return n * 2;
  }
};
// @leet end
