class Solution {
 public:
  bool checkpal(string s, int i, int j) {
    while (i <= j) {
      if (s[i] != s[j]) return false;
      i++;
      j--;
    }
    return true;
  }
  bool validPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i <= j) {
      if (s[i] != s[j]) {
        bool t1 = checkpal(s, i + 1, j);
        bool t2 = checkpal(s, i, j - 1);
        if (t1 || t2)
          return true;
        else if (!t1 && !t2)
          return false;
      }
      i++;
      j--;
    }
    return true;
  }
};
