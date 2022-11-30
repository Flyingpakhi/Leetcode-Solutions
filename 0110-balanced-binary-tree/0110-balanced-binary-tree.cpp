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
    pair<bool,int>check(TreeNode* root){
    if(root==NULL){
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        pair<bool,int> left=check(root->left);
        pair<bool,int> right=check(root->right);
        bool leftAns=left.first;
        bool rightAns=right.first;
        bool diff=abs(left.second-right.second)<=1;
        pair<bool,int>ans;
        ans.second=max(left.second,right.second)+1;
        if(leftAns && rightAns && diff){
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(TreeNode* root) {
        return check(root).first;
    }
};