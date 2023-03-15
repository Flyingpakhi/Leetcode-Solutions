class Solution {
public:
    int maxPower(string s) {
        int val=1;
        int max=INT_MIN;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                val+=1;
            }
            else{
                if(max<val){
                    max=val;
                }
                val=1;
            }
        }
        if(max<val){
                    max=val;
                }
        return max;
    }
};