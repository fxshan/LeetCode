class Solution {
 public:
  vector<int> sortedSquares(vector<int>& A) {
    int n = A.size();
    vector<int> res(n);
    int i = 0, j = n - 1;
    for (int k = n - 1; k >= 0; --k) {
      if (abs(A[i]) > abs(A[j]))
        res[k] = A[i] * A[i++];
      else
        res[k] = A[j] * A[j--];
    }
    return res;
  }
};
