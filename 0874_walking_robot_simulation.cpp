class Solution {
 public:
  int robotSim(vector<int>& cmd, vector<vector<int>>& obstacles) {
    int res, d = 0, x = 0, y = 0;
    unordered_set<string> obs;
    for (auto& x : obstacles)
      obs.insert(to_string(x[0]) + " " + to_string(x[1]));
    vector<vector<int>> ds = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    for (int c : cmd) {
      if (c == -1) {
        d++;
        if (d == 4) d = 0;
      } else if (c == -2) {
        d--;
        if (d == -1) d = 3;
      } else {
        for (int i = 0; i < c; ++i) {
          string p = to_string(x + ds[d][0]) + " " + to_string(y + ds[d][1]);
          if (obs.find(p) != obs.end()) break;
          x += ds[d][0];
          y += ds[d][1];
        }
      }
      res = max(res, x * x + y * y);
    }
    return res;
  }
};
