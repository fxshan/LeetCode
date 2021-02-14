class Solution {
 public:
  string reverseVowels(string s) {
    unordered_map<char, int> mp;
    for (char c : "aeiouAEIOU") mp[c] = 1;
    int n = s.size(), i = 0, j = n - 1;
    while (i < j) {
      while (i < j && !mp.count(s[i])) i++;
      while (i < j && !mp.count(s[j])) j--;
      swap(s[i++], s[j--]);
    }
    return s;
  }
};
