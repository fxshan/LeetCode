class Solution {
 public:
  int strStr(string haystack, string needle) {
    if (needle.empty()) return 0;
    int n = haystack.size(), l = needle.size();
    int res = -1;
    for (int i = 0; i < n - l + 1; i++) {
      if (needle == haystack.substr(i, l)) return i;
    }
    return res;
  }
};
