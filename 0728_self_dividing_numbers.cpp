class Solution {
 public:
  bool check(int n) {
    int m = n;
    while (m > 0) {
      int t = m % 10;
      if (t == 0 || n % t != 0) return false;
      m /= 10;
    }
    return true;
  }
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    for (int i = left; i <= right; i++)
      if (check(i) == true) res.push_back(i);
    return res;
  }
};
