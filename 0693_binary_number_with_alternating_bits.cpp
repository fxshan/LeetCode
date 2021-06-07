class Solution {
 public:
  bool hasAlternatingBits(int n) {
    long a = n;
    int p = 0, q = 1;
    while (a > 0) {
      a -= pow(2, p);
      p += 2;
      if (a == 0) return true;
    }
    while (n > 0) {
      n -= pow(2, q);
      q += 2;
      if (n == 0) return true;
    }
    return false;
  }
};
