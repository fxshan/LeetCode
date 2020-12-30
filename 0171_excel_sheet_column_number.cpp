class Solution {
 public:
  int titleToNumber(string s) {
    int n = s.size(), res = 0;
    for (int i = 0; i < n; i++) {
      res += int(s[i] - 'A' + 1) * pow(26, n - i - 1);
    };
    return res;
  }
};
