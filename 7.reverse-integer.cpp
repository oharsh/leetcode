// @leet imports start
#include <bits/stdc++.h>
#include <climits>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int reverse(int x) {
    bool neg = x < 0 ? true : false;
    int k = 0;
    int copy = x;
    x = abs(x);
    while (x > 0) {
      if (k < INT_MAX - x % 10)
        k = k * 10 + x % 10;
      x / = 10;
      // how to check overflow happened
      // longest int
    }
  }
};
// @leet end
