class Solution {
 public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for (auto& row : image) {
      reverse(row.begin(), row.end());
      for (auto& d : row) d ^= 1;
    }
    return image;
  }
};
