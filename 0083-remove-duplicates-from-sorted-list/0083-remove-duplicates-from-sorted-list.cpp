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
    ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL || head->next==NULL){
		return head;
	}
    ListNode* t1=head;
	ListNode* temp;
	ListNode* t2=head->next;
	while(t2->next!=NULL){
		if(t1->val!=t2->val){
			t1->next=t2;
			t1=t2;
			t2=t2->next;
		}
		else{
			temp=t2;
			t2=t2->next;
			temp->next=NULL;
		}
	}
	if(t1->val==t2->val){
		t1->next=NULL;
        t2->next=NULL;
	}
	else{
		t1->next=t2;
	}
	return head;
    }
};