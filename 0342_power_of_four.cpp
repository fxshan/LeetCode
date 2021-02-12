class Solution {
 public:
  bool isPowerOfFour(int n) {
    long long a = 1;
    while (a <= n) {
      if (a == n) return true;
      a *= 4;
    }
    return false;
  }
};
