class Solution {
 public:
  bool hasGroupsSizeX(vector<int>& deck) {
    unordered_map<int, int> cnt;
    for (int i : deck) cnt[i]++;
    int res = 0;
    for (auto x : cnt) res = __gcd(x.second, res);
    return res > 1;
  }
};
