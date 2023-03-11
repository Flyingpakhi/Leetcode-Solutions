class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            TreeNode* BST=new TreeNode(head->val); 
            return BST;
        }
        ListNode* pre=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=NULL; //pre uses to point from head to before slow/mid pointer
        TreeNode* root=new TreeNode(slow->val);
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(slow->next);
        return root;
    }
};