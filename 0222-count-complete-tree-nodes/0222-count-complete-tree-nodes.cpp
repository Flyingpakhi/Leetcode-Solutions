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
/*void inorder(TreeNode* root,int& count){
        if(root==NULL){
            return ;
        }
        inorder(root->left,count);
        count++;
        inorder(root->right,count);
    }
    int countNodes(TreeNode* root) {
        int count=0;
        inorder(root,count);
        return count;
    }*/
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int l=1; //leftlevels count
        int r=1; //right levels count
        TreeNode* temp=root;
        while(temp->left!=NULL){
            temp=temp->left;
            l++;
        }
        temp=root;
        while(temp->right!=NULL){
            temp=temp->right;
            r++;
        }
        if(l==r){
            return pow(2,l)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
        
    }
};