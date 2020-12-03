class Solution {
 public:
  int lengthOfLastWord(string s) {
    int p = -1;
    while (!s.empty() && s.back() == ' ') s.pop_back();
    int n = s.size();
    for (int i = 0; i < n; i++) {
      if (s[i] == ' ') p = i;
    }
    return p < 0 ? n : n - 1 - p;
  }
};
