class Solution {
public:
    int find(vector<int>in,int element){
        for(int i=0;i<in.size();i++){
            if(in[i]==element){
                in[i]=-1;
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>inorder,vector<int>preorder,int& index,int inorderS,int inorderE,int n){
        if(index>=n || inorderS>inorderE){
            return NULL;
        }
        int element=preorder[index++];
        TreeNode* root=new TreeNode(element);
        int pos=find(inorder,element);
        root->left=solve(inorder,preorder,index,inorderS,pos-1,n);
        root->right=solve(inorder,preorder,index,pos+1,inorderE,n);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder;
        for(int i=0;i<preorder.size();i++){
            inorder.push_back(preorder[i]);
        }
        sort(inorder.begin(),inorder.end());
        int index=0;
        int n=inorder.size();
        TreeNode* root=solve(inorder,preorder,index,0,n-1,n);
        return root;
    }
};