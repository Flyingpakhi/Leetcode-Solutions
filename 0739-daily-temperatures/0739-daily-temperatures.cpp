class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>temp;
        temp.push(make_pair(temperatures[0],0));
        vector<int>ans(temperatures.size());
        fill(ans.begin(),ans.end(),0);
        
        for(int i=1;i<temperatures.size();i++){
            while(!temp.empty() && temp.top().first<temperatures[i]){
                pair<int,int>p=temp.top();
                int index=p.second;
                ans[index]=i-index;
                temp.pop();
            }
                temp.push(make_pair(temperatures[i],i));
        }
        return ans;
    }
};