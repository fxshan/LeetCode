class Solution {
 public:
  vector<string> summaryRanges(vector<int>& nums) {
    vector<string> res;
    int n = nums.size();
    if (n == 0) return res;
    int a = nums[0];
    for (int i = 0; i < n; i++) {
      if (i == n - 1 || nums[i] + 1 != nums[i + 1]) {
        if (a != nums[i])
          res.push_back(to_string(a) + "->" + to_string(nums[i]));
        else
          res.push_back(to_string(a));
        if (i != n - 1) a = nums[i + 1];
      }
    }
    return res;
  }
};
