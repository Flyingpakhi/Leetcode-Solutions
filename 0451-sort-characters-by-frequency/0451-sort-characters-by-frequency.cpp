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
//         declare an empty string
        string st="";
//         declare an u_map seen to store the frequency of each char of the string
        unordered_map<char,int>seen;
        for(int i=0;i<s.size();i++){
            seen[s[i]]++;
        }
// declare a priority queue->sorting done on the basis of second elements of pq
        //max heap->top element->max value from second elements of pq
        priority_queue<pair<char,int>,vector<pair<char,int>>,Compare>pq;
        for(auto it:seen){
            pq.push({it.first,it.second});
        }
//         pop out the highest frequency element and store it in string
        while(!pq.empty()){
            for(int i=0;i<pq.top().second;i++){
                st+=pq.top().first;
            }
            pq.pop();
        }
        return st;
    }
};