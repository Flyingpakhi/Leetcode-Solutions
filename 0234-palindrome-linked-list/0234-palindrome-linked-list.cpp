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
ListNode *reverseLinkedListRec(ListNode *head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }
  ListNode *chota = reverseLinkedListRec(head->next);
  head->next->next = head;
  head->next = NULL;
  return chota;
}
ListNode* middle(ListNode* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	if(head->next->next==NULL){
		return head->next;
	}
	ListNode* fast=head->next;
	ListNode* slow=head;
	while(fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
		}
		slow=slow->next;
	}
	return slow;
}
bool isPalindrome(ListNode *head)
{
	if(head==NULL){
		return true;
	}
	ListNode* temp1=head;
	ListNode* temp=middle(head);
	ListNode* tempu=temp;
	temp->next=reverseLinkedListRec(temp->next);
	while(temp->next!=NULL){
		if(temp1->val!=temp->next->val){
			return false;
		}
		else{
			temp1=temp1->next;
			temp=temp->next;
		}
	}
	if(tempu!=temp1){
		if(temp1->val==tempu->val){
			return true;
		}
		else{
			return false;
		}
	}
	return true;
}
};