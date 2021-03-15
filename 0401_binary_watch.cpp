class Solution {
 public:
  vector<int> times(int n, int limit, int on) {
    vector<int> res;
    for (int i = 0; i <= limit; i++) {
      int cnt = 0;
      for (int j = 0; j < n; j++)
        if (i & (1 << j)) cnt++;
      if (cnt == on) {
        res.push_back(i);
      }
    }
    return res;
  }

  vector<string> readBinaryWatch(int num) {
    vector<string> res;
    for (int i = 0; i <= num; i++) {
      vector<int> h = times(4, 11, i);
      vector<int> m = times(6, 59, num - i);
      for (int a : h) {
        for (int b : m)
          res.push_back(to_string(a) + (b < 10 ? ":0" : ":") + to_string(b));
      }
    }
    return res;
  }
};
