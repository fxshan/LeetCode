class Solution {
 public:
  int smallestRangeI(vector<int>& A, int k) {
    int ma = A[0], mi = A[0];
    for (int i : A) {
      ma = max(ma, i);
      mi = min(mi, i);
    }
    return max(0, ma - mi - 2 * k);
  }
};
