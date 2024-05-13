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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            if(curr->val==val){
                if(prev==NULL){
                    ListNode* temp=curr;
                    curr=curr->next;
                    head=curr;
                    temp->next=NULL;
                    delete temp;
                }
                else{
                    prev->next=curr->next;
                    ListNode* temp=curr;
                    curr=curr->next;
                    temp->next=NULL;
                    delete temp;
                }
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};