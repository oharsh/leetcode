// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int commonFactors(int a, int b) {
    if (a > b)
      swap(a, b);
    int count = 0;
    for (int i = 1; i <= a / i; ++i) {
      if (!(a % i)) {
        if (!(b % i))
          ++count;
        if ((i != a / i) && !(b % (a / i)))
          ++count;
      }
    }
    return count;
  }
};
// @leet end
