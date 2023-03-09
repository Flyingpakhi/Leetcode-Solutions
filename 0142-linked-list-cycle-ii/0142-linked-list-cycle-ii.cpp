/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<unordered_map>
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*temp=head;
        unordered_map<ListNode*,bool>seen;
        while(temp!=NULL){
            if(seen.count(temp)>0){
                return temp;
            }
            seen[temp]=true;
            temp=temp->next;
        }
        return NULL;
        
    }
};