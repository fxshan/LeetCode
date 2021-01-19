class Solution {
 public:
  bool wordPattern(string pattern, string str) {
    istringstream ss(str);
    map<char, string> p;
    map<string, char> s;
    int n = pattern.size(), i = 0;
    for (char c : pattern) {
      if (!p.count(c)) {
        p[c] = ss[i];
        s[ss[i]] = c;
      }
      if (p.count)                  :P
    }
  }
};
