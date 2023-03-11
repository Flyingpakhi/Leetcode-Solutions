class Solution {
public:
    TreeNode* help(TreeNode* root,vector<int>&nums,int s,int e){
        if(s>e){ 
            return root;
        }
        int mid=s+(e-s)/2;
        root=new TreeNode(nums[mid]);
        root->left=help(root->left,nums,s,mid-1);
        root->right=help(root->right,nums,mid+1,e);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        TreeNode*root=NULL;
        root=help(root,nums,s,e);
        return root;
    }
};