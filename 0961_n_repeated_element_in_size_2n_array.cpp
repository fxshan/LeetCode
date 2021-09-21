class Solution {
 public:
  int repeatedNTimes(vector<int>& nums) {
    unordered_set<int> seen;
    for (int n : nums) {
      if (seen.count(n)) return n;
      seen.insert(n);
    }
    return 0;
  }
};
