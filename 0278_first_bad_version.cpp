class Solution {
 public:
  int firstBadVersion(int n) {
    int l = 1, r = n;
    while (l < r - 1) {
      int a = l + (r - l) / 2;
      bool res = isBadVersion(a);
      if (res == false)
        l = a;
      else
        r = a;
    }
    if (isBadVersion(l) == true)
      return l;
    else
      return r;
  }
};
