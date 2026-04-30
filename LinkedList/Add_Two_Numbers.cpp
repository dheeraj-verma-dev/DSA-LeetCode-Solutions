// Problem: Add Two Numbers
// Platform: LeetCode
// Approach: Linked List Simulation with Carry
// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m))

// Explanation:
// Traverse both linked lists simultaneously.
// Add corresponding digits along with carry.
// Create new nodes for each resulting digit.
// Use dummy node to simplify result list creation.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;

        while(l1 || l2 || carry) {
            int sum = carry;

            if(l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};
