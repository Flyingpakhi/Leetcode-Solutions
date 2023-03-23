class Solution {
public:
    bool hasPath(TreeNode* root,int targetSum,int curr){
        if(root==NULL){
            return false;
        }
        curr+=root->val;
        if((root->left==NULL && root->right==NULL) && targetSum==curr){
            return true;
        }
        return 
            (hasPath(root->left,targetSum,curr))||(hasPath(root->right,targetSum,curr));
      
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int curr=0;
        return hasPath(root,targetSum,curr);
    }
};