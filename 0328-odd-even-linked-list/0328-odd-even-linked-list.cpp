class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head; // 0 or 1 node

        ListNode* odd = head;          // first node
        ListNode* even = head->next;   // second node
        ListNode* evenHead = even;     // save start of even list

        while (even && even->next) {
            odd->next = even->next;    // link odd to next odd
            odd = odd->next;           // move odd forward

            even->next = odd->next;    // link even to next even
            even = even->next;         // move even forward
        }

        odd->next = evenHead;          // attach even list after odd list
        return head;
    }
};

//Time complexity: O(n)
//Space complexity : O(n)