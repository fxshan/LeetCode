class Solution {
 public:
  string removeOuterParentheses(string s) {
    int cnt = 0;
    string res = "";
    for (char c : s) {
      if (c == '(' && cnt++ > 0) res += c;
      if (c == ')' && cnt-- > 1) res += c;
    }
    return res;
  }
};
