

class Solution {
public:
    int Depth(Node* root) {
    if(root==NULL){
        return 0;
    }
    int maxHeight=0;
    for(int i=0;i<root->children.size();i++){
        maxHeight=max(maxHeight,Depth(root->children[i]));
    }
    return maxHeight+1;
}

    int maxDepth(Node* root) {
        int final=Depth(root);
    return final;
    }
};