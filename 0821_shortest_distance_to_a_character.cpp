class Solution {
 public:
  vector<int> shortestToChar(string s, char c) {
    int n = s.size(), pre = -n;
    vector<int> res(n, n);
    for (int i = 0; i < n; i++) {
      if (s[i] == c) pre = i;
      res[i] = i - pre;
    }
    for (int i = pre - 1; i >= 0; i--) {
      if (s[i] == c) pre = i;
      res[i] = min(res[i], pre - i);
    }
    return res;
  }
};
