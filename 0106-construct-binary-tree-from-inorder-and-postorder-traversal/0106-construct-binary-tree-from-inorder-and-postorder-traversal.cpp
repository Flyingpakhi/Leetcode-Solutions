
class Solution {
public:
    int findPos(vector<int>in,int element){
        for(int i=in.size()-1;i>=0;i--){
            if(in[i]==element){
                in[i]=-1;
                return i;
            }
        }
        return -1;
    }
    TreeNode* solve(vector<int>in,vector<int>post,int &index,int inorderS,int inorderE){
        if(index<0 || inorderS>inorderE){
            return NULL;
        }
        int element=post[index--];
        TreeNode* root=new TreeNode(element);
        int pos=findPos(in,element);
        // cout<<pos<<endl;
        // cout<<index<<" "<<inorderS<<" "<<inorderE<<" "<<endl;
        root->right=solve(in,post,index,pos+1,inorderE);
        root->left=solve(in,post,index,inorderS,pos-1);
        return root;
        }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    int postOrderIndex=inorder.size()-1;
     TreeNode* temp=solve(inorder,postorder,postOrderIndex,0,inorder.size()-1);
     return temp;
    }
};