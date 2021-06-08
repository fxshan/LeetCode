class Solution {
 public:
  int countBinarSubstrings(string s) {
    long n = s.size(), n0 = 0, n1 = 0, res = 0;
    if (n == 1) return 0;
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == '0') {
        n0++;
        if (s[i] != s[i + 1]) {
          res += min(n0, n1);
          n1 = 0;
        }
      } else {
        n1++;
        if (s[i] != s[i + 1]) {
          res += min(n0, n1);
          n0 = 0;
        }
      }
    }
    if (s[n - 1] != s[n - 2])
      res++;
    else if (s[n - 1] == '0') {
      n0++;
      res += min(n0, n1);
    } else if (s[n - 1] == '1') {
      n1++;
      res += min(n0, n1);
    }
    return res;
  }
};
