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
    ListNode* oddEvenList(ListNode* head) {
    ListNode* curr=head;
	ListNode* oddH=NULL;
	ListNode* oddT=NULL;
    ListNode* evenH =NULL;
    ListNode* evenT =NULL;
    int i=0;
	while(curr!=NULL){
		if(i%2!=0){
			if(oddH==nullptr){
				oddH=curr;
				oddT=oddH;
                        }
			 else {
                    oddT->next = curr;
                    oddT = oddT->next;
                    }
                } 
				else {
                  if (evenH == nullptr) {
                    evenH = curr;
                    evenT = evenH;
                  } else {
                    evenT->next = curr;
                    evenT = evenT->next;
                  }
                }
            curr=curr->next;
            i++;
        }
		if(oddH==nullptr || evenH==nullptr){
			return head;
		}
    evenT->next=oddH;
	oddT->next=NULL;
	return evenH;
    }
};