class Solution {
 public:
  string convertToTitle(int n) {
    string s;
    while (n != 0) {
      n--;
      s.push_back('A' + n % 26);
      n /= 26;
    };
    reverse(s.begin(), s.end());
    return s;
  }
};
