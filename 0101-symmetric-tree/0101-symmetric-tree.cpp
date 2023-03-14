class Solution {
public:
    bool help(TreeNode* leftT,TreeNode* rightT){
        if(leftT==NULL ||rightT==NULL){
            return leftT==rightT;
        }
        if(leftT->val!=rightT->val){
            return false;
        }
        return help(leftT->left,rightT->right) && help(leftT->right,rightT->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool ans=help(root->left,root->right);
        return ans;
    }
};