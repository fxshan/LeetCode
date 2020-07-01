class Solution {
 public:
  vector<int> getRow(int k) {
    vector<int> res(1, 1);
    while (k--) {
      int n = res.size();
      vector<int> v(n + 1, 1);
      for (int j = 1; j < n; j++) v[j] = res[j - 1] + res[j];
      res = v;
    }
    return res;
  }
};
