// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
  int sm_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
      sum += n % 10;
      n = n / 10;
    }
    return sum;
  }
  int pro_of_digits(int n) {
    if (n == 0)
      return 0;
    int pro = 1;
    while (n > 0) {
      pro *= n % 10;
      n /= 10;
    }
    return pro;
  }

public:
  int subtractProductAndSum(int n) {
    return pro_of_digits(n) - sm_of_digits(n);
  }
};
// @leet end
