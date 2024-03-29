class MyQueue {
public:
    
    stack<int>st;
    stack<int>st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        st2.push(x);
        
        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
        
    }
    
    int pop() {
        
        int x=st.top();
        st.pop();
        
        return x;
        
       
        
    }
    
    int peek() {
        
        return st.top();
        
    }
    
    bool empty() {
        
        if(!st.empty())
            return false;
        return true;
        
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