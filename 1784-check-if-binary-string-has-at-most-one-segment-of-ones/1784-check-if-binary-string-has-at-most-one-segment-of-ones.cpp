class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag=true;
        int index=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                index=i;
                break;
            }
        }
        for(int i=index;i<s.size();i++){
            if(s[i]=='1'){
                return false;
            }
        }
        return true;
    }
};