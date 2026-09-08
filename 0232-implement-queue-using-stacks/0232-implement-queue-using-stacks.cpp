class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);  //directly push in stack 1
        
    }
    
    int pop() { //its job is to return and permanently delete the oldest element 
        peek(); //return the oldest
        int frontElement=s2.top(); //save in temp 
        s2.pop(); //permanently remove
        return frontElement;
        
    }
    
    int peek() {
        if(s2.empty()){
            while(!s1.empty()){ //will loop until s1 is empty
                s2.push(s1.top()); //will push the top element of stack 1 to the stack 2 
                s1.pop(); //remove one by one

            }
        }
        return s2.top(); //its the top element of stack 2
        
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
        
    }
};


//Time complexity : O(1)
//Space complexity : O(n)