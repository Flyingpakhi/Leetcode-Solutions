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
    /*int getLen(ListNode* &head){
    ListNode* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
    ListNode* middleNode(ListNode* head) {
        int len=getLen(head);
            int pos=len/2+1;
            ListNode* temp=head;
            int i=1;
            while(i<pos){
                temp=temp->next;
                i++;
            }
            head=temp;
        return head;
    }*/
     ListNode* middleNode(ListNode* head){
         if(head==NULL||head->next==NULL){
             return head;
         }
         if(head->next->next==NULL){
             return head->next;
         }
         ListNode* fast=head->next;
         ListNode* slow=head;
         while(fast!=NULL){
             fast=fast->next;
             if(fast!=NULL){
                 fast=fast->next;
             }
             slow=slow->next;
         }
         return slow;
     }   
};