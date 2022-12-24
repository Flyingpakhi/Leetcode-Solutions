class Solution {
public:
    int findPos(vector<int>in,int element){
        for(int i=0;i<in.size();i++){
            if(in[i]==element){
                in[i]=-1;
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>in,vector<int>pre,int &index,int inorderS,int inorderE){
        if(index>=in.size() || inorderS>inorderE){
            return NULL;
        }
        int element=pre[index++];
        TreeNode* root=new TreeNode(element);
        int pos=findPos(in,element);
        // cout<<pos<<endl;
        // cout<<index<<" "<<inorderS<<" "<<inorderE<<" "<<endl;
        root->left=solve(in,pre,index,inorderS,pos-1);
        root->right=solve(in,pre,index,pos+1,inorderE);
        return root;
        }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int preOrderIndex=0;
     TreeNode* temp=solve(inorder,preorder,preOrderIndex,0,inorder.size()-1);
     return temp;
    }
};