class Solution {
 public:
  vector<int> numberOfLines(vector<int>& widths, string s) {
    int l = 1, w = 0;
    for (char c : s) {
      w += widths[c - 'a'];
      if (w > 100) {
        l++;
        w = widths[c - 'a'];
      }
    }
    return {l, w};
  }
};
