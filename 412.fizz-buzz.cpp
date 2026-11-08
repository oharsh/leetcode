// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  vector<string> fizzBuzz(int n) {
    vector<string> ans;
    for (int i = 0; i < n; ++i) {
      if (!(i % 3) && !(i % 5))
        ans.push_back("FizzBuzz");
      else if (!(i % 3))
        ans.push_back("Fizz");
      else if (!(i % 5))
        ans.push_back("Buzz");
      else
        ans.push_back(to_string(i));
    }
    return ans;
  }
};
// @leet end
