class Solution {
 public:
  int romanToInt(string s) {
    map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    int n = s.size();
    int a, b, res = mp[s[n - 1]];
    for (int i = 0; i < n - 1; i++) {
      a = mp[s[i]], b = mp[s[i + 1]];
      if (a >= b)
        res += a;
      else
        res -= a;
    }
    return res;
  }
};
