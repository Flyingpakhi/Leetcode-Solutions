int find(vector<int>post,int element){
    for(int i=0;i<post.size();i++){
        if(post[i]==element){
            post[i]=-1;
            return i;
        }
    }
    return -1;
}
TreeNode* solve(vector<int>pre,vector<int>post,int &index,int postS,int postE,int n){
        if(index>=n || postS>postE){
            return NULL;
        }
        TreeNode* root=new TreeNode(pre[index]);
        index++;
        if(postS==postE){
            return root;
        }
        int element=pre[index];
        int i=find(post,element);
        // int i;
        // for(i=postS;i<=postE;++i){
        //     if(element==post[i]){
        //         break;
        //     }
        // }
        if(i<=postE){
        root->left=solve(pre,post,index,postS,i,n);
        root->right=solve(pre,post,index,i+1,postE-1,n);
        }
        return root;
        }
class Solution {
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int preOrderIndex=0;
        TreeNode* temp=solve(preorder,postorder,preOrderIndex,0,preorder.size()-1,preorder.size());
        return temp;
    }
};