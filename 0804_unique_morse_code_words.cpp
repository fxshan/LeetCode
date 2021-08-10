class Solution {
 public:
  int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse = {
        ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
        ".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
        "...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--.."};
    unordered_set<string> res;
    for (string word : words) {
      string temp;
      for (char c : word) temp += morse[c - 'a'];
      res.insert(temp);
    }
    return res.size();
  }
};
