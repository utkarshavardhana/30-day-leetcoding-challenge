class MinStack {
public:
    struct Node{
        int val;
        int min_n;
        Node(int x,int y):val(x),min_n(y) {}
    }; 
    stack<Node> s;
    
    MinStack() {}
    
    void push(int x) {
        if(s.empty())   s.push(Node(x,x));
        else    s.push(Node(x,min(x,s.top().min_n)));
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().val;
    }
    
    int getMin() {
        return s.top().min_n;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
