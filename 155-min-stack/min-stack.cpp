class MinStack {
public:
    stack<long long>st;
    long long minival;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
             minival = val;
            st.push(val);
        }
        else{
            if(val >= minival){
                st.push(val);
            }else{
                st.push(2LL *val - minival);
                minival = val;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long topval = st.top();
        st.pop();
        if(topval < minival){
            minival = (2LL * minival - topval);
        }
    }
    
    int top() {
        long long topval = st.top();
        if (topval < minival) {
            return (int)minival;
        }
        return (int)topval;
    
    }
    
    int getMin() {
        return minival;
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