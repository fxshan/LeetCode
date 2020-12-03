class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    if (nums.empty()) return 0;
    int p = 0, n = nums.size();
    for (int i = 0; i < n; i++) {
      if (nums[i] != val) nums[p] = nums[i], p++;
    }
    return p;
  }
};
