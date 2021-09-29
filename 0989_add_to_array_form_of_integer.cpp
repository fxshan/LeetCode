class Solution {
 public:
  vector<int> addToArrayForm(vector<int>& A, int k) {
    for (int i = A.size() - 1; i >= 0; --i) {
      k += A[i];
      A[i] = k % 10;
      k /= 10;
    }
    while (k) {
      A.insert(A.begin(), k % 10);
      k /= 10;
    }
    return A;
  }
};
