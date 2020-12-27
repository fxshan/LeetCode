class Solution {
 public:
  int titleToNumber(string s) {
    string str = s;
    reverse(str.begin(), str.end());
    int r = 0, n = 0;
    for (char c : str) {
      r += ((int)c - 64) * pow(26, n);
      n++;
    };
    return r;
  }
};
