class Solution {
 public:
  bool isIsomorphic(string s, string t) {
    int n = s.size();
    map<char, char> mp;
    set<char> set;
    for (int i = 0; i < n; i++) {
      if (!mp.count(s[i]) && !set.count(t[i])) {
        mp[s[i]] = t[i];
        set.insert(t[i]);
      } else if (mp[s[i]] == t[i])
        continue;
      else
        return false;
    }
    return true;
  }
};
