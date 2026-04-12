// Problem: Reverse Linked List
// Platform: LeetCode
// Approach: Using Stack
// Time Complexity: O(n)
// Space Complexity: O(n)

// Explanation:
// We push all nodes into a stack, then pop them one by one
// and rebuild the linked list in reverse order.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;

        stack<ListNode*> st;

        while(head != NULL){
            st.push(head);
            head = head->next;
        }
        head = st.top();
        st.pop();
        ListNode* temp = head;
        while(st.size()>0){
            temp->next = st.top();
            st.pop();
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
};
