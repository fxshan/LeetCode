class Solution {
 public:
  string describe(string& s) {
    char prev = s[0];
    string res;
    int count = 0;
    for (char c : s) {
      if (c == prev)
        count++;
      else {
        res.push_back('0' + count);
        res.push_back(prev);
        count = 1;
      }
      prev = c;
    }
    res.push_back('0' + count);
    res.push_back(prev);
    return res;
  }

  string countAndSay(int n) {
    string s = "1";
    while (--n) s = describe(s);
    return s;
  }
};
