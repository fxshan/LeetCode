class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int n = nums.size();
    int l = 0, r = n - 1;
    if (target == nums[l]) return l;
    if (target == nums[r]) return r;
    while (l + 1 < r) {
      if (target > nums[(r + l + 1) / 2])
        l = (r + l + 1) / 2;
      else if (target < nums[(r + l + 1) / 2])
        r = (r + l + 1) / 2;
      else
        return (r + l + 1) / 2;
    }
    return -1;
  }
};
