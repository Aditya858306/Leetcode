class MyStack {
public:
    queue<int> p1;
    queue<int>p2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(p1.empty()){
            p1.push(x);
        }
        else{
            while(!p1.empty()){
                p2.push(p1.front());
                p1.pop();
            }
            p1.push(x);
            while(!p2.empty()){
                p1.push(p2.front());
                p2.pop();
            }
        }
    }
    
    int pop() {
        int x = p1.front();
        p1.pop();
        return x;
    }
    
    int top() {
        return p1.front();
    }
    
    bool empty() {
        return p1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */