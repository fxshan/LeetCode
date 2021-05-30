class Solution {
 public:
  vector<int> findErrorNums(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> res;
    int dup = -1, missing = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] > nums[i - 1] + 1) missing = nums[i - 1] + 1;
      if (nums[i] == nums[i - 1]) dup = nums[i];
    }
    res.push_back(dup);
    if (nums[nums.size() - 1] != nums.size())
      res.push_back(nums.size());
    else
      res.push_back(missing);
    return res;
  }
};
