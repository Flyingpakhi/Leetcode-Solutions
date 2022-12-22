/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>result;
        if(root==NULL){
            return result;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
        int size=q.size();
        vector<int> ans(size);
        for(int i=0;i<size;i++){
        Node* temp=q.front();
        q.pop();
        ans[i]=temp->val;
        for(int i=0;i<temp->children.size();i++){
              q.push(temp->children[i]);
        }
        }
            result.push_back(ans);
    }
        return result;
    }
};