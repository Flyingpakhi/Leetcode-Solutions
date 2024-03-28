class Compare
{
public:
    bool operator()(pair<char,int> a, pair<char,int> b)
    {
        return a.second<b.second;
    }
};
class Solution {
public:
    string frequencySort(string s) {
        string st="";
        unordered_map<char,int>seen;
        for(int i=0;i<s.size();i++){
            seen[s[i]]++;
        }
        priority_queue<pair<char,int>,vector<pair<char,int>>,Compare>pq;
        for(auto it:seen){
            pq.push({it.first,it.second});
        }
        while(!pq.empty()){
            for(int i=0;i<pq.top().second;i++){
                st+=pq.top().first;
            }
            pq.pop();
        }
        return st;
    }
};