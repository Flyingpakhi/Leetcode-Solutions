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
    int count(ListNode* &head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int c=count(head);
        if(head==NULL || k==0){
            return head;
        }
        ListNode* curr=head;
        ListNode* forward=head;
        k=k%c;
        if(k==0){
            return head;
        }
        int a=1;
        while(curr->next!=NULL){
            if(a==c-k){
                forward=curr;
            }
            curr=curr->next;
            a++;
        }
        curr->next=head;
        head=forward->next;
        forward->next=NULL;
        return head;
        
    }
};