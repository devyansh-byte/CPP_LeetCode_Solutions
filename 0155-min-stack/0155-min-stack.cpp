class MinStack {
public:
   stack<int> st;
   stack<int> pt;
   int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
         if(pt.empty()) pt.push(value);
        else if(value<pt.top()) pt.push(value);
        else pt.push(pt.top());
    
    }
    
    void pop() {
        st.pop();
        pt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return pt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */