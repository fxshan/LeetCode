class NumArray {
 public:
  vector<int> accu;
  NumArray(vector<int>& nums) {
    accu.push_back(0);
    for (int num : nums) {
      accu.push_back(accu.back() + num);
    }
  }

  int sumRange(int i, int j) { return accu[j + 1] - accu[i]; }
};
