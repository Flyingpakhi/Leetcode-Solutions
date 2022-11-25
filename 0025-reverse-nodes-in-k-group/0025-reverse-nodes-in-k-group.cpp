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
    int getLen(ListNode* &head){
    ListNode* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
    ListNode* reverse(ListNode* head, int k){
        if(head==NULL || head->next==NULL || k==1){
            return head;
        }
        int len=getLen(head);
         if(len<k){
            return head;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward;
        int i=0;
        while(curr!=NULL && i<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            i++;
        }
        
        if(forward!=NULL){
            head->next=reverse(forward,k);
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        head=reverse(head,k);
        return head;
    }   
};