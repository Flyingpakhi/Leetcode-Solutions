class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        unordered_map<char,int>s1;
        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            //key found
            if(s1[t[i]]>0){
                s1[t[i]]--;
            }
            else{
                count++;
            }
        }
        for (auto x : s1) {
            if(x.second>0){
                count+=x.second;
            }
            // cout<<x.first<<" "<<x.second<<endl;
        }
        return count;
    }
};