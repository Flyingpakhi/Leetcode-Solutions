class Solution {
public:
    void solve(TreeNode*root,vector<int>&ans,int level){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->val);
    }
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
int findBottomLeftValue(TreeNode* root) {
    vector<int>ans;
    solve(root,ans,0);
    return ans[ans.size()-1];
    }
};