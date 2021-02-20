class Solution {
 public:
  int guessNumber(int n) {
    int l = 1, r = n;
    while (l < r) {
      int mid = l + (r - l) / 2;
      int cmp = guess(mid);
      if (cmp == 0) return mid;
      if (cmp == 1) {
        l = mid + 1;
      } else {
        r = mid;
      }
    }
    return l;
  }
};
