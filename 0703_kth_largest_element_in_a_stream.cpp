class KthLargest {
 public:
  int x;
  priority_queue<int, vector<int>, greater<int>> q;
  KthLargest(int k, vector<int>& nums) {
    int i = 0;
    x = k;
    while (i < nums.size()) q.push(nums[i++]);
  }

  int add(int val) {
    q.push(val);
    while (q.size() > x) q.pop();
    return q.top();
  }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
