class Solution {
 public:
  double largestTriangleArea(vector<vector<int>>& points) {
    double res = 0;
    for (vector i : points)
      for (vector j : points)
        for (vector k : points)
          res = max(res, 0.5 * (i[0] * (j[1] - k[1]) + j[0] * (k[1] - i[1]) +
                                k[0] * (i[1] - j[1])));
    return res;
  }
};
