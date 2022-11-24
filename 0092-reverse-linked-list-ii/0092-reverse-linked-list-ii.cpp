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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL){
        return head;
    }
    int k=right-left;
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* forward;
    ListNode* tail;
    ListNode* tail1=NULL;
        int j=0;
    while(j<left-1){
        tail1=curr;
        curr=curr->next;
        j++;
    }
    tail=curr;
    int i=0;
    while(curr!=NULL && i<=k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        i++;
    }
    if(left==1){
    head=prev;
    tail->next=curr; 
    }
    else{
    tail1->next=prev;
    tail->next=curr;
    }
    return head;
    }
};