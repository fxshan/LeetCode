class Solution {
 public:
  int maxProfit(vectr<int>& prices) {
    int n = prices.size(), best = 0;
    for (int i = 1; i < n; i++) {
      best += max(prices[i] - prices[i - 1], 0);
    }
    return best;
  }
};
