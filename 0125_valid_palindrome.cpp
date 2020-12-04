class Solution {
 public:
  bool isPalindrome(string s) {
    string str = "";
    for (char c : s) {
      if (isalnum(c)) str += tolower(c);
    }
    s = str;
    reverse(s.begin(), s.end());
    if (s == str)
      return true;
    else
      return false;
  }
};
