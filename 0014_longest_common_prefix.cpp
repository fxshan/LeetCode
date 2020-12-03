class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    string res = "";
    if (strs.empty()) return res;
    string t = strs[0];
    int n = t.size();
    for (string& s : strs) n = min(n, (int)s.size());
    for (int i = 0; i < n; i++) {
      for (string& s : strs)
        if (s[i] != t[i]) return res;
      res.push_back(t[i]);
    }
    return res;
  }
};
