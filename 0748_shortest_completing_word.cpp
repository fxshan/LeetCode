class Solution {
 public:
  string shortestCompletingWord(string licensePlate, vector<string>& words) {
    vector<int> v(26);
    for (char c : licensePlate) {
      if (isalpha(c)) v[tolower(c) - 'a']++;
    }
    string res = "aaaaaaaaaaaaaaa";
    for (auto word : words) {
      bool ok = true;
      vector<int> a = v;
      for (char c : word) a[c - 'a']--;
      for (int i : a) {
        if (i > 0) ok = false;
      }
      if (ok == true & word.size() < res.size()) res = word;
    }
    return res;
  }
};
