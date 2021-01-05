class Solution {
 public:
  int countPrimes(int n) {
    if (n < 2) return 0;
    vector<int> prime(n, 1);
    for (int i = 2; i * i < n; i++) {
      for (int j = 2; j * i < n; j++) prime[j * i] = 0;
    }
    return accumulate(prime.begin(), prime.end(), -2);
  }
};
