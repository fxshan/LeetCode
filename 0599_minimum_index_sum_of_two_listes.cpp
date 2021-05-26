class olution {
 public:
  vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    vector<string> res;
    unordered_map<string, int> mp;
    for (int i = 0; i < list1.size(); i++) mp[list1[i]] = i;
    int ind, sum = 2000;
    for (int i = 0; i < list2.size(); i++) {
      auto m = mp.find(list2[i]);
      if (m == end(mp)) continue;
      ind = m->second + i;
      if (ind == sum) res.push_back(list2[i]);
      if (ind < sum) {
        res = {list2[i]};
        sum = ind;
      }
    }
    return res;
  }
};
