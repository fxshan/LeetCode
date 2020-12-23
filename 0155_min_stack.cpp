class MinStack {
 public:
  stack<pair<int, int>> s;
  /** initialize your data structure here. */
  MinStack() {}

  void push(int x) {
    if (s.empty())
      s.push({x, x});
    else
      s.push({x, min(x, s.top().second)});
  }

  void pop() {
    if (!s.empty()) s.pop();
  }

  int top() { return s.top().first; }

  int getMin() { return s.top().second; }
};
