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
    void preorder(TreeNode* root,int &count,int maxm){
        if(root==NULL){
            return ;
        }
        if(root->val>=maxm){
            count++;
            maxm=max(maxm,root->val);
        }
        preorder(root->left,count,maxm);
        preorder(root->right,count,maxm);
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        preorder(root,count,root->val);
        return count;
    }
};