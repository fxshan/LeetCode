class Solution {
 public:
  string mostCommonWord(string p, vector<string> &banned) {
    string res;
    unordered_map<string, int> mp;
    for (auto &c : p) c = isalpha(c) ? tolower(c) : ' ';
    istringstream iss(p);
    string word;
    while (iss >> word) mp[word]++;
    for (auto &b : banned) mp[b] = 0;
    int max_cnt = 0;
    for (auto x : mp) {
      if (x.second > max_cnt) {
        res = x.first;
        max_cnt = x.second;
      }
    }
    return res;
  }
};
