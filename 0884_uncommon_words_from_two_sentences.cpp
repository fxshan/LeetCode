class Solution {
 public:
  vector<string> uncommonFromSentences(string s1, string s2) {
    unordered_map<string, int> mp;
    istringstream iss(s1 + " " + s2);
    string str;
    while (iss >> str) mp[str]++;
    vector<string> res;
    for (auto w : mp)
      if (w.second == 1) res.push_back(w.first);
    return res;
  }
};
