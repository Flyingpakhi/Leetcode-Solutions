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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* temp_node=new ListNode(0);
        ListNode* currnode=temp_node;
        ListNode* head=temp_node;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                currnode->next=list1;
                list1=list1->next;
                currnode=currnode->next;
            }
            else{
                currnode->next=list2;
                list2=list2->next;
                currnode=currnode->next;
            }
        }
        while(list1!=NULL){
            currnode->next=list1;
            list1=list1->next;
            currnode=currnode->next;
        }
        while(list2!=NULL){
            currnode->next=list2;
            list2=list2->next;
            currnode=currnode->next;
        }
        head=head->next;
        return head;
    }
};