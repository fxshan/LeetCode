class Solution {
 public:
  int pivotIndex(vector<int>& nums) {
    int left = 0, sum = 0;
    for (int num : nums) sum += num;
    for (int i = 0; i < nums.size(); i++) {
      if (left == sum - nums[i] - left) return i;
      left += nums[i];
    }
    return -1;
  }
};
