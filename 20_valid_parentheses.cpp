class Solution {
 public:
  bool isValid(string s) {
    if (s.empty()) return true;
    map<char, int> mp;
    mp[')'] = '(';
    mp['}'] = '{';
    mp[']'] = '[';
    string t = "";
    for (char c : s) {
      if (!mp.count(c))
        t.push_back(c);
      else {
        if (t.empty())
          return false;
        else if (mp[c] != t.back())
          return false;
        t.pop_back();
      }
    }
    if (!t.empty()) return false;
    return true;
  }
};
