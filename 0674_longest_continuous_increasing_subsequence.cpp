class Solution {
 public:
  int findLengthOfLIS(vector<int>& nums) {
    int res = 1, cnt = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] > nums[i - 1])
        cnt++;
      else {
        res = max(res, cnt);
        cnt = 1;
      }
      res = max(res, cnt);
    }
    return res;
  }
};
