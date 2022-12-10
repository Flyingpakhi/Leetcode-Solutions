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
    TreeNode* minrange(TreeNode* root){
    TreeNode* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
        return root;
    }
    if(root->val==key){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left part
        if(root->left!=NULL && root->right==NULL){
            TreeNode* temp=root->left;
            delete root;
            return temp;
        }
        //right part
        if(root->right!=NULL && root->left==NULL){
            TreeNode* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int minval=minrange(root->right)->val;
            root->val=minval;
            root->right=deleteNode(root->right,minval);
            return root;
        }
    }
    else if(root->val<key){
        root->right=deleteNode(root->right,key);
        return root;
    }
    else{
        root->left=deleteNode(root->left,key);
        return root;
    }
    return root;
}
};