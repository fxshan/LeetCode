class Solution {
 public:
  int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    if (n == 3) return nums[0] * nums[1] * nums[2];
    int res1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int res2 = nums[n - 1] * nums[0] * nums[1];
    return res1 > res2 ? res1 : res2;
  }
};
