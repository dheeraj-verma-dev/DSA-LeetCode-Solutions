// Problem: Remove Duplicates from Sorted List II
// Platform: LeetCode
// Approach: Two Pointers + Store Unique Nodes
// Time Complexity: O(n)
// Space Complexity: O(n)

// Explanation:
// Traverse the sorted linked list using two pointers.
// If a value appears multiple times, skip all duplicates.
// If a node is unique, store its pointer in a vector.
// Reconnect stored nodes at the end.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* temp = head;
        ListNode* a = head;
        ListNode* b = head->next;
        vector<ListNode* > v;
        while(a != NULL){
            bool dup = false;
                while(b != NULL && a->val == b->val){
                    dup = true;
                    b = b->next;
                }
                if(!dup) v.push_back(a);
                
                a = b;
                if(a != NULL) b = a->next;
        }

        if(v.size() == 0) return NULL;
        for(int i = 0; i < v.size() - 1; i++) {
            v[i]->next = v[i + 1];
        }

        v[v.size() - 1]->next = NULL;

        return v[0];
        
    }
};
