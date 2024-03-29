class Solution {
 public:
  string removeDuplicates(string s) {
    int i = 0, n = s.size();
    for (int j = 0; j < n; ++j, ++i) {
      s[i] = s[j];
      if (i > 0 && s[i] == s[i - 1]) i -= 2;
    }
    return s.substr(0, i);
  }
};
