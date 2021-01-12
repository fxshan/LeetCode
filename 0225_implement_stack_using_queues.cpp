class MyStack {
 public:
  queue<int> q1;
  /** Initialize your data structure here. */
  MyStack() {}

  /** Push element x onto stack. */
  void push(int x) {
    queue<int> q2;
    int n = q1.size();
    for (int i = 0; i < n; i++) {
      q2.push(q1.front());
      q1.pop();
    }
    q1.push(x);
    for (int i = 0; i < n; i++) {
      q1.push(q2.front());
      q2.pop();
    }
  }

  /** Removes the element on top of the stack and returns that element. */
  int pop() {
    auto temp = q1.front();
    q1.pop();
    return temp;
  }

  /** Get the top element. */
  int top() { return q1.front(); }

  /** Returns whether the stack is empty. */
  bool empty() { return q1.size() == 0; }
};
