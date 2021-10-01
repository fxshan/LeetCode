class Solution {
 public:
  vector<string> commonChars(vector<string>& words) {
    vector<int> cnt(26, 0), cnt1(26, 0);
    for (auto c : words[0]) cnt[c - 'a']++;
    for (int i = 1; i < words.size(); ++i) {
      for (auto c : words[i]) cnt1[c - 'a']++;
      for (int j = 0; j < 26; ++j) {
        cnt[j] = min(cnt[j], cnt1[j]);
        cnt1[j] = 0;
      }
    }
    vector<string> res;
    for (int i = 0; i < 26; ++i) {
      int n = cnt[i];
      while (n--) {
        res.push_back(string(1, i + 'a'));
      }
    }
    return res;
  }
};
