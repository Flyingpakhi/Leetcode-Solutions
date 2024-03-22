class Solution {
public:
    bool sub(int low,int high,string& s){
        if(low>=high){
            return true;
        }
        if(s[low]!=s[high]){
            return false;
        }
        return sub(low+1,high-1,s);
    }
    bool validPalindrome(string s) {
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            if(s[i]!=s[j]){
                return sub(i+1,j,s)||sub(i,j-1,s);
            }
        }
        return true;
        
    }
};