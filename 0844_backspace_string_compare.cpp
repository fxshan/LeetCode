class Solution {
 public:
  bool backspaceCompare(string s, string t) {
    int i = s.size() - 1, j = t.size() - 1;
    while (true) {
      int cnt = 0;
      while (i >= 0 && (s[i] == '#' || cnt > 0)) {
        cnt += s[i] == '#' ? 1 : -1;
        i--;
      }
      cnt = 0;
      while (j >= 0 && (t[j] == '#' || cnt > 0)) {
        cnt += t[j] == '#' ? 1 : -1;
        j--;
      }
      if (i >= 0 && j >= 0 && s[i] == t[j]) {
        i--;
        j--;
      } else
        break;
    }
    return j == -1 && i == -1;
  }
};
