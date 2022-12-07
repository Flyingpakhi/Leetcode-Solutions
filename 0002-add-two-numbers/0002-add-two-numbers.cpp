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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* temp=new ListNode(0);
        ListNode* curr=temp;
        ListNode* head=temp;
        int sum,digit;
        while(l1!=NULL || l2!=NULL){
            if(l1==NULL){
                sum=l2->val+carry;
            }
            else if(l2==NULL){
                sum=l1->val+carry;
            }
            else{
                sum=l1->val+l2->val+carry;
            }
            if(sum>9){
                digit=sum%10;
                carry=sum/10;
            }
            else{
                digit=sum;
                carry=sum/10;
            }
            ListNode* newnode=new ListNode(digit);
                curr->next=newnode;
                curr=curr->next;
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        if(carry>0){
            ListNode* newnode=new ListNode(carry);
            curr->next=newnode;
            curr=curr->next;
        }
        return head->next;
    }
};