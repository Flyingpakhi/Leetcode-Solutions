class Compare
{
public:
    bool operator()(pair<int,int> a, pair<int,int> b)
    {
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++){
            seen[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>pq;
        for(auto it:seen){
            pq.push({it.first,it.second});
        }
        while(!pq.empty()){
            for(int i=0;i<pq.top().second;i++){
                ans.push_back(pq.top().first);
            }
            pq.pop();
     
        }
        return ans;
    }
};