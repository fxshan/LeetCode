class Solution {
 public:
  bool canThreePartsEqualSum(vector<int>& A) {
    int sum = accumulate(A.begin(), A.end(), 0);
    if (sum % 3) return false;
    sum /= 3;
    int cnt = 0, s = 0;
    for (int a : A) {
      s += a;
      if (s == sum) {
        cnt++;
        s = 0;
      }
    }
    return cnt >= 3;
  }
};
