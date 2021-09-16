class Solution {
 public:
  vector<int> diStringMatch(string s) {
    int d = count(s.begin(), s.end(), 'D'), i = d;
    vector<int> res{d};
    for (char& c : s) res.push_back(c == 'I' ? ++i : --d);
    return res;
  }
};
