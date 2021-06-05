class Solution {
 public:
  int calPoints(vector<string>& ops) {
    vector<int> res;
    for (int i = 0; i < ops.size(); i++) {
      if (ops[i] == "C")
        res.pop_back();
      else if (ops[i] == "D")
        res.push_back(2 * res.back());
      else if (ops[i] == "+") {
        int n = res.size();
        res.push_back(res[n - 1] + res[n - 2]);
      } else
        res.push_back(stoi(ops[i]));
    }
    return accumulate(res.begin(), res.end(), 0);
  }
};
