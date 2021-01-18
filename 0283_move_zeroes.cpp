class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    int cur = 0, last = 0;
    while (cur < nums.size()) {
      if (nums[cur] != 0) {
        swap(nums[last], nums[cur]);
        last++;
      }
      cur++;
    }
  }
};
