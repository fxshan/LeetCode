class Solution {
 public:
  string addBinary(string a, tring b) {
    int n = a.size(), m = b.size();
    string res;
    int k = max(n, m);
    int x, y, carry = 0;
    for (int i = 0; i < k; i++) {
      x = i < n ? a[n - 1 - i] - '0' : 0;
      y = i < m ? b[m - 1 - i] - '0' : 0;
      x += y + carry;
      carry = x / 2;
      x %= 2;
      res.push_back(char(x + '0'));
    }
    if (carry) res.push_back('1');
    reverse(res.begin(), res.end());
    return res;
  }
};
