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
    int height(TreeNode* node){
        if(node==NULL){
            return 0;
        }
        int lefti=height(node->left);
        int righti=height(node->right);
        int ans=max(lefti,righti)+1;
        return ans;
    }
    int diameterOfuBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftu=diameterOfuBinaryTree(root->left);
        int rightu=diameterOfuBinaryTree(root->right);
        int combo=height(root->left)+1+height(root->right);
        int final=max(leftu,max(rightu,combo));
        return final;
    }
    int diameterOfBinaryTree(TreeNode* root){
        int ans=diameterOfuBinaryTree(root);
        return ans-1;
    }
};