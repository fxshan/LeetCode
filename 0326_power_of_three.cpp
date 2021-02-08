class Solution {
 public:
  bool isPowerOfThree(int n) {
    int a = pow(3, 19);
    return (n > 0 && a % n == 0);
  }
};
