class Solution {
 public:
  vector<int> shortestToChar(string s, char c) {
    int n = s.size();
    vector<int> res(n);
    for (int i = 0; i < n; i++) res[i] = s[i] == c ? 0 : n;
    for (int i = 1; i < n; i++) res[i] = min(res[i], res[i - 1] + 1);
    for (int i = n - 2; i >= 0; i--) res[i] = min(res[i], res[i + 1] + 1);
    return res;
  }
};
