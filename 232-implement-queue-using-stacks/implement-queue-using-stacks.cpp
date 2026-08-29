class MyQueue {
public:
    stack<int>st;
    stack<int>s1;

    MyQueue() {
        
    }
    
    void push(int x) {
        
        while(!st.empty()){
            s1.push(st.top());
            st.pop();
        }
        s1.push(x);
        while(!s1.empty()){
            st.push(s1.top());
            s1.pop();
        }
    }
    
    int pop() {
        int x = st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
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