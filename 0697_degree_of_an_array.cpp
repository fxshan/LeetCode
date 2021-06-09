class Solution {
 public:
  int findShortestSubrray(vector<int>& nums) {
    unordered_map<int, vector<int>> mp;
    int d = 0;
    for (int i = 0; i < nums.size(); i++) {
      mp[nums[i]].push_back(i);
      if (mp[nums[i]].size() > d) d = mp[nums[i]].size();
    }
    int res = INT_MAX;
    for (auto x : mp) {
      if (x.second.size() == d) {
        res = min(res, x.second[d - 1] - x.second[0] + 1);
      }
    }
    return res;
  }
};
