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
    void swap(ListNode* A,ListNode* B){
        int temp=A->val;
        A->val=B->val;
        B->val=temp;
    }
    void reverse(vector<ListNode*> &arr){
        int i=0,j=arr.size()-1;
        while(i<=j){
            swap(arr[i++],arr[j--]);
        }
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* curr=head;
        int i=1;
        int count=0;
        vector<ListNode*>res;
        while(curr!=NULL){
            res.push_back(curr);
            curr=curr->next;
            count++;
            if(i==count){
                if(count%2==0){
                    reverse(res);
                }
                    res.clear();
                    i++;
                    count=0;
                }
            }
        if(count%2==0){
            reverse(res);
        }
        return head;
    }
};