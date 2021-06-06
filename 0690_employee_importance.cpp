/*
// Definition for Employee.
class Employee {
public:
    int i;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
 public:
  unordered_map<int, Employee*> mp;

  int dfs(int id) {
    int ans = mp[id]->importance;
    for (int subs : mp[id]->subordinates) ans += dfs(subs);
    return ans;
  }

  int getImportance(vector<Employee*> employees, int id) {
    for (auto x : employees) mp[x->id] = x;
    return dfs(id);
  }
};
