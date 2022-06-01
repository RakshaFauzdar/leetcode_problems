class MyQueue {
public:
    stack<int>s;
    stack<int>tmp;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(s.empty()==false)
        {
            tmp.push(s.top());
            s.pop();
        }
        tmp.push(x);
        while(tmp.empty()==false)
        {
            s.push(tmp.top());
            tmp.pop();
        }
        
    }
    
    int pop() {
        int x=s.top();
        s.pop();
        
        return x;
        
    }
    
    int peek() {
        return s.top();
        
    }
    
    bool empty() {
        
        return s.empty();
        
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