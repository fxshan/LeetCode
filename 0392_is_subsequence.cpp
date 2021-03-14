class Solution {
 public:
  bool isSubsequence(string s, string t) {
    int m = s.size(), n = t.size(), ind = 0;
    for (int i = 0; i < t.size(); i++)
      if (s[ind] == t[i]) ind++;
    return m == ind;
  }
};
