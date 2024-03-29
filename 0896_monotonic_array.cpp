class Solution {
 public:
  bool isMonotonic(vector<int>& A) {
    bool dec = true, inc = true;
    for (int i = 1; i < A.size(); ++i) {
      inc &= A[i] >= A[i - 1];
      dec &= A[i] <= A[i - 1];
    }
    return inc || dec;
  }
};
