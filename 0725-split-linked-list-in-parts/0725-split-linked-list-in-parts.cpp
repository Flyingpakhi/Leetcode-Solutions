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
    int count(ListNode* head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> res;
        int c=count(head);
        ListNode* curr=head;
        ListNode* forward=head;
        if(k>c){
            while(curr!=NULL){
                forward=curr;
                res.push_back(curr);
                curr=curr->next;
                forward->next=NULL;
            }
            while(k-c!=0){
                res.push_back(NULL);
                k--;
            }
            return res;
        }
        int ans=c/k;
        int mod=c%k;
        int i=1;
        while(curr!=NULL){
            if(i==ans){
                if(mod>0){
                    mod--;
                    curr=curr->next;
                }
                res.push_back(forward);
                forward=curr->next;
                curr->next=NULL;
                curr=forward;
                i=1;
            }
            else{
                curr=curr->next;
                i++;
            }
        }
        return res;
    }
};