class Solution {
 public:
  int reoveDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int c = 1, n = nums.size();
    for (int i = 1; i < n; i++) {
      if (nums[i] != nums[i - 1]) nums[c] = nums[i], c++;
    }
    return c;
  }
};
m
