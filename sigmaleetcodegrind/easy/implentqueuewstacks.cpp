class MyQueue {
public:

    stack<int> s1;
    stack<int> s2;
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if (s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
            }
        } 
        int front = s2.top();
        s2.pop();
        return front;
    }
    
    int peek() {
        if (s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
            } 
        }
        int front = s2.top();
        return front;
    }
    
    bool empty() {
        if (s1.empty() && s2.empty()){
            return true;
        } return false;
    }
};
