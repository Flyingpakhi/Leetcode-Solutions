/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*temp=head;
        unordered_map<ListNode*,bool>seen;
        while(temp!=NULL){
            if(seen.count(temp)>0){
                return true;
            }
            seen[temp]=true;
            temp=temp->next;
        }
        return false;
    }
};