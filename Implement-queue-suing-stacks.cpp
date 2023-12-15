class MyQueue {
public:
    queue<int>q;
    int number;
    MyQueue() { 
    }

    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        number = q.front();
        q.pop();
        return number; 
    }
    
    int peek() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};