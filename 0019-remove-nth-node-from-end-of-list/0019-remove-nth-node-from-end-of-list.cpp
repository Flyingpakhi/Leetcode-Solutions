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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=getLen(head);
        if(len-n==0){
            head=head->next;
            return head;
        }
        int i=0;
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(i<len-n){
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        return head;
    }
};