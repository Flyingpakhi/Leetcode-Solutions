class Solution {
public:
    bool hasPath(TreeNode* root,int targetSum){
        if(root==NULL){
            return false;
        }
        if((root->left==NULL && root->right==NULL) && targetSum-root->val==0){
            return true;
        }
        return 
            (hasPath(root->left,targetSum-root->val))||(hasPath(root->right,targetSum-root->val));
      
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return hasPath(root,targetSum);
    }
};