class Solution {
 public:
  vector<int> findErrorNums(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int dup = -1, missing = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] > nums[i - 1] + 1) missing = nums[i - 1] + 1;
      if (nums[i] == nums[i - 1]) dup = nums[i];
    }
    if (nums[nums.size() - 1] != nums.size()) missing = nums.size();
    return {dup, missing};
  }
};
