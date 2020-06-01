class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    int r = 1, l = 1;
    while (l <= x / 10) l *= 10;
    while (r < l) {
      if ((x / l) % 10 != (x / r) % 10) return false;
      l /= 10, r *= 10;
    }
    return true;
  }
};
