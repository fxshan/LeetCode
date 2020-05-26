class Solution {
 public:
  int reverse(int x) {
    long long a = abs(x * 1LL), res = 0;
    while (a) {
      res = res * 10 + a % 10;
      a /= 10;
    }
    if (res < -(1LL << 31) || res >= 1LL << 31) return 0;
    if (x < 0) res = -res;
    return res;
  }
};
