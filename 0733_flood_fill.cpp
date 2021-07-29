class Solution {
 public:
  void dfs(vector<vector<int>>& image, int i, int j, int c2, int c1) {
    if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() ||
        image[i][j] != c1)
      return;
    image[i][j] = c2;
    dfs(image, i - 1, j, c2, c1);
    dfs(image, i + 1, j, c2, c1);
    dfs(image, i, j - 1, c2, c1);
    dfs(image, i, j + 1, c2, c1);
  }
  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                int newColor) {
    if (image[sr][sc] != newColor) dfs(image, sr, sc, newColor, image[sr][sc]);
    return image;
  }
};
