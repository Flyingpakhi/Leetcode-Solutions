/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
struct Listnode* prev,*nextnode;
    prev=0;
    while(head!=0){
        nextnode=head->next;
        head->next=prev;
        prev=head;
        head=nextnode;
    }
    return prev;
}
