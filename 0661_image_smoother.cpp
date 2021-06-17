class Solution {
 public:
  vecor<vector<int>> imageSmoother(vector<vector<int>>& img) {
    int m = img.size(), n = img[0].size();
    vector<vector<int>> res(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        int cnt = 0;
        for (int ii = i - 1; ii < i + 2; ii++) {
          for (int jj = j - 1; jj < j + 2; jj++) {
            if (0 <= ii && ii < m && 0 <= jj && jj < n) {
              cnt++;
              res[i][j] += img[ii][jj];
            }
          }
        }
        res[i][j] /= cnt;
      }
    }
    return res;
  }
};
