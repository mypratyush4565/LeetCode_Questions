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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        struct ListNode*temp=head;
        struct ListNode*temp1=head->next;
        head=temp1;
        while(temp!=NULL && temp1!=NULL){
        struct ListNode *saved=temp1->next;
        temp1->next=temp;
        if(saved!=NULL && saved->next!=NULL){
            temp->next=saved->next;
          }else temp->next=saved;
          temp=saved;
          if(temp!=NULL){
            temp1=temp->next;
          }
          else temp1=NULL;
       }
       return head;
    }
};