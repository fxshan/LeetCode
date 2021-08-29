class Solution {
 public:
  int projectionArea(vector<vector<int>>& grid) {
    int res = 0, n = grid.size(), x, y;
    for (int i = 0; i < n; ++i) {
      x = 0, y = 0;
      for (int j = 0; j < n; ++j) {
        x = max(x, grid[i][j]);
        y = max(y, grid[j][i]);
        if (grid[i][j]) ++res;
      }
      res += x + y;
    }
    return res;
  }
};
