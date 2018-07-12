class MyQueue {
public:
    stack<int> sta;
    stack<int> tmp;
    int size;
    /** Initialize your data structure here. */
    MyQueue() {
        size = 0;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        size = sta.size();
        int n;
        for(int i=0;i<size;i++){
            n = sta.top();
            sta.pop();
            tmp.push(n);
        }
        tmp.push(x);
        for(int i=0;i<size+1;i++){
            n = tmp.top();
            tmp.pop();
            sta.push(n);
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int num = sta.top();
        sta.pop();
        return num;
    }
    
    /** Get the front element. */
    int peek() {
        return sta.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return sta.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */