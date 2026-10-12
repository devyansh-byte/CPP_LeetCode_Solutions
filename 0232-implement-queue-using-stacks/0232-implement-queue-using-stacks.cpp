class MyQueue {
public:
stack<int> st1;//treat as original
stack<int> st2;//use and throw
int size;
    MyQueue() {
        size=0;
    }
    
    void push(int x) {
        while(!(st1.empty())){
            st2.push(st1.top());
            st1.pop();
        }
        st2.push(x);
         while(!(st2.empty())){
            st1.push(st2.top());
            st2.pop();
        }
        size++;
        //now st1 ka top hi pushed ele hai.
    }
    
    int pop() {
        int x=st1.top();
        st1.pop();
        size--;
        return x;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        if((st1.empty())) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */