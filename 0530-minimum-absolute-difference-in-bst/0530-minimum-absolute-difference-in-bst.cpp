/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& ans){
    if(root==NULL){
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        int val=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            int j=i+1;
            if((ans[j]-ans[i])<val){
               val=ans[j]-ans[i]; 
            }
        }
        return val;
    }
};