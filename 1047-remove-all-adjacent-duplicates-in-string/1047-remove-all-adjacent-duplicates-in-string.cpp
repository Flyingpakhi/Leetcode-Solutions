class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>si;
        for(int i=0;i<s.length();i++){
            if(!si.empty()&&s[i]==si.top()){
                si.pop();
            }
            else{
                si.push(s[i]);
            }
        }
        string ans="";
        while(!si.empty()){
            ans+=si.top();
            si.pop();
        }
        string rev=string(ans.rbegin(),ans.rend());
        return rev;
    }
};