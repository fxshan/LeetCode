class Solution {
 public:
  int numUniqueEmails(vector<string>& emails) {
    unordered_set<string> E;
    for (string s : emails) {
      string t = "";
      for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '.') continue;
        if (s[i] == '+' || s[i] == '@') break;
        t += s[i];
      }
      t += s.substr(s.find('@'));
      E.insert(t);
    }
    return E.size();
  }
};
