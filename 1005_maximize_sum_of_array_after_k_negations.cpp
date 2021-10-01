class Solution {
 public:
  int largestSumAfterKNegations(vector<int>& A, int& k) {
    sort(A.begin(), A.end());
    for (int i = 0; k > 0 && i < A.size() && A[i] < 0; k--, i++) A[i] = -A[i];
    return accumulate(A.begin(), A.end(), 0) -
           (k % 2) * *min_element(A.begin(), A.end()) * 2;
  }
};
