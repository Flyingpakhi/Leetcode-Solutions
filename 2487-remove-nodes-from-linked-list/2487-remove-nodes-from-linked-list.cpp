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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* chota=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return chota;
    }
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        head=reverse(head);
        int maxm=head->val;
        ListNode* tempu=NULL;
        ListNode* temp=head->next;
        ListNode* curr=head;
        while(temp->next!=NULL){
            if(temp->val<maxm){
                tempu=temp;
                temp=temp->next;
                tempu->next=NULL;
            }
            else{
                maxm=max(maxm,temp->val);
                curr->next=temp;
                temp=temp->next;
                curr=curr->next;
            }
        }
        curr->next=temp;
        curr=curr->next;
        ListNode* ans=reverse(head);
        if(ans->val<maxm){
            ans=ans->next;
        }
            
            return ans;
    }
};