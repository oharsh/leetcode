// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  bool isprime(int m) {
    for (int i = 2; i <= m / i; ++i) {
      if (!(m % i))
        return false;
    }
    return true;
  }
  bool isThree(int n) {

    // odd
    // prime n < 10000
    // prime less than  100
    // perfect isPerfectSquare
    //
    if (n == 4)
      return true;
    if (!(n % 2))
      return false;
    for (int i = 3; i < 100; i += 2) {
      if (!isprime(i))
        continue;
      if (i * i == n)
        return true;
    }
    return false;
  }
};
// @leet end
