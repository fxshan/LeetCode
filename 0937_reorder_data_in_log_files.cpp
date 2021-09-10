class Solution {
 public:
  vector<string> reorderLogFiles(vector<string>& logs) {
    vector<string> d, res;
    vector<pair<string, string>> l;
    for (string log : logs) {
      int i = 0;
      while (log[i] != ' ') ++i;
      if (isdigit(log[i + 1]))
        d.push_back(log);
      else
        l.emplace_back(log.substr(0, i), log.substr(i + 1));
    }
    sort(l.begin(), l.end(), [&](auto& a, auto& b) {
      return a.second == b.second ? a.first < b.first : a.second < b.second;
    });
    for (auto x : l) res.push_back(x.first + ' ' + x.second);
    for (string s : d) res.push_back(s);
    return res;
  }
};
