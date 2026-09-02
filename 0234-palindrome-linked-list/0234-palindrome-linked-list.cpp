
 #include <stack>
 using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next){ // if we have 0 or 1 node it will be always palindrome
            return true;
        }
        stack<int> st; //created a stack names st
        ListNode* cur = head;

        while(cur){
            st.push(cur->val);
            cur=cur->next; //pushed all the values in the stack names st
        }

        cur=head; //reseted the current to head
        while(cur){
            int topVal = st.top();  //the top value of the stack 
            st.pop();
            if(cur->val != topVal){ //if they are not equal it will reutrn false
                return false;
                
            }
            cur=cur->next; //move to the next 
        }
        return true; 

                                                                                        
    }
};


//SPACE COMPLEXITY: O(N)
//TIME COMPLEXITY:O(N)