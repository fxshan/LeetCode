class Solution {
 public:
  int numRookCaptures(vector<vector<char>>& board) {
    int a, b;
    for (int i = 0; i < board.size(); ++i)
      for (int j = 0; j < board[0].size(); ++j)
        if (board[i][j] == 'R') {
          a = i;
          b = j;
        }
    int res = 0;
    vector<vector<int>> direction = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    for (auto& d : direction) {
      for (int x = a + d[0], y = b + d[1]; 0 <= x && x < 8 && 0 <= y && y < 8;
           x += d[0], y += d[1]) {
        if (board[x][y] == 'p') res++;
        if (board[x][y] != '.') break;
      }
    }
    return res;
  }
};
