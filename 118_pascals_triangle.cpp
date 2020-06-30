class Solution {
 public:
  vector<vector<int>> generate(int num) {
    vector<vector<int>> res;
    if (num == 0) return res;
    res.push_back({1});
    for (int i = 1; i < num; i++) {
      int n = res.back().size();
      vector<int> v(n + 1, 1);
      for (int j = 1; j < n; j++) v[j] = res.back()[j - 1] + res.back()[j];
      res.push_back(v);
    }
    return res;
  }
};
