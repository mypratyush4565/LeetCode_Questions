/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode* temp1=head;
        int count=0;
        while(temp1!=NULL){
        count++;
        temp1=temp1->next;
        }
       if (n == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;}
       temp1=head;
        for(int i=1;i<count-n;i++){
            temp1=temp1->next;
        }
        ListNode* nodedeleted=temp1->next;
        temp1->next=temp1->next->next;
        delete nodedeleted;
        return head;
        }
            
    };