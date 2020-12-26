class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    map<int, int> count;
    const int n = nums.size();
    for (const int num : nums) {
      if (++count[num] > n / 2) return num;
    }
    return -1;
  }
};
