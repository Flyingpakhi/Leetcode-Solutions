class Solution {
public:
    int alphaNum(string s){
        int i=0;
        for(char c:s){
            if(c>='0'&&c<='9'){
                i=i*10+(c-'0');
            }
            else{
                return s.size();
            }
        }
        return i;
    }
    int maximumValue(vector<string>& strs) {
        int maxi=INT_MIN;
        for(int i=0;i<strs.size();i++){
            int val=alphaNum(strs[i]);
            maxi=max(val,maxi);
        }
        return maxi;
    }
};