class Solution {
 public:
  vector<bool> prefixesDivBy5(vector<int>& A) {
    vector<bool> res;
    int n = 0;
    for (int a : A) {
      n = (n * 2 + a) % 5;
      res.push_back(!n);
    }
    return res;
  }
};
