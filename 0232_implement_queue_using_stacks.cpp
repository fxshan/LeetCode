class MyQueue {
 public:
  stack<int> s1;
  /** Initialize your data structure here. */
  MyQueue() {}

  /** Push element x to the back of queue. */
  void push(int x) {
    stack<int> s2;
    int n = s1.size();
    for (int i = 0; i < n; i++) {
      s2.push(s1.top());
      s1.pop();
    }
    s1.push(x);
    for (int i = 0; i < n; i++) {
      s1.push(s2.top());
      s2.pop();
    }
  }

  /** Removes the element from in front of queue and returns that element. */
  int pop() {
    auto temp = s1.top();
    s1.pop();
    return temp;
  }

  /** Get the front element. */
  int peek() { return s1.top(); }

  /** Returns whether the queue is empty. */
  bool empty() { return s1.empty(); }
};
