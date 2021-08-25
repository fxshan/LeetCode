class Solution {
 public:
  int binaryGap(int& n) {
    int res = 0;
    for (int d = -32; n; d++, n /= 2)
      if (n % 2) res = max(res, d), d = 0;
    return res;
  }
};
