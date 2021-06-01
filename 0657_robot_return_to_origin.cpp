class Solution {
 public:
  bool judgeCircle(string moves) {
    int v = 0, h = 0;
    for (char c : moves) {
      switch (c) {
        case 'U':
          v++;
          break;
        case 'D':
          v--;
          break;
        case 'R':
          h++;
          break;
        case 'L':
          h--;
          break;
      }
    }
    return v == 0 && h == 0;
  }
};
