// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  bool checkPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / i; ++i) {
      if (!(num % i)) {
        sum += i;
        if (i != num / i)
          sum += num / i;
      }
    }
    return sum - num == num;
  }
};
// @leet end
