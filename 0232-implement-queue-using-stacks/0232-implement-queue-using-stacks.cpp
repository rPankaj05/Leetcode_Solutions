class MyQueue {
public:
    
    stack<int> input, output;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(!output.empty()) {
            int ans=output.top();
            output.pop();
            return ans;
        }
        
        
            while(!input.empty()){
                int tmp=input.top();
                input.pop();
                output.push(tmp);
            }
          
            int ans=output.top();
            output.pop();
            return ans;
        
    }
    
    int peek() {
        if(!output.empty()){
            return output.top();
        }
        
        while(!input.empty()){
            int tmp=input.top();
            input.pop();
            output.push(tmp);
        }
        
        return output.top();
    }
    
    bool empty() {
        return ( output.empty() and input.empty() ) ;
        
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