class Solution {
 public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> m(nums1.begin(), nums1.end());
    vector<int> res;
    for (int x : nums2)
      if (m.count(x)) {
        res.push_back(x);
        m.erase(x);
      }
    return res;
  }
};
