class Solution {
public:
    void num(TreeNode* root,int& curr,int sum){
       if(root==NULL){
            return ;
        } 
        sum=sum*10+root->val;
        if(root->left==NULL && root->right==NULL){
            curr+=sum;
        }
        num(root->left,curr,sum);
        num(root->right,curr,sum);
    }
    int sumNumbers(TreeNode* root) {
        int curr=0;
        num(root,curr,0);
        return curr;
        
    }
};