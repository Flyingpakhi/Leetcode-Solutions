class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count=0;
        string ans="";
        while(ans.size()<b.size()){
            ans+=a;
            count++;
        }
            size_t found = ans.find(b);
            if (found != string::npos){
                return count;
            }
            ans+=a;
            count++;
            found = ans.find(b);
            if (found != string::npos){
                return count;
            }      
        return -1;
        }
};