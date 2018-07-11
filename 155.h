class MinStack {
public:
    /** initialize your data structure here. */
    int array[100000];
    int pointer;
    int min;
    MinStack() {
        pointer = 0;
        min = INT_MAX;
    }
    
    void push(int x) {
        array[pointer++]=x;
        if(x<min) min = x;
    }
    
    void pop() {
        pointer--;
        min = INT_MAX;
        for(int i=0;i<pointer;i++){
            if(array[i]<min) min = array[i];
        }
    }
    
    int top() {
        return array[pointer-1];
        
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */