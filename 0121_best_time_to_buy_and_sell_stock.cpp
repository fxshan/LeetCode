class Solution {
 public:
  int maxProfit(vetor<int>& prices) {
    int low = INT_MAX, ans = 0;
    for (int x : prices) {
      low = min(low, x);
      ans = max(ans, x - low);
    }
    return ans;
  }
};
