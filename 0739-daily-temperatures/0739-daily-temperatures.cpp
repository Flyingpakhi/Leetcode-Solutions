class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //make a stack temp of pair of temperature value and their index
        stack<pair<int,int>>temp;
        //push the first value and index in temp
        temp.push(make_pair(temperatures[0],0));
        vector<int>ans(temperatures.size());
        //fill the value with 0
        fill(ans.begin(),ans.end(),0);
        //traverse through the temperatures array
        for(int i=1;i<temperatures.size();i++){
            //looping till temperature value is greater than top value
            while(!temp.empty() && temp.top().first<temperatures[i]){
                pair<int,int>p=temp.top();
                int index=p.second;
                //fill the array index
                ans[index]=i-index;
                //pop the element after filling the ans 
                temp.pop();
            }
                temp.push(make_pair(temperatures[i],i));
        }
        return ans;
    }
};