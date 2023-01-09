class Solution {
public:
    void preorder(TreeNode* root,vector<int>& ans){
        if(root==NULL){
            return ;
        }
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    void flatten(TreeNode* root) {
        vector<int>ans;
        preorder(root,ans);
        TreeNode* temp=root;
        for(int i=1;i<ans.size();i++){
            TreeNode* curr=new TreeNode(ans[i]);
            temp->right=curr;
            temp->left=NULL;
            temp=temp->right;
        }
    }
};