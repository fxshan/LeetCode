class Solution {
 public:
  bool wordPattern(string pattern, string str) {
    istringstream ss(str);
    map<char, int> p;
    map<string, int> s;
    int n = pattern.size(), i = 0;
    for (string word; ss >> word; i++) {
      if (i == n || p[pattern[i]] != s[word]) return false;
      p[pattern[i]] = s[word] = i + 1;
    }
    return i == n;
  }
};
