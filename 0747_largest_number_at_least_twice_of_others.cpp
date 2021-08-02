class Solution {
 public:
  int dominantIndex(vector<int>& nums) {
    int n = nums.size(), m1 = 0, m2 = 0, ind = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] > m1) {
        m2 = m1;
        m1 = nums[i];
        ind = i;
      } else if (nums[i] > m2)
        m2 = nums[i];
    }
    return m1 >= m2 * 2 ? ind : -1;
  }
};
