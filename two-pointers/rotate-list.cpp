class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || !head->next || k == 0) return head;

        // Step 1: find length of list
        int n = 0;
        ListNode* t = head;
        while (t) {
            n++;
            t = t->next;
        }

        // Step 2: reduce k
        k = k % n;
        if (k == 0) return head;  // No rotation needed

        // Step 3: perform k times your 1-rotation logic
        while (k--) {
            ListNode* temp = head;
            ListNode* temp1 = NULL;

            // Move temp to last node
            while (temp->next != NULL) {
                temp1 = temp;
                temp = temp->next;
            }

            // Rotate once
            temp->next = head;   // last node points to head
            temp1->next = NULL;  // second-last becomes last
            head = temp;         // new head = temp
        }

        return head;
    }
};
