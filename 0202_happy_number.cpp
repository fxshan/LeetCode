class Solution {
 public:
  bool isHappy(int n) {
    unordered_set<int> t;
    while (n != 1 && t.find(n) == t.end()) {
      t.insert(n);
      int ans = 0;
      while (n > 0) {
        ans += (n % 10) * (n % 10);
        n = n / 10;
      }
      n = ans;
    }
    return n == 1;
  }
};
