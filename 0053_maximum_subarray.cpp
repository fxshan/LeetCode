class Solution {
 public:
  int maxSubArray(vector<int>& a) {
    int n = a.size();
    int sum = 0, ans = a[0];
    int min_before = 0;
    for (int x : a) {
      sum += x;
      ans = max(ans, sum - min_before);
      min_before = min(min_before, sum);
    }
    return ans;
  }
};
