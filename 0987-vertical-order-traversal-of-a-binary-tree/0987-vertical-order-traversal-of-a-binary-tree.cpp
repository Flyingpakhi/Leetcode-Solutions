class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>>result;
        vector<int>ans;
        vector<int>res;
        if(root==NULL){
            return result;
        }
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>>temp=q.front();
            q.pop();
            TreeNode* frontNode=temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            nodes[hd][lvl].push_back(frontNode->val);
            if(frontNode->left){
                q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
            }
        }
       for(auto i:nodes){
           for(auto j:i.second){
               for(auto k:j.second){
                   res.push_back(k);
               }
               sort(res.begin(),res.end());
               for(auto l:res)
                    ans.push_back(l);
               while(!res.empty()){
                    res.pop_back();
           }
           }
           result.push_back(ans);
           while(!ans.empty()){
           ans.pop_back();
           }
       }
        return result;
    }
};